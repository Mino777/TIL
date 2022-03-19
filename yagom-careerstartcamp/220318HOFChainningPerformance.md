# TIL 220318HOFChainningPerformance

## 🔥학습 내용

### 고차함수 체이닝의 경우 한개의 For loop 보다 성능이 좋지 않다

```swift
let elementsCount = 100000
let fahrenheit = Array(repeating: 0.0, count: elementsCount).map { _ -> Double in
    return Double.random(in: 32.0 ... 113.0)
}

func a() {
    let startTime = CFAbsoluteTimeGetCurrent()
    fahrenheit.map({ (degreesFahrenheit) -> Double in
        return (degreesFahrenheit - 32.0) / 1.8
    }).filter({ (degreesCelsius) -> Bool in
        return degreesCelsius <= 20.0
    }).reduce(0.0) { (result, degreesCelsius) -> Double in
        return result + degreesCelsius
    }
    let durationTime = CFAbsoluteTimeGetCurrent() - startTime
    print("고차함수 체이닝 경과 시간: \(durationTime)")
}

func b() {
    let startTime = CFAbsoluteTimeGetCurrent()
    let a = fahrenheit.map({ (degreesFahrenheit) -> Double in
        return (degreesFahrenheit - 32.0) / 1.8
    })
    let b = a.filter({ (degreesCelsius) -> Bool in
        return degreesCelsius <= 20.0
    })
    let c = b.reduce(0.0) { (result, degreesCelsius) -> Double in
        return result + degreesCelsius
    }
    let durationTime = CFAbsoluteTimeGetCurrent() - startTime
    print("고차함수 논체이닝 경과 시간: \(durationTime)")
}

func c() {
    let startTime = CFAbsoluteTimeGetCurrent()
    var sum2: Double = 0.0
            
    for degreesFahrenheit in fahrenheit {
        let degreesCelsius = (degreesFahrenheit - 32.0) / 1.8
        if degreesCelsius <= 20.0 {
            sum2 += degreesCelsius
        }
    }
    let durationTime = CFAbsoluteTimeGetCurrent() - startTime
    print("for문 경과 시간: \(durationTime)")
}

a()
b()
c()
//고차함수 체이닝 경과 시간: 2.535413980484009
//고차함수 논체이닝 경과 시간: 3.0129369497299194
//for문 경과 시간: 1.841957926750183
```

- 체이닝의 경우에 성능이 당연히 떨어질거라고 예상은 했지만 논체이닝의 경우에는 뭔가 다르지 않을까? 라는 생각에 테스트를 해봤는데 오히려 더걸린다;
- 고차함수의 경우엔 뭔가 중첩과 관련해서 성능이 떨어지는 느낌이 아니고, 뭔가 임시 데이터를 저장해둘 메모리를 더 만드는 작업때문에 성능이 떨어지는 느낌?
- 어떤식으로 해결해야 할지 생각해보기
- 애초에 체이닝을 안하게끔 설계하기..? 그게 가능할까? 메소드로 분리한다고 해도 한곳에서 사용한다면 결국엔 같을텐데
- 근데 십만개로 진행해도 저정도 차이면 괜찮지 않을까..?

---

> - 참고
>   - [Performance of built-in higher-order function vs. for-in loop in Swift](https://medium.com/skoumal-studio/performance-of-built-in-higher-order-function-vs-for-in-loop-in-swift-166fa41b545f)
