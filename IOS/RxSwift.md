# *RxSwift.*

### 바로가기

- [About RxSwift](#aboutrxswift)
- [Observable](#observable)

---
> 참고
>* KxCoding Mastering RxSwift
>* [RxSwift](https://github.com/ReactiveX/RxSwift)
>* RxSwift - Reactive Programming with Swift by Martin Todorov
>* [박보영님 Git Repository](https://github.com/fimuxd/RxSwift)
----

## <a name="aboutrxswift"></a>RxSwift *<small><update 21.04.12><small>*

### RxSwift?
- Rx는 ReactiveX 이고, ReactiveX는 Reactive eXtensions의 줄임말.
- ReactiveX는 관찰 가능한 시퀀스를 사용하여 비동기식 및 이벤트 기반 프로그램을 구성하기 위한 라이브러리.
- RxSwift는 본질적으로 코드가 새로운 데이터에 반응하고 순차적으로 분리 된 방식으로 처리함으로써 비동기식 프로그램 개발을 간소화시킬 수 있음.

### RxSwift Building Block
#### 1. Observables
- Observable<T> 클래스는 Rx 코드의 기반.
- T 형태의 데이터 snapshot을 전달 할 수 있는 일련의 이벤트를 비동기적으로 생성하는 기능.
- 다른 클래스에서 만든 값을 시간에 따라 읽을 수 있음.
- 하나 이상의 observers가 실시간으로 어떤 이벤트에 반응하고 앱 UI를 업데이트 하거나 생성하는지를 처리하고 활용할 수 있게 함.
- Observable은 세가지 유형의 이벤트만 방출하며 observers는 이들 유형만 수신할 수 있음.
	- next: 최신/다음 데이터를 전달하는 이벤트
	- completed: 성공적으로 일련의 이벤트들을 종료시키는 이벤트. 즉, observable이 성공적으로 자신의 생명주기를 완료했으며, 추가적으로 이벤트를 생성하지 않을 것임을 의미.
	- error: Observable이 에러를 발생시켰으며, 추가적으로 이벤트를 생성하지 않을 것임을 의미.
![image](https://user-images.githubusercontent.com/54234176/114350201-dcb8b880-9ba3-11eb-8172-5ccfee8701b8.png)
![image](https://user-images.githubusercontent.com/54234176/114350228-e4785d00-9ba3-11eb-9143-c7b210a1c5cf.png)
	- 상기 세가지 유형의 Observable 이벤트는, Observable 또는 observer의 본질에 대한 어떤 가정도 하지 않음.
	- 따라서 Delegate Protocol을 사용하거나, 클래스 통신을 위해 클로저를 삽입할 필요가 없음.
	- 실생활에서 아이디어를 얻으려면 Finite/Infinite Observable Sequences를 이해해야함.

#### Finite Observable Sequences
- 어떤 Observable Sequence는 0, 1 또는 다른 값을 방출한 뒤, 성공적으로 또는 에러를 통해 종료된다.
- Ex) iOS 앱에서, 인터넷을 통해 파일을 다운로드 하는 코드
	1. 다운로드를 시작하고, 들어오는 데이터를 관찰한다.
	2. 계속해서 파일 데이터를 받는다.
	3. 네트워크 연결이 끊어진다면, 다운로드는 멈출 것이고 연결은 에러와 함께 일시정지 될 것이다.
	4. 또는, 성공적으로 모든 파일 데이터를 다운로드 할 수 있을것이다.
	- 이러한 흐름은 Observable의 생명 주기와 정확히 일치한다. RxSwift 코드로 표현하면 다음과 같다.
	```swift
	API.download(file: "http://www...")
   .subscribe(
     onNext: { data in
      // Append data to temporary file
     },
     onError: { error in
       // Display error to user
     },
     onCompleted: {
       // Use downloaded file
     }
   )
	```
	- API.download(file:)은 네트워크를 통해 들어오는 Data값을 방출하는 Observable<Data> 인스턴스를 리턴.
	- onNext 클로저를 통해 next 이벤트를 받을 수 있음. 예제에서는 받은 데이터를 디스크의 temporary file에 저장하게 됨.
	- onError 클로저를 통해 error 이벤트를 받을 수 있음. alert 메시지 같은 action을 취할 수 있음.
	- 최종적으로 onCompleted 클로저를 통해 completed 이벤트를 받을 수 있으며, 이를 통해 새로운 viewController를 push 하여 다운로드 받은 파일을 표시하는등의 액션을 취할 수 있음.

#### Infinite Observable Sequences
- 자연적으로 또는 강제적으로 종료되어야 하는 파일 다운로드 같은 활동과 달리, 단순히 무한한 sequence가 있다. 보통 UI 이벤트는 무한하게 관찰가능한 sequence다.
- Ex) 기기의 가로/세로 모드에 따라 반응해야하는 코드
	1. UIDeviceOrientationDidChange observer를 추가.
	2. 방향 전환을 관리할 수 있는 callback method를 제공해야 함. UIDevice의 현재 방향값을 확인 한 뒤, 이 값에 따라 화면이 표시될 수 있도록 해야함.
	- 방향전환이 가능한 디바이스가 존재하는 한, 이러한 연속적인 방향 전환은 자연스럽게 끝날 수 없다.
	- 결국 이러한 시퀀스는 사실상 무한하기 때문에, 항상 최초값을 가지고 있어야 함.
	- 사용자가 디바이스를 절대 회전하지 않는다고 해서 이벤트가 종료된 것도 아님. 단지 이벤트가 발생한 적이 없을 뿐.
	- RxSwift 코드로 표현하면 다음과 같다.
	```swift
	UIDevice.rx.orientation
	  .subscribe(onNext: { current in
	    switch current {
	    case .landscape:
	      // Re-arrange UI for landscape
	    case .portrait:
	      // Re-arrange UI for portrait
	    }
	  })
	```
	- 이를 통해 현재 Orientation (방향)을 받을 수 있고, 받은 값을 앱의 UI에 업데이트 할 수 있음.
	- 해당 Obesrvable에서는 절대 발생하지 않을 이벤트이기 때문에 onError나 onCompleted parameter는 건너뛸 수 있음.

#### 2. Operators
- ObservableType과 Observable 클래스의 구현은 보다 복잡한 논리를 구현하기 위해 함께 구성되는 비동기 작업을 추상화하는 많은 메소드가 포함되어 있음. 이러한 메소드는 매우 독립적이므로 Operators 라고 불림.
- 이러한 Operator들은 주로 비동기 입력을 받아 부수작용 없이 출력만 생성하므로 퍼즐조각과 같이 쉽게 결합이 가능.
- 다음은 앞서 방향전환에 대한 예제에 Rx 연산자를 적용시킨 코드
	```swift
	UIDevice.rx.orientation
	  .filter { $0 != .landscape }
	  .map { _ in "Portrait is the best!" }
	  .subscribe(onNext: { string in
	    showAlert(text: string)
  })
	```
	![image](https://user-images.githubusercontent.com/54234176/114350316-04a81c00-9ba4-11eb-91c2-98d329feee06.png)


	- UIDevice.rx.orientation이 .landscape 또는 .potrait 값을 생성할 때 마다, Rx는 각각의 연산자를 데이터의 형태로 방출.
		- 먼저 filter는 .landscape가 아닌 값만을 내놓음. 만약 디바이스가 landscape 모드라면 나머지 코드는 진행되지 않을 것이다. 왜냐하면 filter가 해당 이벤트의 실행을 막을 것이기 때문.
		- 만약 .portrait값이 들어온다면, map 연산자는 해당 방향값을 택할 것이며 이것을 String 출력으로 변환할 것이다.
		- 마지막으로 subscribe를 통해 결과로 next 이벤트를 구현하게 된다. 이번에는 String 값을 전달하고, 해당 텍스트로 alert을 화면에 표시하는 method를 호출.
- 연산자들은 언제나 입력된 데이터를 통해 결과값을 출력하므로, 단일 연산자가 독자적으로 할 수 있는 것보다 쉽게 연결 가능하며 훨씬 많은 것을 달성할 수 있음.

#### 3. Schedulers
- 스케쥴러는 DispatchQueue와 동일한 것. 하지만 훨씬 강력하고 쓰기 쉽다.
- RxSwift에는 여러가지의 스케쥴러가 이미 정의되어 있으며, 99%의 상황에서 사용가능하므로 아마 개발자가 자신만의 스케쥴러를 생성할 일은 없을 것. 
- 기존까지 GCD를 통해서 일련의 코드를 작성했다면 스케쥴러를 통한 RxSwift는 다음과 같이 작동한다.
![image](https://user-images.githubusercontent.com/54234176/114350368-15589200-9ba4-11eb-9a5c-d42bfcb6fef8.png)

- 각색깔로 표시된 task들은 다음과 같이 각각 스케쥴 된다.
	- network subscription은 1로 표시된 custom NSOperation Scheduler에서 구동된다.
	- 여기서 출력된 데이터는 다음 블록인 Background Concurrent Scheduler의 2로 가게된다.
	- 최종적으로 네트워크 코드의 마지막 3은 Main Thread Serial Scheduler 로 가서 UI를 새로운 데이터로 업데이트 하게 된다.

### App Architecture
- RxSwift는 기존의 앱 아키텍처에 영향을 주지 않음. 주로 이벤트나 비동기 데이터 시퀀스 등을 주로 처리하기 때문.
- 따라서 MVC, MVP, MVVM 같은 아키텍처에 모두 Rx를 도입할 수 있음.
- Reactive 앱을 만들기 위해 처음부터 프로젝트를 시작할 필요도 없음. 기존 프로젝트를 부분적으로 리팩토링 하거나 단순히 앱에 새로운 기능을 추가할 때도 사용이 가능.
- Microsoft의 MVVM 아키텍처는 데이터 바인딩을 제공하는 플랫폼에서 이벤트 기반 소프트웨어용으로 개발되었기 때문에, RxSwift는 MVVM과 같이 쓸 때 아주 멋지게 작동한다.
	- ViewModel을 사용하면 Observable<T> 속성을 노출할 수 있으며 ViewController의 UIKit에 직접 바인딩이 가능.
	- 이렇게 하면 모델 데이터를 UI에 바인딩하고 표현하고 코드를 작성하는 것이 매우 간단해짐.
![image](https://user-images.githubusercontent.com/54234176/114350406-21445400-9ba4-11eb-9057-bd743854c056.png)


### RxCocoa
- RxCocoa는 RxSwift의 동반 라이브러리로, UIKit과 Cocoa 프레임워크 기반 개발을 지원하는 모든 클래스를 보유하고 있음.
	- RxSwift는 일반적인 Rx API라서, Cocoa나 특정 UIKit 클래스에 대한 아무런 정보가 없음.
- Ex) RxCocoa를 이용하여 UISwitch의 상태를 확인하는 것은 다음과 같음
	```swift
	toggleSwitch.rx.isOn
	  .subscribe(onNext: { isOn in
	    print(isOn ? "It's ON" : "It's OFF")
  })
	```
	- RxCocoa는 rx.isOn과 같은 프로퍼티를 UISwitch 클래스에 추가해주며, 이를 통해 이벤트 시퀀스를 확인할 수 있음.
![image](https://user-images.githubusercontent.com/54234176/114350459-299c8f00-9ba4-11eb-9621-a7f0a9c09fa0.png)

- RxCocoa는 UITextField, URLSession, UIViewController 등에 rx를 추가하여 사용.

---


## <a name="observable"></a>Observable *<small><update 21.04.12><small>*
#### Observable?
- Rx에서의 가장 중요한 개념
- observable = observable sequence = sequence
- 중요한 것은 비동기.
- Obseravble들은 일정 기간 동안 계속해서 이벤트를 생성하며, 이러한 과정을 보통 emitting 이라고 표현.
- 각각의 이벤트들은 숫자나 커스텀한 인스턴스 등과 같은 값을 가질 수 있으며, 또는 탭과 같은 제스처를 인식할 수도 있음.
- 이러한 개념들을 가장 잘 이해할 수 있는 방법은 marble diagrams를 이용하는 것.
	- marble diagram : 시간의 흐름에 따라서 값을 표시하는 방식
	- 시간은 왼쪽에서 오른쪽으로 흐른다는 가정
	- [RxMarbles](https://rxmarbles.com/)

```swift
/*
 Observable
 
 - Observable은 이벤트를 전달.
 - Next: 방출, Emission (Observer, Subscriber로 전달)
 - Error: 에러 발생시 전달, Observable 주기 끝에 실행, Notification
 - Completed: 성공적으로 실행 시 전달, Observable 주기 끝에 실행, Notification
 - Observable은 error, completed 이벤트를 전달한 뒤엔 더이상 이벤트를 전달하지 않는다.
 - Observable을 영원히 실행할 목적이 아니라면, onError, onComleted 둘 중 하나는 꼭 처리해주어야 함.
 
 Observer
 - Observer를 Subscriber라고도 부름.
 - Observable을 감시하고 있다가 전달되는 이벤트를 처리한다.
 - 이때 observable을 감사히고 있는 것을 Subscribe라고 한다.
 
 */

// Observable 를 생성, 정의하는 방법 크게 두가지
// #1 create 연산자 활용
// create : Observable 타입 프로토콜에 선언되어있는 타입 메서드, Operator 라고도 한다.
// - Observer를 인자로 받아 Disposable을 반환한다.
Observable<Int>.create { (observer) -> Disposable in
    // observer애서 on 메서드를 호출하고, 구독자로 0이 저장되어있는 next 이벤트가 전달된다.
    observer.onNext(0)
    // 1이 저장되어있는 next 이벤트가 전달된다.
    observer.onNext(1)
    // completed이벤트가 전달되고 Observable이 종료된다. 이후 다른 이벤트를 전달할 수는 없다.
    observer.onCompleted()
    // Disposables 는 메모리 정리에 필요한 객체이다.
    return Disposables.create()
}


// #2 다른 여러가지 연산자 활용
// from 연산자는 파라미터로 전달받은 값을 순서대로 방출하고 Completed Event를 전달하는 Observable을 생성한다.
// 이처럼 create 이외로도 상황에 따른 다양한 Operator 사용이 가능하다.
Observable.from([0, 1])
// 이벤트 전달 시점은 Observer가 Observalbe을 구독하는 시점에 Next이벤트를 통해 방출 및 Completed 이벤트가 전달된다.

let o1 = Observable<Int>.create { (observer) -> Disposable in
    
   observer.on(.next(0))
    
   observer.onNext(1)
   
   observer.onCompleted()
   
   return Disposables.create()
}

// 중요한 규칙 Observer는 동시에 두개 이상의 이벤트를 처리하지않음.
// Observable은 Observer가 하나의 이벤트를 처리한 후에 이어지는 이벤트를 처리함.
// 여러 이벤트를 동시에 처리하지않음.

// #1
o1.subscribe {
    // subscribe 클로져 내 start가 연달아 end 없이 두번 호출되는 경우는 없다.
    print("-- Start --")
    print($0)
    // 순수 값을 추출하여 출력할 수 있으며, Optional 이므로 Optional Binding 이 필요하다.
    if let elem = $0.element {
        print(elem)
    }
    print("-- End --")
}

print("---------")

// #2
// 세부적인 구독 처리도 가능
// $0.element 같은 방식으로 접근 할 필요 없이 onNext: 클로져 인자값을 통해 element에 바로 접근할 수 있다.
o1.subscribe(onNext: { elem in
    print(elem)
})

Observable.from([1, 2, 3])


let subscription1 = Observable.from([1, 2, 3])
    .subscribe(onNext: { elem in
        print("Next", elem)
    }, onError: { error in
        print("Error", error)
    }, onCompleted: {
        print("Completed")
    }, onDisposed: {
        print("Disposed")
    })

subscription1.dispose()


var disposeBag = DisposeBag()

// Disposed 는 옵저버가 전달 하는 이벤트가 아니다.
// -> 리소스가 해제되는 시점에 자동으로 호출되는 것이 Disposed이다.
// 하지만 Rxswift 공식 문서에서는 Disposed를 정리/명시해줄 것을 권고한다.
Observable.from([1, 2, 3])
    .subscribe {
        print($0)
    }.disposed(by: disposeBag)
// - 위와 같이 disposed(by: Bag) 식으로 DisposeBag을 사용할 수 있다.
// - 해당 subscription에서 반환되는 Disposable은 bag에 추가된다.
// - 이렇게 추가된 Disposable 들은 Disposebag이 해제되는 시점에 함께 해제된다.

// 새로운 DisposeBag으로 초기화하면 이전까지 담겨있던 Disposable들은 함께 해제된다.
disposeBag = DisposeBag()


// 1씩 증가하는 정수를 1초간격으로 출력하는 Observable
// 해당 작업의 종료를 위해서는 Dispose 처리가 필요하다.
let subscription2 = Observable<Int>.interval(.seconds(1), scheduler: MainScheduler.instance)
    .subscribe(onNext: { elem in
        // Emission
        // Next 1 ~ 3이 출력
        print("Next", elem)
    }, onError: { error in
        // Notification
        print("Error", error)
    }, onCompleted: {
        // Notification
        // Observable 완료 시 실행
        print("Completed")
        // Disposed는 Observable이 전달하는 이벤트는 아니다. Observable과 관련된 모든 리소스가 제거된 뒤 호출이 된다.
    }, onDisposed: {
        print("Disposed")
    })

// Disposable 의 dispose() 메서드를 통해 3초가 지나면 해당 Observable을 Dispose 처리한다.
// 해당 기능은 take, until등의 Operator 등을 통해서도 구현할 수 있다.
// 0, 1, 2 까지만 출력
DispatchQueue.main.asyncAfter(deadline: .now() + 3) {
    subscription2.dispose()
    // 이경우에도 연산자를 활용해서 처리해주는 것이 좋음.
}

// 직접 dispose를 호출해주는건 권장되지 않음.
// DisposeBag 으로 관리해주는것이 가장 좋음.
```

----


