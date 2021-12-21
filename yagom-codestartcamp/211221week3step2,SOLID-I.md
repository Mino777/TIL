# TIL 211221
> Tag: week3step2,SOLID-I

## 🔥학습 내용
### struct와 class의 사용
- Person을 struct로 진행할 경우엔, 값을 복사하여 사용하기 때문에,  
    CoffeShop에서 Person의 buy 메서드를 호출하더라도 Person 원본의 money 속성 값은 변하지 않음.
-   따라서 원본이 공유될 필요가 있기 때문에(참조 될 필요가 있기 때문에),  **Person**의 경우 참조 타입인  **class**를 사용하였습니다.
-   **CoffeShop**의 경우에는 원본이 공유될 필요가 없기 때문에(참조 될 필요가 없기 때문에) 값 타입인  **struct**로 진행했습니다.
-   드디어 상속외에 뭔가 좀 유의미한 차이를 알게 된 것 같습니다! 하지만 여전히 뭔가 확실하게 딱 구분지어서 사용할 정도의 단계는 아닌 것 같습니다😭

### Interface Segregation Principle (인터페이스 분리 원칙)
> - 클래스 내에서 사용하지 않는 인터페이스는 구현하지 말아야 한다.
> - 클라이언트 객체는 사용하지 않는 메소드에 의존하면 안된다.
> - 인터페이스가 거대해지는 경우 SRP를 어기는 경우가 생길 수 있고, 해당 인터페이스를 채택해서 사용하는 경우 쓰지 않는 메소드가 있어도 넣어야 하는 경우가 발생할 수 있어 최대한 인터페이스를 분리하는 것을 권장함.
> - 일반적인 인터페이스를 가지는 것보다 구체적인 각각의 다른 인터페이스를 가지는 것이 나음

```swift
protocol GestureProtocol {
  func didTap()
  func didLongTap()
  func didDoubleTap()
}

class GestureButton: GestureProtocol {
  func didTap() {}
  func didLongTap() {}
  func didDoubleTap() {}
}

class DoubleTapButton: GestureProtocol {
  func didDoubleTap() {}
  
  // Useless
  func didTap() {}
  func didLongTap() {}
}

// DoubleTapButton 클래스 내부에 사용하지 않는 메소드가 있음.

---

protocol TapGestureProtocol {
  func didTap()
}

protocol LongTapGestureProtocol {
  func didLongTap()
}

protocol DoubleTapGestureProtocol {
  func didDoubleTap()
}

class GestureButton: TapGestureProtocol, LongTapGestureProtocol, DoubleTapGestureProtocol {
  func didTap() {}
  func didLongTap() {}
  func didDoubleTap() {}
}

class DoubleTapButton: GestureProtocol {
  func didDoubleTap() {}
}

class LongAndTapButton: LongTapGestureProtocol, TapGestureProtocol {
  func didTap() {}
  func didLongTap() {}
}

func doSomething(button: DoubleTapGestureProtocol & LongTapGestureProtocol) {
  button.didDoubleTap()
  button.didLongTap()
}

// 프로토콜을 분리함으로써 필요한 프로토콜만 채택하게 되어 사용하지 않는 메소드가 사라짐
```

```swift
// 방문 사이트가 있다.
protocol LandingSiteHaving {
    var landingSite: String { get }
}

// LandingSiteHaving 객체에 착륙할 수 있다.
protocol Landing {
    func land(on: LandingSiteHaving) -> String
}

// 페이로드가 있다.
protocol PayloadHaving {
    var payload: String { get }
}

// 차량에서 페이로드를 가져올 수 있다 (예. Canadaarm을 통해).
protocol PayloadFetching {
    func fetchPayload(vehicle: PayloadHaving) -> String
}

final class InternationalSpaceStation: PayloadFetching {

    // ⚠️ 우주 정거장은 SpaceXCRS8의 착륙 능력에 대해 전혀 모른다.
    func fetchPayload(vehicle: PayloadHaving) -> String {
        return "Deployed \(vehicle.payload) at April 10, 2016, 11:23 UTC"
    }
}

// 바지선 - 착륙 지점이 있다 (well, you get the idea).
final class OfCourseIStillLoveYouBarge: LandingSiteHaving {
    let landingSite = "a barge on the Atlantic Ocean"
}

// 페이로드가 있고 착륙 지점이 있는 곳에 착륙할 수 있다.
// 매우 제한된 우주 비행체라는 것을 안다.
final class SpaceXCRS8: Landing, PayloadHaving {

    let payload = "BEAM and some Cube Sats"

    // ⚠️ CRS8 은 착륙지 정보만 알고 있다.
    func land(on: LandingSiteHaving) -> String {
        return "Landed on \(on.landingSite) at April 8, 2016 20:52 UTC"
    }
}

let crs8 = SpaceXCRS8()
let barge = OfCourseIStillLoveYouBarge()
let spaceStation = InternationalSpaceStation()

spaceStation.fetchPayload(vehicle: crs8)
crs8.land(on: barge)
```
