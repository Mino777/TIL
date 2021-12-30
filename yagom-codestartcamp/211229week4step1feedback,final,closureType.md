# TIL 211229
> Tag: week4step1feedback,final,closureType

## 🔥학습 내용
### final keyword
> - 재정의 및 상속을 방지
> - 코드의 런타임 성능이 향상
#### final 키워드가 성능에 미치는 영향
- 오버라이딩한 메서드는 실행 시점에 어떤 메서드를 실행할지 결정(vtable)
- final 키워드가 적용된 메서드는 컴파일 시점에 어떤 메서드를 실행할지 결정할 수 있으므로(런타임 오버헤드가 제거되고 static dispatch로 구현 가능)성능 상 이점을 가짐.
>- vtable?
> - 가상 메서드 테이블
> - 메서드 오버라이딩에 따라 실행 시점에 어떤 메서드를 실행할지 결정하는 dynamic dispatch를 지원하기 위해 언어에서 사용하는 메커니즘

>- Method Dispatch?
>- Method를 호출할 때, 현재 메모리에서 어떻게 각 메소드를 실행시키고 어떤 메소드를 실행시킬지를 결정지을 때 사용
>- 대표적으로 Dynamic, Static으로 나뉨

>- Static Dispatch
>   - 가장 빠른 Dispatch 방식
>   - 컴파일 타임에 컴파일러가 어떤 메소드를 실행할지 주소값을 알고 있기 때문에 inline으로 빠르게 수행
> - Dynamic Dispatch
>    - 런타임 중에 어떤 메소드를 사용할 지 결정하기 때문에 오버헤드가 약간은 발생하고 속도가 느림.
>    - 하지만 OOP의 특징중 다형성 개념 때문에 많은 언어가 Dynamic Dispatch 방식을 사용함
	
### Closure는 Reference? Value?
- Closure는 Reference Type이다.

#### Capturing Values
- 클로저가 매개변수나 지역변수가 아닌 주변 외부의 context를 참조하는 것(Capturing by reference)
```swift
func makeIncrementer(forIncrement amount: Int) -> () -> Int {
    var runningTotal = 0
    func incrementer() -> Int {
        runningTotal += amount
        return runningTotal
    }
    return incrementer
}
```
- runningTotal과 amount를 캡쳐해서 사용
- Closure는 값을 캡쳐할 때, Value/Reference 타입에 관계 없이 모두 Reference Capture 한다.
