# TIL 220224dependencyInjection,DIP

## 🔥학습 내용
### 의존성 주입(Dependency Injection)
- 하나의 객체가 다른 객체의 의존성을 제공하는 테크닉
- 객체가 필요한 것들을 타입 내부에서 직접 생성해주는것이 아닌, 다른 객체에게 전달 받는다.
- 단위 테스트를 용이하게 해줌
	- Mock 객체
- 코드의 재활용성을 높여줌
- 더 유연한 코드를 작성할 수 있음
- 생성자가 다른 코드에 위치하기 때문에 상대적으로 낮은 가독성을 가질 수 있다

```swift
protocol DITest {
    var testString: String { get set }
}

class Test1: DITest {
    var testString: String
    
    init(testString: String) {
        self.testString = testString
    }
}

class Test2 {
    let test: DITest
    
    init(test: DITest) {
        self.test = test
    }
}

let test1 = Test1(testString: "마이노")
let test2 = Test2(test: test1)
print(test2.test.testString)
```

---

### 의존 관계 역전 법칙(DIP)
- 상위 계층이 하위 게층에 의존하는 의존관계를 반전시킴으로써 상위 계층이 하위 계층의 구현으로부터 독립되게 할 수 있는 구조
- 상위 모듈은 하위 모듈에 의존해서는 안된다. 상위, 하위 모듈 모두 추상화에 의존해야 한다.
- 추상화는 세부 사항에 의존해서는 안된다. 세부사항이 추상화에 의존해야 한다.
- 우선 지금 이해한걸로는, 상위 모듈, 하위 모듈 모두 추상화되어있는 프로토콜에 의존함으로써 의존 관계를 독립시킬 수 있다 정도.
- 이렇게 의존의 방향이 역전되어 반전되는 상황을 제어의 반전(Inversion of Control)이라고 표현

---

- MVC에서 rootVC에 의존성 주입을 하는 방법은 뭐가 가장 좋은 방법일까?

> - 참고
>   - [iOS Dependency Injection 개념 파악하기](https://linux-studying.tistory.com/36)
>   -  [iOS) DI(Dependency Injection) in Swift](https://sihyungyou.github.io/iOS-dependency-injection/)
>    -  [의존성 주입 (DI) 이란?](https://silver-g-0114.tistory.com/143)
>     -  [iOS 의존성 주입(Dependency Injection) 알아보기](https://lazyowl.tistory.com/entry/iOS-%EC%9D%98%EC%A1%B4%EC%84%B1-%EC%A3%BC%EC%9E%85Dependency-Injection-%EC%95%8C%EC%95%84%EB%B3%B4%EA%B8%B0)
---

