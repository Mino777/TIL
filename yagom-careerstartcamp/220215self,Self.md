# TIL 220215self,Self

## 🔥학습 내용
**궁금해진 이유**

프로젝트를 진행하다가, 아래코드에서 switch self는 왜 쓰고,

왜 저게 가능한지에 대한 팀원의 질문이 있었음.

```swift
private enum SomeEnum: Int {
    case something
    case something
    case something
    case something
    
    var somethingValue: Int {
        switch self { // 해당 부분 self
        case .something: return 1
        case .something: return 2
        case .something: return 3
        case .something: return 0
            
        }
    }
}
```

**오잉? 뭔가 설명이 훅훅 안나오는데..?**  
사실 나는 위 코드에서 self == SomeEnum(rawValue:) 라고만 생각하고 지금까지 써왔기 때문에

그냥 self == SomeEnum(rawValue:)이기 때문에 가능한 부분이고,

self로 줄여서 쓰는게 편해서 라고만 설명을 드렸음.

  

**아 뭔가 사이다가 필요해..!**

답변을 저따구로 드리고 프로젝트를 진행하다보니 뭔가 계속 마음에 걸림.

왤까? 나는 왜 이렇게 써왔지..? 어떻게 설명을 해야할까..?

  

**서포터즈 솔에게 질문!**

self에 대해서 더 학습해보면 좋을 것 같다라는 피드백을 주셨음.

와우 왜 self 자체에 대해서는 접근을 안했었지..?! 솔 감사합니다!!

  

**self란 무엇인가?!**

타입의 인스턴스에서 자기 자신을 나타내는 프로퍼티.

모든 인스턴스들이 암시적으로 생성하는 프로퍼티.

인스턴스 자체를 들고 있는 프로퍼티.

인스턴스 프로퍼티와 인스턴스 메서드를 가리킬 때 사용

해당 타입이 값 타입일 경우에는 똑같이 값 타입처럼 동작하고,

참조 타입일 경우는 포인터로써 힙 영역에 존재하는 클래스 인스턴스의 주소를 가지게 됨.

  

따라서 위 코드에 적용시켜보면, SomeEnum에서 switch self를 쓸 수 있는 이유도

SomeEnum 타입의 인스턴스를 가리키면서 case들을 self를 통해 추론할 수 있기 때문에

SomeEnum.somthing.somethingValue로 접근했을 때

get-only 연산 프로퍼티로 접근한 something에 해당하는 값을 리턴해줄 수 있음.

나이쓰!

  

근데 self에 대해서 찾다보니 Self에 대한 내용도 많이 나왔음.

**덤으로 Self란 무엇인가?**

타입이지만, 특정한 타입은 아니고 특정 타입들을 편하게 참조하기 위한 것

self가 인스턴스 프로퍼티와 인스턴스 메서드를 가리킬 때 사용한다면,

Self는 타입 프로퍼티와 타입 메서드를 가리킬 때 사용.

  

위 코드에 적용시켜보자면,

Self는 SomeEnum 인스턴스의 타입 자체를 가리키기 때문에 self처럼 사용하지 못함.

이번 프로젝트에서 타입 프로퍼티를 사용해봐서

해당 코드로 간단히 예시를 들어보자면,

```swift
enum SomeEnum {
    static let something: ClosedRange<Int> = 0...3
    
    func testSelfself() {
        self.testSelfself()
        Self.something
    }
}
```
  

위 코드의 testSelfself() 메서드안에서

self를 사용하는 경우 타입 프로퍼티인 something에 접근하지 못함.

Self를 사용하는 경우 something에 접근할 수 있고,

testSelfself() 메서드는 접근은 가능하지만 사용하면 바로 에러가 뜸.

Instance member인 testSelfself는 SomeEnum 타입 안에서 사용할 수 없다!

## 🔥오늘의 링크
- [마이노 블로그](https://mino777.tistory.com/4)
---
