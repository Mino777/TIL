# TIL 211216
> Tag: Protocol,structvsclass

## 🔥학습 내용
### 프로토콜 (Protocol)
> - 특정 작업이나 기능에 적합한 메소드, 프로퍼티 및 기타 요구사항의 청사진을 정의
> - 인터페이스
> - 최소한으로 가져야 할 속성이나 메서드를 정의
> - ex) Equatable, Hashable, Comparable 

```swift
// Defining Protocols
protocol Something {
    func doSomething()
}

// Adopting Protocols
struct Size: Something {
    func doSomething() {
        print(#function)
    }
}

// Class-Only Protocols
protocol SomethingObject: AnyObject, Something {
    
}

//struct Value: SomethingObject {
    //불가
//}
class Object: SomethingObject {
    func doSomething() {
        print(#function)
    }
}
```

```swift
// Property Requirements
// 프로토콜에서 속성은 무조건 var 키워드로!
protocol Figure {
    static var name: String { get set }
    var age: Int { get }
}

struct Rectangle: Figure {
    static var name: String = "Rect"
    var age: Int
}

class Circle: Figure {
    var age: Int = 0

    class var name: String {
        get {
            return "Circle"
        }
        set {

        }
    }
}

// Method Requirements
// Method Head 부분만 선언.
protocol Resettable {
    mutating func reset()
    static func reset()
}

class Size: Resettable {
    var width = 0.0
    var height = 0.0

    func reset() {
        width = 0.0
        height = 0.0
    }

    static func reset() {

    }
}

struct ValueSize: Resettable {
    var width = 0.0
    var height = 0.0

    mutating func reset() { // 값 형식의 인스턴스 메소드에서 속성값을 바꾸러면 mutatitng keyword 필요
        width = 0.0
        height = 0.0
    }

    static func reset() {

    }
}

// Initializer Requirements
// method와 마찬가지로 바디 생략
protocol Figure {
    var name: String { get }
    init(name: String)
}

struct Rectangle: Figure {
    var name: String // Memberwise 생성자로 요구사항 충족
}

class Circle: Figure {
    var name: String

    required init(name: String) {
        self.name = name
    }
}

final class Triangle: Figure { // final class 는 더이상 상속을 고려하지 않아도 되기 때문에 required init 불필요
    var name: String

    init(name: String) {
        self.name = name
    }
}

class Oval: Circle {
    var prop: Int

    init() {
        prop = 0
        super.init(name: "Oval")
    }

    required convenience init(name: String) {
        self.init()
    }
}

protocol Grayscale {
    init?(white: Double)
}

struct Color: Grayscale {
    init(white: Double) {

    }
}

// Subscript Requirements
protocol List {
    subscript(idx: Int) -> Int { get }
}

struct DataStore: List {
    subscript(idx: Int) -> Int {
        get { // get 요구사항만 충족시켜도 가능.
            return 0
        }
        set {

        }
    }
}

// Optional Requirements
// Optional 형식을 지칭하는것이 아닌, 단어 그대로 선택형 이라는 뜻
// class 에서만 채용이 가능함. -> AnyObject protocol이 자동으로 상속되기 떄문.
@objc protocol Drawable {
    @objc optional var strokeWidth: Double { get set }
    @objc optional var strokeColor: UIColor { get set }
    func draw()
    @objc optional func reset()
}

class Rectangle: Drawable {
    func draw() {
        
    }
}

let r: Drawable = Rectangle()
r.draw()
r.strokeWidth
r.strokeColor
r.reset?()
```

### 왜 프로토콜을 사용해야 하는가?
1. 객체의 의존성을 줄이기 위해
	- 직접적으로 Property를 변경하는 것이 아닌, 프로토콜이라는 규약을 통해서 메세지를 주고 받도록 할 수 있음.
2. struct, enum과 같은 값타입에 프로토콜을 사용하면 상속을 사용하는 것과 같은 효과를 누릴 수 있음.
	- 참조 타입의 경우 다중 스레드 환경 같은 곳에서 원본 데이터가 바뀔 수 있기 때문에 값 타입을 사용하는 것이 권장.
	- Protocol과 Extension의 조합으로 프로토콜 초기 구현을 통해 POP가 가능
3. Type으로서의 활용
```swift
protocol Transportation: class { 
   func ride()
}
class Car {
  var somethingToRide: Transportation?
  
  func goHome(how: Transportation){
              how.ride()
    }
}
```
- 위 Car의 somethingToride변수와 goHome메서드의 parameter에는 Transportation이라는 protocol을 채택하여 인스턴스화한 객체들만이 들어올 수 있음. 이 처럼 protocol을 Type으로 활용이 가능

---
### Struct vs Class

**struct 를 사용해야할 경우**
1. 두 object를 "같다, 다르다" 로 비교해야 하는 경우
2. copy 된 각 객체들이 독립적인 상태를 가져야 하는 경우
3. 코드에서 오브젝트의 데이터를 여러 스레드 걸쳐 사용할 경우 ( 안전하게 사용 가능 )

**class 를 사용해야할 경우**
1. 두 object의 인스턴스 자체가 같음을 확인해야 할때
2. 하나의 객체가 필요하고, 여러 대상에 의해 접근되고 변경이 필요한 경우

**Struct 와 Class 차이점**
1. Structure는 Value Type 이며 Stack에 저장.
2. Class는 Reference Type 이며 Heap에 저장.
3. Structure는 Deinitializer, Inheritance, Reference Counting 이 불가하지만 Class 는 모두 가능
4. 값 형식인 Struct에서 속성을 바꾸는 메소드를 구현할 때에는 반드시 mutating으로 선언해야함.
5. 값 타입인 구조체는 인스턴스 프로퍼티의 변경을 할 수 없지만, 참조 타입인 클래스는 비록 인스턴스가 상수형이더라도 프로퍼티 변경이 가능

```swift
class someConstantClass {
  let constantNumber = ""
  var variableNumber = ""
}

class someVariableClass2 {
  let constantNumber = ""
  var variableNumber = ""
}

struct someConstantStruct {
  let constantNumber = ""
  var variableNumber = ""
}

struct someVariableStruct2 {
  let constantNumber = ""
  var variableNumber = ""
}

someConstantClass().constantNumber = "" // error
someConstantClass().variableNumber = ""
someVariableClass2().constantNumber = "" // error
someVariableClass2().variableNumber = ""
someConstantStruct().constantNumber = "" // error
someConstantStruct().variableNumber = "" // error
someVariableStruct2().constantNumber = "" // error
someVariableStruct2().variableNumber = "" // error
```
![image](https://user-images.githubusercontent.com/54234176/146314692-0da57385-736c-4859-a8a7-bd5bf322492d.png)
![image](https://user-images.githubusercontent.com/54234176/146314714-1641d1a8-60e8-4878-8e0f-de3d4d656d51.png)

---

### 상수로 선언한 class instance와 변수로 선언한 class instance의 차이
- 상수로 선언
  - 인스턴스가 상수형으로 선언되어 있더라도 인스턴스 프로퍼티가 변수형으로 선언되어 있으면 값을 변경할 수 있음
  - 인스턴스 자체에 다른 인스턴스를 할당할 수 없도록 제한
  - 클래스 인스턴스의 상수형 선언은 인스턴스 자신이 참조하는 주소를 변경할 수 없는 상수로 여기고 있는 것으로 판단이 가능

- 변수로 선언
  - 클래스 인스턴스 본인이 다른 인스턴스로 대체 되어도 에러가 발생하지 않음
