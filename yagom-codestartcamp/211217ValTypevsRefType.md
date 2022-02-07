# TIL 211217 
> Tag: ValTypevsRefType

## 🔥학습 내용
### Value Type vs Reference Type

- Value Type: Structure, Enumeration, Tuple
- Reference Type: Class, Closure
- Value Type은 stack에 저장되어있는 값을 비교.
- Reference Type은 heap에 저장되어있는 값을 비교. -> 형식에 관계없이 실제 값을 비교

```swift
struct SizeValue {
   var width = 0.0
   var height = 0.0
}

var value = SizeValue() // stack에 메모리 공간 생성 및 저장

var value2 = value // 값 복사, 복사본이 새로운 메모리 생성 및 저장 value와 개별 인스턴스
value2.width = 1.0
value2.height = 2.0

value // 0 0
value2 // 1 2

class SizeObject {
   var width = 0.0
   var height = 0.0
}

var object = SizeObject() // stack에는 heap 메모리 주소가 저장되고, heap에는 인스턴스가 저장
                          // 값 형식과 달리 인스턴스에 바로 접근할 수 없고 항상 stack에 거쳐서 접근.

var object2 = object // stack에 새로운 메모리 공간이 생성되고, 이전 주소가 그대로 복사됨.

object2.width = 1.0
object2.height = 2.0

object // 1 2
object2 // 1 2

let v = SizeValue()

let o = SizeObject()
o.width = 1.0
o.height = 2.0
```

- stack에 저장된 데이터는 자동으로 제거되기 때문에 개발자가 따로 관리 불필요
- heap에 저장되는 데이터는 필요하지 않는 시점에 개발자가 직접 관리해야함.
- Strong Reference Cycle과 이어짐

---
