# TIL 220222keypath,kvo,notification

## 🔥학습 내용

### Keypath
-   Key Value Coding과 Key Value Observing의 근간을 이루는 개념
-   a.b.c 처럼 하나 이상의 키가 점으로 이루어진 형태. a.b.c의 경우 c라는 속성에 접근하는 Keypath
-   String으로 사용할 수 있으나, 오타와 같은 안정성 리스크를 줄이기위해 Keypath String Expression, Keypath Expression을 사용
-   Keypath String Expression의 경우 타입캐스팅이 필요한데, 타입캐스팅 과정에서 에러가 날 수 있기 때문에 Keypath Expression보다 불안정함.

```swift
import Foundation

// Keypath String Expression
class Person: NSObject { // Keypath String Expression으로 속성에 접근하려면 NSObject, @objc가 필요 -> struct에선 불가
   @objc let name: String = "마이노1"
   @objc var age: Int = 0
}

let p = Person()

p.value(forKey: "name") // 단순 String으로 접근

var keypath = #keyPath(Person.name) // Keypath String Expression
p.value(forKey: keypath)
p.value(forKeyPath: keypath)

// Keypath Expression
struct Person2 {
   let name: String = "마이노2"
   var age: Int = 0
}

var p2 = Person2()

let keyPathToName = \Person2.name // KeyPath - 읽기전용
let keyPathToAge = \Person2.age // WritableKeyPath - 변경가능

let nameValue = p2[keyPath: keyPathToName]
let ageValue = p2[keyPath: keyPathToAge]
p2[keyPath: keyPathToAge] = 1

var keyPathToLength = \Person2.name.count
p2[keyPath: keyPathToLength]

keyPathToLength = keyPathToName.appending(path: \.count) // Keypath 확장 가능
p2[keyPath: keyPathToLength]
```
 ---
 
### KVO
- 객체의 프로퍼티의 변경사항을 다른 객체에 알리기 위해 사용하는 코코아 프로그래밍 패턴
- Model과 View와 같이 논리적으로 분리된 파트간의 변경사항을 전달하는데 유용함
- NSObject를 상속한 클래스에서만 사용 가능

```swift
import Foundation

@objc class Person: NSObject {
    @objc dynamic var name = "마이노1"
}

let person = Person()

person.observe(\Person.name, options: .new) { person, change in
    print("저는 지금부터 \(person.name)입니다!")
}

person.name = "마이노2" // 저는 지금부터 마이노2입니다!
person.name = "마이노3" // 저는 지금부터 마이노3입니다!
```

- KVO를 사용할일은 거의 없지 않을까..?
 ---
 
### Notification
- Notification Name 이라는 key값을 통해 옵저버가 등록된 객체들에게 이벤트 발생시 Notification을 post하는 방식으로 사용
- Parameters
- `aName`
	- The name of the notification.

- `anObject`
	- The object posting the notification.
	- 옵저버에게 보내려고 하는 객체. 주로 추적을 위해 사용

- `aUserInfo`
	- A user info dictionary with optional information about the notification.
	- Notification과 관련된 값 또는 객체의 저장소

```swift
extension Notification.Name {
    static let test = Notification.Name("마이노")
}

class Post {
    init() {
        NotificationCenter.default.post(name: .test, object: nil)
    }
}

class AddObserver {
    func addObserver() {
        NotificationCenter.default.addObserver(self, selector: #selector(test), name: .test, object: nil)
    }
    
    @objc func test() {
        print("나는 마이노다!")
    }
}

let addObserver = AddObserver()
addObserver.addObserver() // 나는 마이노다! 출력
let post = Post() // post 하면
```

---

### 프로퍼티 기본값 활용과 이니셜라이저 초기값 주입은 어떤점에서 다를까?
- 프로퍼티가 항상 동일한 초기값을 사용하는 경우 기본값을 제공하는게 나아보임. 이니셜라이저 내에서 초기값을 설정하는 경우에 예를 들어 타입 추론같은 부가적인 비용이 발생하지 않을까? 라는 생각.

---

### KVO와 Notification의 장단점
#### KVO
- 장점
	- 두 객체 사이의 정보를 맞춰주는것이 쉬움
	- new/old value를 쉽게 얻을 수 있음
	- key path로 옵저빙하기 때문에 nested objects도 옵저빙이 가능
- 단점
	- NSObject를 상속받는 객체에서만 사용이 가능
	- dealloc될 때 옵저버를 지워줘야 함.
	- 많은 value를 감지할 때는 많은 조건문이 필요

#### Notification
- 장점
	- 간단한 코드로 쉽게 구현 가능
	- 다수의 객체들에게 동시에 이벤트의 발생을 알려줄 수 있음
- 단점
	- 추적이 쉽지 않을 수 있음
	- Noti post 이후 정보를 받을 수 없음.

---

> 참고 
> - [KVO](https://developer.apple.com/documentation/swift/cocoa_design_patterns/using_key-value_observing_in_swift)
> - [Zedd - Key-Value Observing(KVO) in Swift](https://developer.apple.com/documentation/swift/cocoa_design_patterns/using_key-value_observing_in_swift)
> - [Hacking With Swift - What is key-value observing?](https://www.hackingwithswift.com/example-code/language/what-is-key-value-observing)
> - [Alpaca Blog - delegation-notification-그리고-kvo](https://medium.com/@Alpaca_iOSStudy/delegation-notification-그리고-kvo-82de909bd29)
> - [NotificationCenter](https://developer.apple.com/documentation/foundation/notificationcenter)
> - [참신러닝 Blog - iOS 내가 보려고 쓰는 NotificationCenter 사용법](https://leechamin.tistory.com/505])

---
