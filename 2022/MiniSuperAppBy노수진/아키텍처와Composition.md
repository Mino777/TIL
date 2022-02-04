# 1. 코드 레벨 아키텍처
## 01. 아키텍처와 Composition
객체를 조립해서 쓰는 방식을 Composition이라 함
객체를 작게 만드는 법
객체와 데이터타입을 조합해서 더 복잡하고 어려운 일을 객체로 만드는 방식
컴포지션은 디자인 패턴중에 가장 유용하고 강력하고 다른 패턴을 배우는데 도움이 되는 기본적인 패턴 단일책임원칙을 지킬 수 있고 DRY원칙도 지킬 수 있게됨
massive VC, VM, RIBS 등 결국엔 아키텍처만의 문제는 아니고, 컴포지션을 연습하고 잘 쓸 수 있다면 massive 악몽에서 벗어날 수 있음.

Favor object composition over class inheritance - Gang of Four, Design Patterns
상속 대신 객체의 합성을 더 선호해라 라는말이 있음.
상속을 가장 잘 쓰는 방법은 상속을 쓰지 않는 것이다.
상속은 필요할떈 유용하지만 유연하지 않음.
부모의 행위를 거부하는것은 리스코프 원칙에 위배.
리스코프 원칙을 위배하면 예상치 못한 상황이 발생
코코아터치에도 예제가 있음 UIView Frame 프로퍼티
uiview의 상속체에도 똒같이 적용
프로퍼티에 접근해서 사이즈를 바꿀 수 있음
예외로 UISwitch 같은 경우 사이즈를 바꿔도 적용되지 않음

원칙을 백프로 지킬 수는 없지만, 지키지 않았을 경우의 부작용을 이해하고 제한적으로 사용하는것은 중요
 
 value타입은 상속을 지원하지 않기 떄문에 기능 확장을 위해서는 composition을 사용 해야함
 uiview는 value 타입이고 view의 기능을 확장하기 위해서는 view modifier를 사용해서 상속없이 기능확장할 수 있음

상속은 whitebox, 컴포지션은 blackbox라고 칭함
적은 정보를 가지고 있는게 유지보수적인 측면에서 더 좋음

```swift
// 상속이 아닌 Composition
class A: UIViewController {

}

class B: UIViewController {

}

class C: UIViewController {
	private let a: UIViewController
	private let b: UIViewController
}
```

```swift
import UIKit

let result = [1, 2, 3].map { $0 + 1 }.map { "만 \($0)살" }
print(result)

let num: Int? = 1
let result2 = num.map { $0 + 1 }
print(result2)

let myResult: Result<Int, Error> = .success(2)
let result3 = myResult.map { $0 + 1 }
print(result3)

// Map
// 1. Generic 타입
// Optional: enum Optional<Wrapped>
// Sequence: associatedtype Element
// Result: enum Result<Success, Failure> where Failure : Error
// Publisher: associatedtype Output

// 2. transform 함수를 인자로 받음.

// transform: A -> B
// F<A> -(map)-> F<B>

let ageString: String? = "10"
let result4 = ageString.map { Int($0) }
// result4: Int??
// transform: A -> OptionalB
// Optional<A> -(map)-> Optional<Optional<B>>

if let x = ageString.map(Int.init), let y = x {
    print(y)
}

if case let .some(.some(x)) = ageString.map(Int.init) {
    print(x)
}

if case let x?? = ageString.map(Int.init) {
    print(x)
}
// 이런식으로 언래핑을 두번해야하는 경우 문법이 복잡해짐
// 이럴 때 flatMap 사용

let result5 = ageString.flatMap(Int.init)
// transform: A -> OptionalB
// Optional<A> -(flatMap)-> Optional<B>
// map과 flatMap 두가지 모두 활용하면 작은 함수들을 composition해서 더 복잡한 작업을 파이프라인처럼 구성할 수 있게 됨

// 앱에서 일어나는 작업들은 데이터 타입을 전환해주는 작업이라고 볼 수 있음
// UIEvent -> IndexPath -> Model -> URL -> Data -> Model -> ViewModel -> View

struct MyModel: Decodable {
    let name: String
}

let myLabel = UILabel()

if let data = UserDefaults.standard.data(forKey: "my_data_key") {
    if let model = try? JSONDecoder().decode(MyModel.self, from: data) {
        let welcomeMessage = "Hello \(model.name)"
        myLabel.text = welcomeMessage
    }
}

let welcomeMessage = UserDefaults.standard.data(forKey: "my_data_key")
    .flatMap { try? JSONDecoder().decode(MyModel.self, from: $0) }
    .map(\.name)
    .map { "Hello \($0)" }

myLabel.text = welcomeMessage

```


