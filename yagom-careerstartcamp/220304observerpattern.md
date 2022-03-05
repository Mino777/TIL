# TIL 220304observerpattern

## 🔥학습 내용

### Observer Pattern

![](https://assets.alexandria.raywenderlich.com/books/des/images/4ac19e2deab6993c3237b02b14f55b1b87591e5f0873e94b311ac552237ee362/original.png)

- subscriber는 observer 객체이며 업데이트를 수신
- publisher observable 객체이며 업데이트를 보냄
- value는 변경된 기본 객체
- 다를 객체에 대한 변경 사항을 수신할 때 사용
- VC를 subscriber, model을 publisher로 사용하기 좋은 MVC와 함께 자주 사용.
- model은 VC의 유형에 대해 알 필요 없이 VC에 변경 사항을 다시 전달할 수 있음.

```swift
protocol Publisher {
    var observers: [Observer] { get set }
    func subscribe(observer: Observer)
    func unSubscribe(observer: Observer)
    func notify(message: String)
    func changeTest()
}

protocol Observer {
    var id: String { get set }
    func update(message: String)
}

class PublisherClass: Publisher {
    var observers: [Observer]
    private(set) var test: Int {
        didSet {
            notify(message: "현재 테스트 밸류: \(test)")
        }
    }
    
    init(observers: [Observer], test: Int) {
        self.observers = observers
        self.test = test
    }
    
    func changeTest() {
        self.test = 10
    }
    
    func subscribe(observer: Observer) {
        self.observers.append(observer)
    }
    
    func unSubscribe(observer: Observer) {
        if let index = self.observers.firstIndex(where: { $0.id == observer.id }) {
            self.observers.remove(at: index)
        }
    }
    
    func notify(message: String) {
        observers.forEach { observer in
            observer.update(message: message)
        }
    }
}

class Test: Observer {
    var id: String
    let publisher: Publisher
    
    init(id: String, publisher: Publisher) {
        self.id = id
        self.publisher = publisher
    }
    
    func update(message: String) {
        print("\(id) \(message)")
    }
}

let publisher = PublisherClass(observers: [], test: 0)
let test = Test(id: "마이노", publisher: publisher)

publisher.subscribe(observer: test)
test.publisher.changeTest()

```

---

> - 참고
>  - [Observer Pattern](https://www.raywenderlich.com/books/design-patterns-by-tutorials/v3.0/chapters/8-observer-pattern)
>   - [Observer Pattern (옵저버) - 디자인 패턴 공부 20](https://icksw.tistory.com/257)
