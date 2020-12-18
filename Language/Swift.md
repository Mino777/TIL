# *Swift.*

### 바로가기

- [About Swift](#aboutswift)
- [Token, Expressions, Statements](#token)
- [Literal, Identifier, Keyword](#literal)
- [Compile, Link, Run](#compile)
- [Special Characters](#special)
- [First Class Citizen](#citizen)
- [Struct 와 Class의 차이](#structvsclass)

---
> 참고
>* yagom's Swift Basic
>* [부스트코스] iOS 프로그래밍을 위한 스위프트 기초
>* kxcoding Mastering Swift
>* THE SWIFT PROGRAMMING LAGNUAGE GUIDE
----

## <a name="aboutswift"></a>About Swift *<small><update 20.05.03><small>*

> Swift : A powerful open language that lets everyone build amazing apps.<br>
기존 Objective-C의 단점을 보완하고, LLVM/Clang 컴파일러로 빌드되는 애플의 신규 프로그래밍 언어이다. 기존 Objective-C에 비해 클로저, 다중 리턴 타입, 네임스페이스, 제네릭, 타입 인터페이스 등 Objective-C에는 없었던 현대 프로그래밍 언어가 갖고 있는 기능을 많이 포함시켰으며, 이에 따라 일정한 성능 향상을 보이고 있다.
스위프트(Swift)는 안전, 성능, 소프트웨어 설계 패턴에 대한 현대적인 접근 방식을 사용하여 구축된 범용 프로그래밍 언어다.

### 1. 특징<br>

안전성(Safe)<br>
스위프트는 안전한 프로그래밍을 지향합니다. 소프트웨어가 배포되기 전에, 즉 프로그래밍을 하는 중에 프로그래머가 저지를 수 있는 실수를 엄격한 문법을 통하여 미연에 방지하고자 노력했습니다. 때론 너무 강제적이라고 느껴질 수 있지만 문법적 제재는 실수를 줄이는 데 도움이 됩니다. 버그를 수정하거나 실수를 찾아내는 시간을 절약할 수 있습니다. 옵셔널이라는 기능을 비롯하여 guard 구문, 오류처리, 강력한 타입통제 등을 통해 스위프트는 안전한 프로그래밍을 구현하고 있습니다.

신속성(Fast)<br>
스위프트는 C 언어를 기반으로 한 C, C++, Objective-C와 같은 프로그래밍 언어를 대체하려는 목적으로 만들어졌습니다.
아직은 부분적으로 미흡하지만 성능 또한 C 언어 수준을 목표로 개발되었습니다.
그래서 스위프트는 성능을 예측할 수 있고 일정한 수준으로 유지할 수 있는 부분에 초점을 맞춰 개발되었습니다.
실행속도의 최적화 뿐만 아니라 컴파일러의 지속된 개량을 통해 더 빠른 컴파일 성능을 구현해 나가고 있습니다.

더 나은 표현성(Expressive)<br>
지난 수십 년 간 컴퓨터 과학 분야는 발전해왔습니다.
이와 함께 성장한 수많은 프로그래밍 언어는 제 각각의 문법 별로 다양한 장단점이 있었습니다.
스위프트는 이를 참고해 더 사용하기 편하고 보기 좋은 문법을 구사하려 노력했습니다. 개발자들이 원하던 현대적이고 세련된 문법을 구현할 수 있었죠.
그러나 지금의 스위프트가 끝이 아닙니다. 계속된 업데이트를 통해 더욱 보기좋고 쓰기좋은 언어로 발전해 나갈 것입니다.

Swift는 다음과 같이 코드의 표현력을 높이기 위한 다른 많은 기능을 제공합니다.<br>
- 함수 포인터와 통합된 클로저
- 튜플 및 멀티플 반환 값
- 제네릭
- 범위 또는 컬렉션에서의 빠르고 간결한 반복
- 메소드, 확장 프로그램 및 프로토콜을 지원하는 구조
- 함수형 프로그래밍 패턴 (예: map 및 filter)
- try/catch/throw를 사용한 기본 오류 처리

출처: https://swift.org/about/ , https://blog.yagom.net/526/

---
## <a name="token"></a>Token, Expressions, Statements *<small><update 20.12.16><small>*
- 토큰, 표현식, 문장의 개념

#### Token

-   공백이나 구두점으로 분리할 수 없는 가장 기본적인 요소, 가장 작은 요소. 원자와 같은 것
-   token의 종류로는 Identifiers, Keywords, Punctuations, Operators, Literals
-   공백은 토큰을 구분하는 역할을 함

#### Expressions

-   각 변수, 연산자, 함수 같은 것들이 하나 이상 모여서 하나의 값으료 표현되는 코드
-   표현식을 통해서 하나의 결과값을 도출하는 것을 표현식을 평가한다고 표현. ( Evaluate )
- 코드를 실행해서 값을 얻는다.

#### Statement

-   하나 이상의 표현식이 모여서 특정 작업을 실행하는 것이 statement.
-   if, switch, guard, for in, while 등

----
## <a name="literal"></a>**Literal, Identifier, Keyword** *<small><update 20.12.16><small>*
- 리터럴, 식별자, 키워드의 개념

#### Literal

- 코드 내에서 의미가 변하지 않고 있는 그대로 사용되는 값
- 각 자료형 Literal 들이 존재 ( ex) Integer Literals, Floating-point Literal 등 )

#### Identifier

- 코드에 포함된 요소를 구별하는데 사용되는 이름
- ex) 변수의 이름, 함수의 이름 등

#### Keyword

- 프로그래밍 언어가 제공하는 기능을 위해서 예약되어있는 단어
- ex) var, let, func 등

---
## <a name="compile"></a>**Compile, Link, Run** *<small><update 20.12.16><small>*
- 소스코드를 작성하고 프로그램을 생성하는 과정

#### Compile
- 텍스트로 작성한 code를 컴퓨터가 이해 가능한 0,1 binary code로 바꿔주는 과정
- 변환에 필요한 프로그램이 compiler
- xcode에서 컴파일러는 소스코드를 분석할 때 warning, error로 구분.

#### Link
- 소스코드들을 연결해주는 과정
- 링크를 담당하는 도구는 Linker

>소스코드를 컴파일하면 바이너리 코드로 변환되고, 거기에 프레임워크나 라이브러리에 포함된 코드가 Link되고 실행파일이 생성됨. 이러한 과정을 하나로 묶어서 build 라고 함. 이 과정에 필요에 따라 정적 분석, unitTest 같은 부가적인 작업이 포함되는 경우도 있음. 여기 까지가 Compile Time 이고 이후는 Runtime

#### Run
- 실행파일을 생성하는 방법 크게 두가지 debug, release mode
---
## <a name="special"></a>**Special Characters** *<small><update 20.12.18><small>*

- 프로그래밍에서 자주 사용되는 특수문자 영문 명칭

! : Exclamation Mark

// ~ : Tilde

` : Grave Accent / Back Tick

@ : At Symbol

// # : Sharp / Pound / Hashtag

$ : Dollar Sign

% : Percent Sign

^ : Carrot

& : Ampersand

// *   : Asterisk

() : Parentheses

// -   Minus Sign / Hyphen

_ : Underscore

= : Equal Sign

[ ] : Square Bracket

{} : Curly Bracket / Brace

\ : Backslash

| : Vertical Bar / Pipe

// ; : Semicolon

// : : Colon

, : Comma

. : Period

<> : Angle Bracket

/ : Slash

? : Question Mark


---
## <a name="citizen"></a>First Class Citizen *<small><update 20.12.18><small>*
- First Class Citizen 주요 특징

1. can be stored in variables and data structures
- 상수와 변수에 저장할 수 있다.
2. can be passed as a parameter to a function
- 파라미터로 전달할 수 있다.
3. can be returned as the result of a function
- 함수에서 리턴할 수 있다.
---

## <a name="structvsclass"></a>Struct 와 Class의 차이 *<small><update 20.05.20><small>*

1. Class는 상속을 지원하지만, Struct는 그렇지 못함.
2. Class는 참조 타입이지만, Struct는 값 타입.
3. Class는 heap 메모리에 저장, Struct는 stack 메모리에 저장.

>예시
```swift
struct PersonStruct {
    var firstName: String
    var lastName: String
    
    init(firstName: String, lastName: String) {
        self.firstName = firstName
        self.lastName = lastName
    }
    
    var fullName: String { // computed property
        return "\(firstName) \(lastName)"
    }
    
    mutating func uppercaseName() { // property 를 변경하려면 mutating
        firstName = firstName.uppercased()
        lastName = lastName.uppercased()
    }
}

class PersonClass {
    var firstName: String
    var lastName: String
    
    init(firstName: String, lastName: String) { // class 객체를 생성할때 사용하는 생성함수 init
        self.firstName = firstName // parm과 똑같을경우 self.
        self.lastName = lastName
    }
    
    var fullName: String {
        return "\(firstName) \(lastName)"
    }
    
    func uppercaseName() {  // class에선 mutating 사용하지 않음
        firstName = firstName.uppercased()
        lastName = lastName.uppercased()
    }
}

var personStruct1 = PersonStruct(firstName: "Mino", lastName: "Jo")
var personStruct2 = personStruct1

var personClass1 = PersonClass(firstName: "Mino", lastName: "Jo")
var personClass2 = personClass1

personStruct2.firstName = "Minjin"
personStruct1.firstName // = Mino // Struct는 값 타입이기 때문에
personStruct2.firstName // = Minjin // 기존의 데이터 값을 복사해서 새로운 데이터를 만듦.


personClass2.firstName = "Minjin"
personClass1.firstName // = Minjin // Class는 참조 타입이기 때문에
personClass2.firstName // = Minjin // 첫 데이터를 참조해서 그 데이터에 덮어 씌움.


personClass2 = PersonClass(firstName: "Babo", lastName: "Jo")
personClass1.firstName // = Minjin
personClass2.firstName // = Babo


personClass1 = personClass2
personClass1.firstName // = Babo
personClass2.firstName // = Babo
```

### struct 를 사용해야할 경우
1. 두 object를 "같다, 다르다" 로 비교해야 하는 경우
2. copy 된 각 객체들이 독립적인 상태를 가져야 하는 경우
3. 코드에서 오브젝트의 데이터를 여러 스레드 걸쳐 사용할 경우 ( 안전하게 사용 가능 )

### class 를 사용해야할 경우
1. 두 object의 인스턴스 자체가 같음을 확인해야 할때
2. 하나의 객체가 필요하고, 여러 대상에 의해 접근되고 변경이 필요한 경우

>일단 struct로 쓰자. 그리고 나서 class를 사용해야할 경우 class로 포팅하자.
swift는 struct를 좋아한다.
