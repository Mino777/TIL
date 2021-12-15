# TIL 211215
> Tag: TypeProperty

## 🔥학습 내용

### 타입 프로퍼티 (Type Property)
> - "static"을 이용해 선언
> - class, struct, enum에서 사용
> - 연산 타입 프로퍼티에 "class" 또한 이용할 수 있음
> - 지금까지 static은 뭐 그냥 싱글톤 패턴 사용할때 쓰는거지 라고만 알고 썼는데 타입 프로퍼티라는게 있었다니...! 공식문서 정독 필쑤...!

1. 저장 타입 프로퍼티
- 선언할 당시 원하는 값으로 항상 초기화 되어 있어야 함. 따라서 let/var
- 처음 엑세스 할때 lazily initialized 됨. 이건 다수의 thread에 의해 동시에 엑세스 되고 있어도, 한번만 초기화되는 것이 보증되어 있어 "lazy" 키워드를 사용할 필요가 없음.
- 인스턴스가 생성된다고 매번 생성되는 것이 아니라, lazy 처럼 누군가 호출해줬을 때 한번 메모리에 올라가고, 그 뒤로는 어디서든 해당 프로퍼티를 공유하는 형태
```swift
struct SomeStructure {
    static let storedTypeProperty = "Some value."
}
```

2. 연산 타입 프로퍼티의 오버라이딩
- 연산 타입 프로퍼티는 Subclass에서 오버라이딩이 가능
- 오버라이딩이 가능한 class를 붙여준 예시

```swift
class Human {
    class var alias: String {
        return "Human Type Property"
    }
}
 
class Mino: Human {
    override class var alias: String {
        return "Mino Type Property"
    }
}
 
Human.alias // "Human Type Property"
Mino.alias  // "Mino Type Property"
```
- 오버라이딩이 불가능한 static을 붙여준 예시
```swift
class Human {
    static var alias: String {
        return "Human Type Property"
    }
}
 
class Mino: Human {
    override static var alias: String {// error! Cannot override static property
        return "Mino Type Property"
    }
}
```
