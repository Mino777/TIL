# TIL 211220 
> Tag: Type,Instance

## 🔥학습 내용
### 타입(Type)
> - 데이터와 기능을 용도에 맞게 묶어 구조화 해놓은 것. 객체라고도 부름
> - 어떤 객체의 설계도라고도 할 수 있음.
> - 메모리에 생성될 타입의 인스턴스가 수행할 수 있는 기능과 동작을 상세하게 표현한 것
> - 중첩 타입(Nested Type)으로도 설계 가능
- named Types
	- 이름을 가지고 있는 타입
	- class, struct, enum, protocol
	- Int, String, Array, Double 등등 기본 데이터 타입들이 모두 struct로 구현되어있음. 따라서 기본 데이터 타입들도 Named Type!
- compound Types
	- 이름이 없는 타입
	- function, tuple type으로 나뉘어짐.
	- named type과 compound types들이 포함될 수 있음
	- ex) (Int,(Int,Int))
	- Int - named type
	- (Int,Int) - compound type

### 인스턴스(Instance)
> - 타입이라는 설계도를 인스턴스(실체)를 생성해서 사용.

- Swift는 안전함을 지향하는 언어
	- 변수 혹은 상수 등에 제대로 된 값이 들어있지 않은 상황에 해당 변수나 상수에 접근하면 런타임 오류 발생
	- 이것을 미연에 방지하고자 만든 기능 두가지
		- 옵셔널
		- 인스턴스의 초기화 과정의 규칙
			- 해당 규칙의 대 전제
				- 인스턴스의 프로퍼티에 값이 있다는 것이 항상 보장 되어야 한다.
