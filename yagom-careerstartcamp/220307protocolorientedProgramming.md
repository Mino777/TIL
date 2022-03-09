# TIL 220307protocolorientedProgramming

## 🔥학습 내용

### Protocol Oriented Programming
- 2015년 애플이 Swift2에서 Extension을 제시하며, Protocol과 Extension의 조합으로 프로토콜 초기 구현이라는 개념이 나오면서 Class의 상속과 같은 기능을 구현할 수 있게 되어 POP가 가능하게 되었음.
- 따라서, 프로토콜을 채택하는 것은 클래스에서 클래스끼리만 상속이 가능했던 것과 달리 Value Type인 Struct, Enum에도 적용할 수 있음.
- 수평적인 확장과 재사용성을 보장

```swift
protocol Bird {
    var name: String { get }
    var canFly: Bool { get }
}

protocol Flyable {
    var airsppedVelocity: Double { get }
}
```
- 프로토콜이 존재하기 전에는 Flyable을 베이스 클래스로 해당 클래스와 관련된 클래스들이 이를 상속해서 다른 클래스를 만들었을 것.
- 하지만 POP에서는 모든 것이 프로토콜로 시작.
- 베이스 클래스 없이 기능 개념을 캡슐화할 수 있음.
- 타입을 정의할 때 전체적인 시스템을 훨씬 더 유연하게 만들 수 있음.

```swift
struct FlappyBird: Bird, Flyable {
    let name: String
    let flappyAmplitude: Double
    let flappyFrequency: Double
    let canFly: Bool
    
    var airsppedVelocity: Double {
        3 * flappyFrequency * flappyAmplitude
    }
}

struct Penguin: Bird {
    let name: String
    let canFly: Bool = false
}

struct SwiftBird: Bird, Flyable {
    var name: String { "Swift \(version)" }
    let canFly: Bool = true
    let version: Double
    private var speedFactor = 1000.0
    
    init(version: Double) {
        self.version = version
    }
    
    var airsppedVelocity: Double {
        version * speedFactor
    }
}
```
- canFly가 중복!

```swift
protocol Bird {
    var name: String { get }
}

extension Bird {
    var canFly: Bool { self is Flyable }
}

protocol Flyable {
    var airsppedVelocity: Double { get }
}

struct FlappyBird: Bird, Flyable {
    let name: String
    let flappyAmplitude: Double
    let flappyFrequency: Double
    
    var airsppedVelocity: Double {
        3 * flappyFrequency * flappyAmplitude
    }
}

struct Penguin: Bird {
    let name: String
}

struct SwiftBird: Bird, Flyable {
    var name: String { "Swift \(version)" }
    let version: Double
    private var speedFactor = 1000.0
    
    init(version: Double) {
        self.version = version
    }
    
    var airsppedVelocity: Double {
        version * speedFactor
    }
}
```
- Bird에 Extension으로 초기 구현을 해놓으면 canFly를 정의 해주지 않아도 모두 적용!

```swift
enum UnladenSwallow: Bird, Flyable {
    case african
    case european
    case unknown
    
    var name: String {
        switch self {
        case .african:
            return "African"
        case .european:
            return "European"
        case .unknown:
            return "What do you mean? African or European?"
        }
    }
    
    var airspeedVelocity: Double {
        switch self {
        case .african:
            return 10.0
        case .european:
            return 9.9
        case .unknown:
            fatalError("You are thrown from the bridge of death!")
        }
    }
}

extension UnladenSwallow {
    var canFly: Bool {
        self != .unknown
    }
}
```
- 기본 구현 재정의 가능!

```swift
protocol Bird: CustomStringConvertible {
  var name: String { get }
  var canFly: Bool { get }
}

extension CustomStringConvertible where Self: Bird {
  var description: String {
    canFly ? "나는 날 수 있따!" : "나는 날 수 업따!"
  }
}
```
- 표준 라이브러리의 프로토콜을 채택하고 기본 구현도 가능!

```swift
class Motorcycle {
  init(name: String) {
    self.name = name
    speed = 200.0
  }

  var name: String
  var speed: Double
}

protocol Racer {
  var speed: Double { get }  // speed is the only thing racers care about
}

extension FlappyBird: Racer {
  var speed: Double {
    airspeedVelocity
  }
}

extension SwiftBird: Racer {
  var speed: Double {
    airspeedVelocity
  }
}

extension Penguin: Racer {
  var speed: Double {
    42  // full waddle speed
  }
}

extension UnladenSwallow: Racer {
  var speed: Double {
    canFly ? airspeedVelocity : 0.0
  }
}

extension Motorcycle: Racer {}

let racers: [Racer] =
  [UnladenSwallow.african,
   UnladenSwallow.european,
   UnladenSwallow.unknown,
   Penguin(name: "penguin"),
   SwiftBird(version: 5.1),
   FlappyBird(name: "flappy", flappyAmplitude: 3.0, flappyFrequency: 20.0),
   Motorcycle(name: "motorcycle")]

extension Sequence where Iterator.Element == Racer {
    func topSpeed() -> Double {
        self.max(by: { $0.speed < $1.speed })?.speed ?? 0.0
    }
}

racers.topSpeed()
```
- Sequence of Racer type으로 확장시켜서 사용 가능!!

```swift
protocol Score: Comparable {
  var value: Int { get }
}

struct RacingScore: Score {
  let value: Int
  
  static func <(lhs: RacingScore, rhs: RacingScore) -> Bool {
    lhs.value < rhs.value
  }
}

RacingScore(value: 150) >= RacingScore(value: 130) // true
```
- Comparable 프로토콜을 채택해서 비교 연산자를 모델안에 정의해줄 수 있음!

---

### 결론
- Protocol과 Extension의 활용은 굉장히 파워풀하다.
- 많이 의식하면서 사용해보려고 노력해보자.
- 하지만 POP가 만능은 아니다.
- 어떤 컨셉이던지 적절한 트레이드 오프는 필수

---

> - 참고
>   - [Protocol-Oriented Programming Tutorial in Swift 5.1: Getting Started](https://www.raywenderlich.com/6742901-protocol-oriented-programming-tutorial-in-swift-5-1-getting-started)
