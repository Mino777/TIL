# TIL 220314UnitTest_TDD

## 🔥학습 내용
### Unit Test 작성
#### XCTest File
- XCTest
	- 테스트를 위한 프레임워크
- XCTestCase
	- 테스트를 작성하기 위해 상속해야 하는 가장 기본적인 추상 클래스
- setUpWithError()
	- 각각의 test case가 실행되기 전마다 호출되어 각 테스트가 모두 같은 상태와 조건에서 실행될 수 있도록 만들어 주는 메서드
- tearDownWithError()
	- 각각의 test 실행이 끝난 후마다 호출되는 메서드
	- 보통 setUpWithError()에서 설정한 값들을 해제할 때 사용

#### 비동기 메서드 테스트
- expectation(description:)
	- 어떤 것이 수행되어야 하는지를 description으로 정해주는 메서드
- fulfill()
	- 정의해둔 expectation이 충족되는 시점에 호출하여 동작을 수행
- wait(for:timeout:)
	- expectation을 배열로 담아 전달하여 배열 속의 expectation이 모두 fullfill 될 때까지 기다림
	- timeout을 설정하여 시간을 제한할 수 있음

```swift
func test_makeRandomValue호출시_randomValue를_잘설정해주는지() {
    // given
    let promise = expectation(description: "It makes random value") // expectation
    sut.randomValue = 50 // 기본값이 0~30에 포함되면 무조건 테스트에 통과하므로 범위에서 벗어난 값을 할당

    // when
    sut.makeRandomValue {
        // then
        XCTAssertGreaterThanOrEqual(self.sut.randomValue, 0)
        XCTAssertLessThanOrEqual(self.sut.randomValue, 30)
        promise.fulfill() // fulfill
    }

    wait(for: [promise], timeout: 10) // wait
}
```

#### Test Double
- 테스트를 진행하기 어려운 경우 이를 대신하여 테스트를 진행할 수 있도록 만들어주는 객체
- 테스트 대상 코드를 격리
- 테스트 속도를 개선
- 예측 불가능한 실행 요소를 제거
- 특수한 상황을 시뮬레이션
- 감춰진 정보 획득
1. Dummy
	- 어떤 기능이 구현되어 있지 않은 객체
	- 객체를 전달하기 위한 목적으로 주로 사용
2. Stub
	- Dummy가 실제로 동작하는 것처럼 만들어 실제 코드를 대신해서 동작해주는 객체
	- 테스트가 곤란한 부분의 객체를 도려내어 그 역할을 최소한으로 대신해 줄 만큼만 간단하게 구현
3. Fake
	- Stub보다 구체적으로 동작해서 실제 로직처럼 보이지만 해당 로직을 단순화하여 구현한 객체
4. Spy
	- 호출의 유무, 몇번 호출되었는지 등에 정보를 기록하는 용도
5. Mock
	- 실제 객체와 가장 비슷하게 구현된 수준의 객체
	- 보통 해당 테스트 더블을 많이 사용 

#### 테스트를 위한 객체를 이용해서 테스트 작성
- 핵심 컨셉은 DummyData와 StubURLSession, StubURLSessionDataTask를 만들어 바꿔치기 하는 것
- 그러기 위해선 실제 코드에서 의존성 주입을 진행할 때 URLSession 타입만 주입할 수 있게 하는것이 아닌 프로토콜에 의존하도록 만들어야함

```swift
// 프로토콜 생성
typealias DataTaskCompletionHandler = (Data?, URLResponse?, Error?) -> Void

protocol URLSessionProtocol {
    func dataTask(with url: URL,  completionHandler: @escaping DataTaskCompletionHandler) -> URLSessionDataTask
}

extension URLSession: URLSessionProtocol { }
```

```swift
// 테스트를 위한 객체 생성
struct DummyData {
    let data: Data?
    let response: URLResponse?
    let error: Error?
    var completionHandler: DataTaskCompletionHandler? = nil

    func completion() {
        completionHandler?(data, response, error)
    }
}

class StubURLSession: URLSessionProtocol {
    var dummyData: DummyData?

    init(dummy: DummyData) {
        self.dummyData = dummy
    }

    func dataTask(with url: URL, completionHandler: @escaping DataTaskCompletionHandler) -> URLSessionDataTask {
        return StubURLSessionDataTask(dummy: dummyData, completionHandler: completionHandler)
    }
}

class StubURLSessionDataTask: URLSessionDataTask {
    var dummyData: DummyData?

    init(dummy: DummyData?, completionHandler: DataTaskCompletionHandler?) {
        self.dummyData = dummy
        self.dummyData?.completionHandler = completionHandler
    }

    override func resume() {
        dummyData?.completion()
    }
}
```
- 이런식으로 실제 코드를 프로토콜에 의존하게 만들면 Mock 객체를 손쉽게 만들 수 있음

### TDD
- 단순하게 실제 코드를 구현하기 전에 요구사항에 따라 케이스를 정의하고 
- 실패하는 테스트를 작성하고 
- 해당 테스트를 통과하기 위한 최소한의 구현을 하고
- 해당 테스트의 성공을 유지하면서 리팩토링하는 방법론
---

> - 참고
>   - [오동나무의 Unit Test 작성하기](https://yagom.net/courses/unit-test-작성하기/)
