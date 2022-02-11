# TIL 220211optional,step2

## 🔥학습 내용
#### Optional
- 값이 있을 수도 있고 없을 수도 있는 것
- 값이 없는 경우에 런타임 에러를 방지
- 메모리 공간을 Optional로 감쌈으로써 값을 꺼낼때 런타임 에러를 방지할 수 있음.

#### Optional Binding
- 옵셔널의 값을 가져오고 싶은 경우 사용
- 옵셔널의 값이 존재하는지 검사한 뒤, 존재한다면 해당 값을 다른 변수에 대입
-  switch도 옵셔널 바인딩에 사용한다구..?! 나중에 꼭 예제코드 만들어보기 ( 아마 case none: 으로 처리할듯 )
- if let
	- 공식문서에서의 옵셔널 바인딩 대표 구문
	- if let으로 옵셔널 바인딩 된 상수는 해당 scope 안에서만 사용 가능
		- 이 부분과 가독성 측면에서 개인적으로 선호하지 않아서 주로 guard let을 사용했었는데 이 부분은 해당 스코프 밖에서 변수를 선언해주고 해당 변수에 할당해주는 것은 가능하다는것을 처음 알았음. (그래도 아직까진 guard문이 더조아!)
- guard let
	- 지금까지 옵셔널 바인딩이 최우선인 구문인줄 알았는데, 공식문서에서는 옵셔널 바인딩 보다는 Early Exit에 초점을 두고있었음. 싱기.
	- Early Exit!
	-   if 코드보다 훨씬 간결하고 읽기 좋게 구성 가능
	-   예외사항만을 처리하는 경우에는 guard구문이 훨씬 간편
	-   해당 상수를 메서드 내에 지역 상수처럼 자유롭게 사용이 가능
	-   return,break,continue,throw등의 제어문 전환 명령어를 쓸 수 없는 상황이라면 사용 불가

#### Optional Chaining
- nil 확인을 위해 조건문을 많이 중첩 시켜야 할때, 간결하게 작성할 수 있는 방식
	- 객체지향적인 부분으로 본다면 2개 이상 체이닝하는것은 바람직하지 않음.
- 체이닝시에 맨 마지막 부분의 경우 ?기호를 붙이지 않는데 이 부분의 경우 생략이라기보단 ?기호는 옵셔널 체이닝이 필요한, 진행되는 경우에 붙인다고 생각하면 됨. 따라서 마지막 부분은 체이닝이 필요없기 때문에 붙일 필요가 없음.

#### Using the Nil-Coalescing Operator
- ?? 기호를 사용해 기본값을 지정해줌.
- 해당 부분도 체이닝을 진행할 수 있음. 처음 알았다!

#### Unconditional Unwrapping
- 발작버튼

#### Optional vs Optional, Optional vs non-Optional 의 비교연산이 가능한 이유?
- 옵셔널로 래핑을 해준 다음에 비교하기 때문.
```swift
static public func ==(lhs: Wrapped?, rhs: Wrapped?) -> Bool {...} // 값 끼리 비교
static public func !=(lhs: Wrapped?, rhs: Wrapped?) -> Bool {...} // 값 끼리 비교
static public func ==(lhs: _OptionalNilComparisonType, rhs: Wrapped?) -> Bool {} // nil과 optional 비교
static public func !=(lhs: _OptionalNilComparisonType, rhs: Wrapped?) -> Bool {} // nil과 optional 비교
static public func ==(lhs: Wrapped?, rhs: _OptionalNilComparisonType) -> Bool {} // optional과 nil 비교
static public func !=(lhs: Wrapped?, rhs: _OptionalNilComparisonType) -> Bool {} // optional과 nil 비교
```
- 위 코드처럼 옵셔널 내부 구현에 비교 연산자를 따로 구현해놓음.

#### STEP2 피드백
- 고차함수 축약형 자제하기!
- 고차함수만으로 리턴해줄때는 가독성을 위해 따로 상수들로 분리해서 진행하기!
- 재귀와 반복의 차이 알아보기

---

## 🔥쓰고싶은 말
- 첫 주가 정말 눈깜짝할 사이에 지나간 것 같다.
- 처음에는 정말 하루 하루를 세세하게 기록을 하려고 맘을 먹었었는데 지키지 못한 것 같다. 앞으로는 정말 세세하게 기록하자!
- 팀원과 프로젝트 할때도 무조건 공동 노션으로 같이 계속해서 기록하면서 진행하기!
- 앞으로 프로젝트 Readme도 잘 챙기기! 남는건 코드와 Readme다!

## 🔥오늘의 링크
- Optional
	- https://developer.apple.com/documentation/swift/optional
- Optional 비교 연산 관련
	- https://developer.apple.com/documentation/swift/optional/2950146
- Swift Optional 내부 구현 부분
	- https://github.com/apple/swift/blob/main/stdlib/public/core/Optional.swift
