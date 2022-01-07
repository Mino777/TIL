# TIL 220105
> Tag: designpattern-abstractfactorypattern

## 🔥학습 내용
### 추상 팩토리 패턴(Abstract Factory Pattern)
- 여러 팩토리 인터페이스들을 하나의 인터페이스로 다시 추상화. 이후에 다른 팩토리들이 추가되어도, 기존 객체들에 영향을 미치지 않음.
- 구체적인 클래스를 지정하지 않고 공통된 요소들을 갖는 개별 팩토리 그룹을 캡슐화 하는 방법을 제공
> Swift 예시
> Protocol을 채택한 클래스나 구조체는 해당 Protocol이 정의한 껍데기 부분을 구체적으로 구현하고, 나머지 더 필요한 부분을 추가 하게 됨. 여기서 Protocol을 추상 팩토리라고 할 수 있음. 실제로 Protocol을 채택한 클래스를 사용할 땐 해당 클래스의 요소들만 사용하기 때문에 내부적으로 어떤 Protocol을 채택했는지 알 필요가 없음.
> 따라서 추상 팩토리는 Protocol, 팩토리는 이를 채택한 클래스나 구조체.
- 추상 팩토리 패턴을 사용하면 런타임에서 이를 사용하는 코드들의 변경 없이 구체적인 구현을 변경 할 수 있음. 하지만 복잡성과 추가 작업 발생

### 추상 팩토리 패턴이 사용될 수 있는 경우
- 앱이 객체의 생성, 구성, 표현 방법과 독립적이어야 할 때
- 앱이 여러 객체 중 하나로 구성되어야 할 때
- 관련 객체들이 함께 사용할 수 있게 설계 할 때
- 앱의 클래스 라이브러리를 제공하고 구현이 아닌 인터페이스만 표시할 때

``` swift
protocol BurgerDescribing {
    var ingredients: [String] { get }
}

struct CheeseBurger: BurgerDescribing {
    let ingredients: [String]
}

protocol BurgerMaking {
    func make() -> BurgerDescribing
}

// Number implementations with factory methods

final class BigKahunaBurger: BurgerMaking {
    func make() -> BurgerDescribing {
        return CheeseBurger(ingredients: ["Cheese", "Burger", "Lettuce", "Tomato"])
    }
}

final class JackInTheBox: BurgerMaking {
    func make() -> BurgerDescribing {
        return CheeseBurger(ingredients: ["Cheese", "Burger", "Tomato", "Onions"])
    }
}

enum BurgerFactoryType: BurgerMaking {

    case bigKahuna
    case jackInTheBox

    func make() -> BurgerDescribing {
        switch self {
        case .bigKahuna:
            return BigKahunaBurger().make()
        case .jackInTheBox:
            return JackInTheBox().make()
        }
    }
}

let bigKahuna = BurgerFactoryType.bigKahuna.make()
let jackInTheBox = BurgerFactoryType.jackInTheBox.make()
```
