# TIL 220428Operation

## 🔥학습 내용
## Operation
- GCD를 객체지향적으로 활용하는 high-level API 따라서 내부적으로 GCD를 사용
- GCD에서 Task라고 불렀던 코드 블록들을 캡슐화, 객체화 해낸 것
- OperationQueue를 활용하여 Operation 객체를 실행
- GCD에 비해 조금 더 복잡하지만 작업 간의 종속성 추가, 재사용, 취소, 일시 중지가 가능

```swift
class Operation: NSObject
```
- 추상 클래스
- 커스텀 클래스로 직접 만들어주거나 `BlockOperation` 이라는 하위 클래스를 사용하는 방법이 있음
```swift
class BlockOperation: Operation
```

#### Operation 생성
```swift
let operation = BlockOperation {
    // some code
}

// BlockOperation의 메서드
operation.addExecutionBlock {
    // Operation의 동작이 끝나고 난 후에 원하는 코드를 실행
}

// Operation의 프로퍼티
operation.completionBlock = {
    // Operation과 연관된 executionBlock들이 모두 실행한 다음에 실행
}
```

#### Operation 실행
```swift
// 직접 실행하기
operation.start()

// OperationQueue로 실행하기
let operationQueue = OperationQueue()
operationQueue.addOperation(operation)
```
- start()를 통해 실행하면 동기일 땐 현재 스레드에서 실행, 비동기일 땐 새로운 스레드를 만들어서 실행
- addOperation으로 실행하는 경우 Operation을 각각 새로운 스레드를 만들어 작업

#### Operation의 프로퍼티
```swift
var isCancelled: Bool
var isExecuting: Bool
var isFinished: Bool
var isConcurrent: Bool // 해당 프로퍼티 대신 isAsynchronous 사용 권장
var isAsynchronous: Bool
var isReady: Bool
var name: String?
```

#### Operation의 상태 변화
- `isReady`: Operation이 실행할 준비를 마친 상태
- `isExecuting`: 실행한 후의 상태
- `isCancel`: Operation이 Cancel된 상태
- `isFinished`: cancel 되지 않고 정상적으로 동작을 마친 상태

#### Cancel
- Operation의 동작을 직접적으로 취소시켜주지는 않음
- `isCancelled` 프로퍼티 값만 true로 변경
- Operation의 동작을 취소해주고 싶다면 cancel()을 호출 후 isCancelled라는 프로퍼티를 추적하여 관리

#### isAsynchronous
- 기본값은 false
- OperationQueue에 넣어서 작업을 처리하는 경우엔 해당 프로퍼티의 값과는 상관없이 모두 새로운 스레드를 만들어 작업
- 비동기로 동작하는 Operation이 필요하다면 해당 프로퍼티를 override하여 Custom Operation을 만들어주어야 함

#### Dependency
- Operation 인스턴스들 사이에 종속적인 관계를 만들어서 실행의 순서를 관리할 수 있게 해줌
- 자신이 종속된 Operation의 작업이 끝날 때까지 실행할 수 없게 됨
- 사용할 때 Deadlock을 조심해야 함

```swift
let fileURL = URL(fileURLWithPath: "..")
let contentImportOperation = ContentImportOperation(itemProvider: NSItemProvider(contentsOf: fileURL)!)
contentImportOperation.completionBlock = {
    print("Importing completed!")
}

let contentUploadOperation = ContentUploadOperation(itemProvider: NSItemProvider(contentsOf: fileURL)!)
contentUploadOperation.addDependency(contentImportOperation)
contentUploadOperation.completionBlock = {
    print("Uploading completed!")
}

queue.addOperations([contentImportOperation, contentUploadOperation], waitUntilFinished: true)

// (main) Importing content...
// (main) Uploading content...
// Importing completed!
// Uploading completed!
```

## OperationQueue
- Operation 객체들을 실행하고 관리하는 대기열
- sync/async에 대한 정보는 Operation이 가지고 있고 스레드 관리는 OperationQueue가 하는 식으로 역할이 분리
- OperationQueue에서는 모든 Operation에 대해 새로운 스레드를 만들어서 작업을 처리
- 모든 operation이 끝날 때까지 queue가 유지되기 때문에 완료되지 않은 작업을 중단시키는 경우 메모리 누수가 발생할 수 있음

## OperationQueue propery, method
#### main, current
- current는 현재 작업을 시작한 OperationQueue를 반환
- main은 메인 스레드에서 동작하는 OperationQueue를 반환
```swift
class var main: OperationQueue
class var current: OperationQueue?

let queue = OperationQueue()
let mainQueue = OperationQueue.main
let currentQueue = OperationQueue.current
```

#### addOperation
- OperationQueue에 Operation을 추가하는 메서드
- 추가되는 동시에 Operation의 작업 수행
```swift
func addOperation(_ op: Operation)
func addOperations(_ ops: [Operation], waitUntilFinished wait: Bool)
func addOperation(_ block: @escaping () -> Void)

let someOperation = BlockOperation {
    // some code
}

let operationQueue = OperationQueue()
operationQueue.addOperation(someOperation)
```

#### maxConcurrentOperationCount
- 네이밍 그대로 한 번에 최대로 수행되는 작업의 갯수

#### cancelAllOperations()
- 모든 Operation의 cancel() 메서드 호출

#### waitUntilAllOperationsAreFinished()
- 현재 스레드를 차단하고 OperationQueue의 모든 Operation 실행이 끝날 때까지 기다리는 메서드
- 이 시간 동안 현재 스레드는 큐에 작업을 추가할 수 없지만 다른 스레드는 작업을 추가할 수 있음
- DispatchGroup의 wait과 비슷한 메서드

#### isSuspended
- Queue가 Operation 스케쥴링을 진행 중인지에 대한 상태
- false인 경우 queue의 Operation을 실행시키고, true인 경우 queue에 대기 중인 연산은 실행시키진 않지만, queue의 현재 실행중인 Operation은 계속 실행.

## 연습해보기

```swift
import Foundation

var cards = [1, 2, 3, 4, 5, 6, 7, 8, 9]
let operationQueue = OperationQueue()
let semaphore = DispatchSemaphore(value: 1)

operationQueue.addOperation {
    for _ in 1...3 {
        semaphore.wait()
        let card = cards.removeFirst()
        print("야곰: \(card) 카드를 뽑았습니다!")
        semaphore.signal()
    }
}

operationQueue.addOperation {
    for _ in 1...3 {
        semaphore.wait()
        let card = cards.removeFirst()
        print("노루: \(card) 카드를 뽑았습니다!")
        semaphore.signal()
    }
}

operationQueue.addOperation {
    for _ in 1...3 {
        semaphore.wait()
        let card = cards.removeFirst()
        print("오동나무: \(card) 카드를 뽑았습니다!")
        semaphore.signal()
    }
}

```

---

> - 참고
>   - [야곰닷넷 동시성 프로그래밍](https://yagom.net/courses/동시성-프로그래밍-concurrency-programming/lessons/동시성-프로그래밍/topic/코어와-스레드/)
>   - [Operation, OperationQueue, 동시성](https://ios-development.tistory.com/799)
