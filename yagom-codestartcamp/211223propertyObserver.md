# TIL 211223
> Tag: propertyObserver

## 🔥학습 내용
### Property Observer
> - 프로퍼티의 변화를 관찰
> - 저장 프로퍼티에 추가 가능 (lazy 제외)
> - 새 값의 속성이 현재 값과 동일하더라도 호출
> - 부모클래스를 상속한 프로퍼티에도 추가 가능
- willSet
	- 값이 저장되기 직전에 호출
	- 값이 저장되기 직전에 새로 저장될 값이 파라미터로 전달 됨
```swift
var name: String = "Mino" {
    willSet(newName) {
        print("현재 이름 = \(name), 바뀔 이름 = \(newName)")
    }
}

// 파라미터를 사용하지 않는 경우 newValue라는 파라미터 이름으로 접근 가능
var name: String = "Mino" {
    willSet {
        print("현재 이름 = \(name), 바뀔 이름 = \(newValue)")
    }
}
```

- didSet
	- 새로운 값이 저장된 직후에 호출
	- 값이 저장된 직후에 이전 프로퍼티의 값이 파라미터로 전달 됨
```swift
var name: String = "Mino" {
    didSet(oldName) {
        print("현재 이름 = \(name), 바뀔 이름 = \(oldName)")
    }
}

// 파라미터를 사용하지 않는 경우 oldValue라는 파라미터 이름으로 접근 가능
var name: String = "Mino" {
    didSet {
        print("현재 이름 = \(name), 바뀔 이름 = \(oldValue)")
    }
}
```

- 연산 프로퍼티에서의 사용
	- 일반 연산 프로퍼티에는 프로퍼티 옵저버 추가가 되지 않음
	- 하지만 오버라이딩하면 추가 가능
```swift
class Human {
    var name = "Unknown"
    var alias: String {
        get {
            return name
        }
        set {
            name = newValue
        }
        willSet { }       // error! 'willSet' cannot be provided together with a getter
        didSet  { }       // error! 'didSet' cannot be provided together with a getter
    }
}

class Mino: Human {
    override var alias: String {
        willSet {
            print("현재 alias = \(alias), 바뀔 alias = \(newValue)")
        }
        didSet {
            print("현재 alias = \(alias), 바뀌기 전 alias = \(oldValue)")
        }
    }
}

let mino: Mino = .init()
mino.alias = "마이노"
// 현재 alias = Unknown, 바뀔 alias = 마이노
// 현재 alias = 마이노, 바뀌기 전 alias = Unknown
```
