# TIL 220225delegatepattern

## 🔥학습 내용

### Delegate Pattern
- delegate의 사전적 의미는 `위임하다`.
- 말 그대로 위임하는 패턴

#### Delegate Pattern을 왜 사용할까?
- 애플에서는 해당 패턴을 굉장히 많이 볼 수 있음.
- MVC 패턴을 권장했었기 때문
	- VIew에서 사용자의 액션을 Controller에게 알려 줄 필요가 있음
	- 해당 액션을 어떻게 처리할지는 Controller에게 역할을 위임

```swift
protocol TestDelegate: AnyObject {
    func touchUpTest()
}

class TestView {
    weak var delegate: TestDelegate?
    var testString: String = "탭 하기전 마이노"
    
    func tapped() {
        delegate?.touchUpTest()
    }
}

class TestViewController {
    private let view: TestView
    
    init(view: TestView) {
        self.view = view
    }
    
    func viewDidLoad() {
        view.delegate = self
    }
}

extension TestViewController: TestDelegate {
    func touchUpTest() {
        print("버튼 탭 했음")
        
        view.testString = "탭 하고나서 마이노"
    }
}

let view = TestView()
let viewController = TestViewController(view: view)
print(view.testString) // 탭 하기전 마이노
viewController.viewDidLoad()
view.tapped() // 버튼 탭 했음
print(view.testString) // 탭 하고나서 마이노
```

> - 참고
>   - [Examples of Delegates in Swift [closed]](https://stackoverflow.com/questions/40501780/examples-of-delegates-in-swift)
>   - [Delegate Pattern에 대해서](https://velog.io/@iwwuf7/Swift-Delegate-Pattern에-대해서)
>    - [Delegate Pattern (Swift)](https://linsaeng.tistory.com/32?category=753322)
---
