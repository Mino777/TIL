# *Swift.*

### 바로가기

- [About Swift](#aboutswift)
- [Token, Expressions, Statements](#token)
- [Literal, Identifier, Keyword](#literal)
- [Compile, Link, Run](#compile)
- [Special Characters](#special)
- [First Class Citizen](#citizen)
- [Naming Convention](#naming)
- [Scope](#Scope)
- [Overflow](#overflowoperator)
- [Short-circuit Evaluation](#shortcircuit)
- [Value Bindings In Switch](#valuebindings)
- [Labeled Statements](#labeledstatements)
- String
	* [String Indices](#StringIndices)
	* [Substring](#Substring)
	* [String Editing](#StringEditing)
	* [Comparing Strings](#ComparingStrings)
	* [String Searching](#StringSearching)
	* [Character Set](#CharacterSet)
- Optional
	* [Optionals](#optional)
	* [Optional Binding](#optionalbinding)
	* [Nil-Coalescing Operator](#nil-coalescingoperator)
	* [Optional Chaining](#OptionalChaining)
- Functions
	* [Variadic Parameters](#VariadicParameters)
	* [In-Out Parameters](#In-OutParameters)
	* [Implicit Return](#ImplicitReturn)
- Closure
	* [Syntax Optimization](#SyntaxOptimization)
	* [Escaping Closure](#EscapingClosure)
- Collection
	* [Set](#Set)
	* [Iterating Collections](#IteratingCollections)
	* [KeyValuePair](#KeyValuePair)
- Enumeration
	* [Enumeration Type](#EnumerationType)
	* [RawValues](#RawValues)
	* [Associated Values](#AssociatedValues)	
	* [Enumeration Case Pattern](#EnumerationCasePattern)
	* [CaseIterable](#CaseIterable)
	* [Non-frozen Enumeration](#Non-frozenEnumeration)
- Structures and Classes
	* [Structure vs Class](#structvsclass)
	* [Initializer Syntax](#InitializerSyntax)
	* [Value Types vs Reference Types](#ValueTypesvsReferenceTypes)
- Property
	 * [Lazy Stored Property](#LazyStoredProperty)
	 * [Computed Property](#ComputedProperty)
	 * [Property Observer](#PropertyObserver)
- Inheritance and Ploymorphism
	 * [Inheritance and Overriding](#InheritanceandOverriding)
	 * [Overloading](#Overloading)
	 * [Type Casting](#TypeCasting)
- Initializer and Deinitializer
	 * [Initializer](#Initializer)
	 * [Class Initializer](#ClassInitializer)
	 * [Required Initializer](#RequiredInitializer)
	 * [Initializer Delegation](#InitializerDelegation)
- [Extension](#Extension)
- Protocol
	 * [Protocol Syntax](#ProtocolSyntax)
	 * [Protocol Requirements](#ProtocolRequirements)
	 * [Equatable](#Equatable)
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
## <a name="naming"></a>Naming Convention *<small><update 20.12.19><small>*
- Naming Convention of Swift

- Camel Case
	* UpperCamelCase
	* lowerCamelCase
- UpperCamelCase 사용하는 경우
	* Class, Structure, Enumeration, Extension, Protocol
- lowerCamelCase 사용하는 경우
	* variable, constant, function, property, method, parameter
---
## <a name="scope"></a>Scope *<small><update 20.12.19><small>*
- 전역범위, 지역범위, 선언된 위치에 따른 접근 가능성 변화

- Global Scope
- Local or Nested Scope

Scope Rules
1. 동일한 범위에 있는 변수와 상수에 접근할 수 있다.
2. 동일한 범위에서는 이전에 선언되어있는 변수와 상수에 접근할 수 있다.
3. local scope 에서는 상위 스코프에 선언되어있는 변수와 상수에 접근할 수 있다.
4. 상위 스코프에서는 하위 스코프에 선언되어있는 변수와 상수에 접근할 수 없다.
5. 서로 다른 범위에 동일한 이름이 존재한다면 가장 인접한 범위에 있는 이름을 사용한다.

---
## <a name="overflow"></a>Overflow Operator *<small><update 20.12.20><small>*

- Swift 는 Operator 에서 Overflow 를 허용하지 않음.
- 그래서 Overflow를 허용해야 하는 상황에서 Overflow Operator 로 따로 처리를 해줘야함.

```swift
let a: Int8 = Int8.max
let b: Int8 = a &+ 1 // -128

let c: Int8 = Int8.min
let d: Int8 = c &- 1 // 127

let e: Int8 = Int8.max &* 2 // -2
```
---
## <a name="shortcircuit"></a>Short-circuit Evaluation *<small><update 20.12.20><small>*
- Swift 가 조건식을 평가하는 방법

```swift
var a = 1
var b = 1

func updateLeft() -> Bool {
    a += 1
    return true
}

func updateRight() -> Bool {
    b += 1
    return true
}

if updateLeft() || updateRight() {
    // 왼쪽이 이미 true 이기 때문에 오른쪽은 리턴하지 않음
    // 따라서 a = 2 , b = 1 의 결과값이 나옴.
    // 이것이 단락 평가 (Short-circuit Evaluation)
}

if updateLeft() && updateRight() {
    // 왼쪽이 false 일 경우 거기서 평가를 끝내고 오른쪽은 리턴하지 않음.
    // 따라서 a = 2, b = 1 의 결과값이 나옴.
}

a
b

```
---
## <a name="valuebindings"></a>Value Bindings In Switch *<small><update 20.12.22><small>*
- switch 문에서의 Value Binding Pattern
- 특정 x, y 값을 각각 다른 case에 정의하고 그 정의된 상수를 또 다른 case에서 사용
```swift
let a = 1
switch a {
case let value where value < 100:
    print(value)
default:
    break
}

let point = (1, 2)
switch point {
case let (x, y):
    print(x, y)
case (let x, let y):
    print(x, y)
case (let x, var y):
    print(x, y)
case let(x, _):
    print(x)
}

let anotherPoint = (2, 0)
switch anotherPoint {
case (let x, 0):
    print("on the x-axis with an x value of \(x)")
case (0, let y):
    print("on the y-axis with a y value of \(y)")
case let (x, y):
    print("somewhere else at (\(x), \(y))")
}
// Prints "on the x-axis with an x value of 2"
```
---
## <a name="labeledstatements"></a>Labeled Statements *<small><update 20.12.25><small>*
- for 문, switch 문등에 lable 이름을 넣어 특정 구문을 실행하는 구문으로 사용이 가능.

```swift
outer: for i in 1...3 {
    print("OUTER LOOP", i)
    
    for j in 1...3 {
        print(" inner loop", j)
        
        break outer
    }
}
//OUTER LOOP 1
// inner loop 1

```
---
## <a name="StringIndices"></a>String Indices *<small><update 20.12.29><small>*
- 문자열 인덱스로 특정 문자의 위치를 표현하는 방법
```swift
let str = "Swift"

let firstCh = str[str.startIndex]
print(firstCh)

let lastCharIndex = str.index(before: str.endIndex) // 정수의 경우 -1로 구할 수 있지만 문자의 경우 이 메소드를 사용해야 함.
let lastCh = str[lastCharIndex]
print(lastCh)

let secondCharIndex = str.index(after: str.startIndex)
let secondCh = str[secondCharIndex]
print(secondCh)

let thirdCharStartIndex = str.index(str.startIndex, offsetBy: 2) // 이 메소드를 사용하면 정수처럼 접근 가능.
let thirdStartCh = str[thirdCharStartIndex]
print(thirdStartCh)

let thirdCharEndIndex = str.index(str.endIndex, offsetBy: -3)
let thirdEndCh = str[thirdCharEndIndex]
print(thirdEndCh)
```
---
## <a name="Substring"></a>Substring *<small><update 20.12.29><small>*
- 문자열을 처리할 때 메모리를 절약하기 위해 사용.
- Substring은 값을 읽기만 할 때는 원본 문자열의 메모리를 공유하고, 값을 변경하는 시점에만 새로운 메모리를 생성.

```swift
let str = "Hello, Swift"
let l = str.lowercased()

var first = str.prefix(1)
first

first.insert("!", at: first.endIndex)
str
first

let newStr = String(str.prefix(1)) // 새로운 메모리 생성

// MARK: 특정 범위 추출
let s = str[..<str.index(str.startIndex, offsetBy: 2)]

str[str.index(str.startIndex, offsetBy: 2)...]

let lower = str.index(str.startIndex, offsetBy: 2)
let upper = str.index(str.startIndex, offsetBy: 5)
str[lower ... upper]
```
---
## <a name="StringEditing"></a>String Editing *<small><update 20.12.31><small>*
- 추가
```swift
// 추가의 경우 append, appending, insert 등이 사용
var str = "Hello"
str.append(", ") // append 는 원본 값을 수정
str

let s = str.appending("Swift") // appending은 새로운 메모리 생성
str
s

s.appending("!!")

"File size is ".appendingFormat("%.1f", 12.3456)

var str2 = "Hello Swift"

str2.insert(contentsOf: ", ", at: str.index(str.startIndex, offsetBy: 5))

if let sIndex = str2.firstIndex(of: "S") {
    str2.insert(contentsOf: "Awesome ", at: sIndex)
}

str2
str2.appending("!!")
```
- 수정
```swift
// 문자열 수정
var str = "Hello, Objective-C"

if let range = str.range(of: "Objective-C") {
    str.replaceSubrange(range, with: "Swift") // replace 의 경우 원본 값 수정
    
    str
}

if let range = str.range(of: "Hello") {
    let s = str.replacingCharacters(in: range, with: "Hi!") // replacing 의 경우 새로운 메모리 생성
    
    s
    str
}

var s = str.replacingOccurrences(of: "Swift", with: "Awesome Swift!")
s = str.replacingOccurrences(of: "swift", with: "Awesome Swift!") // 대소문자 구분함.
s = str.replacingOccurrences(of: "swift", with: "Awesome Swift!", options: [.caseInsensitive]) // 옵션으로 구분 안하게
```
- 삭제
```swift
// 문자열 삭제
var str = "Hello, Awesome Swift!!!"

let lastCharIndex = str.index(before: str.endIndex)
var removed = str.remove(at: lastCharIndex)

removed
str

removed = str.removeFirst()
removed
str

str.removeFirst(2)
str

str.removeLast()
str

str.removeLast(2)
str

if let removeRange = str.range(of: "Awesome") {
    str.removeSubrange(removeRange)
    str
}

str.removeAll() // 파라미터 없이 삭제하면 메모리 공간까지 삭제
str

str.removeAll(keepingCapacity: true) // 메모리 공간을 삭제하지 않음.

str = "Hello, Awesome Swift!!!"

var substr = str.dropLast() // drop 은 원본과 메모리 공유 ( 그래서 타입이 Substring )
str

substr = str.dropLast(3)

substr = str.drop { (ch) -> Bool in
    return ch != ","
}
substr
```
---
## <a name="ComparingStrings"></a>Comparing Strings *<small><update 20.01.02><small>*
- compare, prefix, suffix, 대소문자
```swift
let largeA = "Apple"
let smallA = "apple"
let b = "Banana"

largeA == smallA
largeA != smallA

largeA < smallA
largeA < b
smallA < b

largeA.compare(smallA) == .orderedSame
largeA.compare(smallA) == .orderedAscending
largeA.compare(smallA) == .orderedDescending

largeA.caseInsensitiveCompare(smallA) == .orderedSame

largeA.compare(smallA, options: [.caseInsensitive]) == .orderedSame

let str = "Hello, Swift Programming!"
let prefix = "Hello"
let suffix = "Programming!"

str.hasPrefix(prefix)
str.lowercased().hasPrefix(prefix.lowercased())
str.hasSuffix(suffix)
```
---
## <a name="StringSearching"></a>String Searching *<small><update 20.01.02><small>*
- contains, range, commonPrefix
```swift
let str = "Hello, Swift"

str.contains("Swift")
str.lowercased().contains("swfit")

str.range(of: "Swift")
str.range(of: "swift", options: [.caseInsensitive])

let str2 = "Hello, Programming"
let str3 = str2.lowercased()

var common = str.commonPrefix(with: str2) // 공통된 접두어

common = str.commonPrefix(with: str3)
str.commonPrefix(with: str3, options: [.caseInsensitive])
str3.commonPrefix(with: str, options: [.caseInsensitive])
```
---
## <a name="CharacterSet"></a>Character Set *<small><update 20.01.02><small>*

```swift
let a = CharacterSet.uppercaseLetters

let b = a.inverted

var str = "loRem Ipsum"
var charSet = CharacterSet.uppercaseLetters

if let range = str.rangeOfCharacter(from: charSet) {
    print(str.distance(from: str.startIndex, to: range.lowerBound))
}

if let range = str.rangeOfCharacter(from: charSet, options: [.backwards]) {
    print(str.distance(from: str.startIndex, to: range.lowerBound))
}

str = " A p p l e "
charSet = .whitespaces // 처음과 끝부분의 공백 제거

let trimmed = str.trimmingCharacters(in: charSet) // 문자열에서 해당 옵션에 해당하는 부분 삭제
print(trimmed)

var editTarget = CharacterSet.uppercaseLetters

editTarget.insert("#")
editTarget.insert(charactersIn: "~!@")

editTarget.remove("A")
editTarget.remove(charactersIn: "BCD")

let customCharSet = CharacterSet(charactersIn: "@.")
let email = "userId@example.com"

let components = email.components(separatedBy: customCharSet)
// print -> ["userId", "example", "com"]
```

---
## <a name="optional"></a>Optionals *<small><update 20.12.25><small>*
- 값을 가지지 않아도 되는 형식

```swift
let str: String = "Swift" // Non-Optional
let optionalStr: String? = nil // Optional \(String)

let a: Int? = nil

let b = a // b 의 type => Optional Int

// Forced Unwrapping

var num: Int? = nil

num = 123

print(num!)

num = nil

//print(num!) // fatal error

if num != nil {
    print(num!)
}

num = 123

let before = num // Optional Int
let after = num! // Int
```
- Forced Unwrapping은 매우 위험한 코드이니 특수한 상황이 아닌이상 최대한 사용하면 안된다. ( 값이 없는 경우 앱이 터져버림.)
---
## <a name="optionalbinding"></a>Optional Binding *<small><update 20.12.25><small>*
- 안전한 Unwrapping

```swift
var num: Int? = nil

if let num = num {
    print(num)
} else {
    print("empty")
}

var str: String? = "str"

guard let str = str else {
    fatalError()
}

let a: Int? = 12
let b: String? = "str"

if let num = a, let str = b, str.count < 5 { // 하나라도 바인딩이 실패하면 구문 동작 안함
    print(num, str)
} else {
    fatalError()
}
```
---
## <a name="nil-coalescingoperator"></a>Nil-Coalescing Operator *<small><update 20.12.25><small>*

- 간단한 이항 연산자로 nil 값 피하기

```swift
var msg = ""
var input: String? = "Swift"

if let inputName = input {
    msg = "Hello, " + inputName
} else {
    msg = "Hello, Stranger"
}

print(msg)

var str = "Hello, " + (input != nil ? input! : "Stranger")
print(str)

//input = nil
str = "Hello, " + (input ?? "Stranger")
print(str)

```
---
## <a name="OptionalChaining"></a>Optional Chaining *<small><update 20.12.25><small>*
- 옵셔널을 연달아서 호출하기
- 옵셔널 체이닝의 결과는 항상 옵셔널이다
- 옵셔널 표현식이 하나라도 포함되면 옵셔널로 리턴된다.
- 옵셔널 체이닝에 포함된 표현식 중에서 하나라도 nil을 리턴한다면 나중의 표현식을 평가하지 않고 바로 nil을 리턴한다

```swift
import UIKit

struct Contacts {
    var email: [String : String]?
    var address: String?
    
    func printAddress() {
        return print(address ?? "no address")
    }
}

struct Person {
    var name: String
    var contacts: Contacts?
    
    init(name: String, email: String) {
        self.name = name
        contacts = Contacts(email: ["Home" : email], address: "Seoul")
    }
    
    func getContacts() -> Contacts? {
        return contacts
    }
}

var p = Person(name: "James", email: "swfit@example.com")
let a = p.contacts?.address

var optionalP: Person? = Person(name: "James", email: "swfit@example.com")
let b = optionalP?.contacts?.address
b

optionalP = nil
let c = optionalP?.contacts?.address
c

p.getContacts()?.address

let f: (() -> Contacts?)? = p.getContacts

f?()?.address // 함수나 메소드가 리턴하는 옵셔널 값에 접근할때는 괄호 앞뒤에 ?

let d = p.getContacts()?.printAddress() // optional void

if let _ = p.getContacts()?.printAddress() {
    
}

let e = p.contacts?.email?["Home"]

p.contacts?.email?["Home"]?.count

p.contacts?.address = "Daegu"
p.contacts?.address

optionalP?.contacts?.address = "Daegu"
optionalP?.contacts?.address

---
// optional pattern

let a: Int? = 0

let b: Optional<Int> = 0

if a == nil {
    
}

if a == .none {
    
}

if a == 0 {
    
}

if a == .some(0) {
    
}

if let x = a {
    print(x)
}

if case .some(let x) = a {
    print(x)
}

if case let x? = a {
    print(x)
}

let list: [Int?] = [0, nil, nil, 3, nil, 5]

for item in list {
    guard let x = item else {
        continue
    }
    print(x)
}

for case let x? in list {
    print(x)
}

```
---
## <a name="VariadicParameters"></a>Variadic Parameters *<small><update 20.12.26><small>*
- 하나의 파라미터로 두개이상의 인자를 전달할 수 있다.
- 인자는 배열의 형태로 전달 된다.
- 가변 파라미터는 개별 함수마다 하나씩만 선언할 수 있음.
- 가변 파라미터는 기본값을 가질 수 없음.

```swift
func printSum(of nums: Int...) {
    var sum = 0
    for num in nums {
        sum += num
    }
    print(sum)
}

printSum(of: 1, 2, 3)
printSum(of: 1, 2, 3, 4, 5)
```
---
## <a name="In-OutParameters"></a>In-Out Parameters *<small><update 20.12.26><small>*
- copyIn, copyOut 방식으로 동작
- 함수 내부에서 값을 변경할 수 있음.
- 상수, 리터럴, 기본 값, 가변 파라미터 불가

```swift
var num1 = 12
var num2 = 34

func swapNumber(_ a: inout Int, with b: inout Int) {
    let tmp = a
    a = b
    b = tmp
}

num1
num2

swapNumber(&num1, with: &num2)

num1 // 34
num2 // 12
```
---
## <a name="ImplicitReturn"></a>Implicit Return *<small><update 20.12.27><small>*
- 함수안의 하나의 포현식만 있는 경우 return을 생략 해줘도 된다.
- closure, method, subscript 등에서도 동일하게 사용

```swift
func add(a: Int, b: Int) -> Int {
	// return a + b Explicit Return
    a + b	// Implicit Return
    // print(a + b) 표현식이 두개 이상인 경우 에러
}

add(a: 1, b: 2)
```
---
## <a name="SyntaxOptimization"></a>Syntax Optimization *<small><update 20.12.28><small>*
- Swift는 최대한 단순하게 작성하는 것을 선호.
- 문법 최적화 규칙
1. 파라미터와 리턴형을 생략할 수 있다.
2. 파라미터 이름은 인자 이름 축약 (Shorthand Arguments Names)로 대체 ( 이 경우 파라미터 이름과 in keyward는 생략 )
3. 단일 리턴문인 경우 Implicit Return ( return keyward 생략 )
4. 인라인 클로저에서 후위 클로저로 변경
5. 괄호 사이에 파라미터가 더이상 없다면 괄호를 생략

```swift
let products = [
   "MacBook Air", "MacBook Pro",
   "iMac", "iMac Pro", "Mac Pro", "Mac mini",
   "iPad Pro", "iPad", "iPad mini",
   "iPhone Xs", "iPhone Xr", "iPhone 8", "iPhone 7",
   "AirPods",
   "Apple Watch Series 4", "Apple Watch Nike+"
]

var proModels = products.filter { (name: String) -> Bool in
    return name.contains("pro")
}

products.filter {
    $0.contains("pro")
}

proModels.sort { (lhs: String, rhs: String) -> Bool in
    return lhs.caseInsensitiveCompare(rhs) == .orderedDescending
}

proModels.sort {
    $0.caseInsensitiveCompare($1) == .orderedDescending
}
```
---
## <a name="EscapingClosure"></a>Escaping Closure *<small><update 20.12.28><small>*
- 시작 시점과 종료 시점이 특정되지 않음.
- 함수가 종료 된 뒤에 closure를 실행하려면 escaping 해줘야 함.

```swift
// Non Escaping
func performNonEscaping(closure: () -> ()) {
    print("start")
    closure()
    print("end")
}

performNonEscaping {
    print("closure")
}

// Escaping
func performEscaping(closure: @escaping () -> ()) {
    print("start")
    
    var a = 12
    
    DispatchQueue.main.asyncAfter(deadline: .now() + 3) {
        closure()
        a = 13
        print(a)
    }
    
    print("end")
}

performEscaping {
    print("closure")
}
```
---
## <a name="Set"></a>Set *<small><update 21.01.12><small>*
- 검색속도가 중요한 경우에 배열대신 사용
- 배열과 달리 인덱스를 사용하지않고, 정렬되어있지 않음.
- 중복된 요소를 허용하지않음.
- Hashing 알고리즘을 사용하기 때문에 속도가 빠름

```swift
let set: Set<Int> = [1, 2, 2, 3, 3, 3]
set.count

set.contains(1)

var words = Set<String>()

var insertResult = words.insert("Swift")
insertResult.inserted // true
insertResult.memberAfterInsert

insertResult = words.insert("Swift")
insertResult.inserted // false
insertResult.memberAfterInsert

var updateResult = words.update(with: "Swift")
updateResult

updateResult = words.update(with: "Apple")
updateResult // nil -> nil로 리턴되면 insert, 값으로 리턴되면 update

var value = "Swift"
value.hashValue

updateResult = words.update(with: value)
updateResult

value = "Hello"

updateResult = words.update(with: value)
updateResult

struct SampleData: Hashable {
    var hashValue: Int = 123
    var data: String
    
    init(_ data: String) {
        self.data = data
    }
    
    static func == (lhs: SampleData, rhs: SampleData) -> Bool {
        return lhs.hashValue == rhs.hashValue
    }
}

var sampleSet = Set<SampleData>()
// 새로운 요소로 추가
var data = SampleData("Swift")
data.hashValue

var r = sampleSet.insert(data)
r.inserted
r.memberAfterInsert
sampleSet

data.data = "Hello"
data.hashValue

r = sampleSet.insert(data)
r.inserted
r.memberAfterInsert
sampleSet // data -> "Swift"

sampleSet.update(with: data)
sampleSet // data -> "Hello" 로 update

var a: Set = [1, 2, 3, 4, 5, 6, 7, 8, 9]
var b: Set = [1, 3, 5, 7, 9]
var c: Set = [2, 4, 6, 8, 10]
let d: Set = [1, 7, 5, 9, 3]

// 부분집합, 진부분집합
a.isSubset(of: a) // 부분집합
a.isStrictSubset(of: a) // 진부분집합

b.isSubset(of: a)
b.isStrictSubset(of: a)

// 상위집합
a.isSuperset(of: a)
a.isStrictSuperset(of: a)

a.isSuperset(of: b)
a.isStrictSuperset(of: b)

a.isSuperset(of: c)
a.isStrictSuperset(of: c)

// 교집합
a.isDisjoint(with: b) // false 일 경우에 교집합.
a.isDisjoint(with: c)
b.isDisjoint(with: c)

// 집합연산
a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
b = [1, 3, 5, 7, 9]
c = [2, 4, 6, 8, 10]

// 합집합
var result = b.union(c)

result = b.union(a)

b.formUnion(c) // 원본 변경

a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
b = [1, 3, 5, 7, 9]
c = [2, 4, 6, 8, 10]

// 교집합
result = a.intersection(b)
result = c.intersection(b)

a.formIntersection(b)

b.formIntersection(c)

a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
b = [1, 3, 5, 7, 9]
c = [2, 4, 6, 8, 10]

// 여집합
result = a.symmetricDifference(b)
result = c.symmetricDifference(b)

a.formSymmetricDifference(b)

a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
b = [1, 3, 5, 7, 9]
c = [2, 4, 6, 8, 10]

// 차집합
result = a.subtracting(b)
a.subtract(b) // 원본 변경

```

---
## <a name="IteratingCollections"></a>Iterating Collections *<small><update 21.01.13><small>*
- collection 열거
- for-in 과 forEach 의 차이점?
- for-in은 Swift가 제공하는 built-in 함수
- forEach는 collection에서 제공하는 기능이며 closure 방식으로 사용
- 그렇기 때문에, forEach는 break, continue 문 사용 불가
- forEach 에서 클로저 내 return을 사용하는 경우, 밖의 스코프에는 영향을 주지 않고 오직 현재 호출 클로저만 빠져나간다

```swift
// for-in
var arr = [1, 2, 3]
for num in arr {
    print(num)
}

var set: Set = [1, 2, 3]
for num in set.sorted() {
    print(num)
}

var dict = ["A" : 1, "B" : 2, "C" : 3]
for (key, value) in dict.sorted(by: < ) {
    print(key, value)
}

// forEach
arr.forEach { (num) in
    print(num)
}

set.forEach { (num) in
    print(num)
}

dict.forEach { (elem) in
    print(elem.key, elem.value)
}

func withForIn() {
    print(#function)
    for num in arr {
        print(num)
    }
    break
    return
}

func withForEach() {
    print(#function)
    arr.forEach { (num) in
        print(num)
    }
    
    return
}

withForIn()
withForEach()
```
---
## <a name="KeyValuePair"></a>KeyValuePair *<small><update 21.01.14><small>*
- Swift가 제공하는 경량 collection
- 딕셔너리에서 키값은 반드시 해셔블 프로토콜을 채용한 타입만 사용해야함, 동일한 키를 한번만 저장할 수 있음, 정렬 x
- 키형식의 제한이 없음. 동일한 키를 두번이상 저장하는것도 가능, 저장한 순서를 유지, 접근할 때 키로 접근하는 딕셔너리와 달리 인덱스로 접근.
- 순서가 중요한 경우에 딕셔너리대신 사용 ( 그냥 딕셔너리 쓰고 소트하면 되지 않낭? )

```swift
let words: KeyValuePairs = ["A" : "Apple", "B" : "Banana", "C": "City"]

words[0]
words[0].key
words[0].value

for elem in words {
    print(elem)
}

words.forEach { (elem) in
    print(elem)
}
```
----
## <a name="EnumerationType"></a>Enumeration Type *<small><update 21.01.21><small>*
- 열거형은 독립적인 자료형
- 열거형은 코드의 가독성과 안전성을 높여줌

```swift
enum Alignment {
    case left
    case right
    case center
}

Alignment.left

var textAlignment = Alignment.center

textAlignment = .right

switch textAlignment {
case .left:
    print("left")
case .right:
    print("left")
case .center:
    print("left")
}
```
---
## <a name="RawValues"></a>RawValues *<small><update 21.01.21><small>*
- enum에 원시값을 지정해줄 수 있음

```swift
enum Alignment: Int {
    case left
    case right = 100
    case center
}

Alignment.left.rawValue
Alignment.right.rawValue
Alignment.center.rawValue

// Alignment.left.rawValue = 10 // 원시값은 immutable

Alignment(rawValue: 0) // left
Alignment(rawValue: 200) // nil

enum Weekday: String {
    case sunday
    case monday = "MON"
    case tuesday
    case wednesday
}

Weekday.sunday.rawValue
Weekday.monday.rawValue


enum ControlChar: Character { // 원시값을 Character로 지정한 경우에는 반드시 원시값을 지정해줘야함.
    case tab = "\t"
    case newLine = "\n"
}

```
---
## <a name="AssociatedValues"></a>Associated Values *<small><update 21.01.21><small>*
- 연관 값을 사용하는 Enum case

```swift
enum VideoInterface {
    case dvi(width: Int, height: Int)
    case hdmi(Int, Int, Double, Bool)
    case displayPort(CGSize)
}

var input = VideoInterface.dvi(width: 2048, height: 1536)


switch input {
case .dvi(width: 2048, height: 1536):
    print("dvi 2048 x 1536")
case .dvi(width: 2048, _):
    print("dvi 2048 x Any")
case .dvi:
    print("dvi")
case .hdmi(let width, let height, let version, let audioEnabled):
    print("hdmi \(width) x \(height) version: \(version) audioEnabled: \(audioEnabled)")
case let .displayPort(size):
    print("dp \(size)")
}

input = .hdmi(1, 1, 1, true)
```
---
## <a name="EnumerationCasePattern"></a>Enumeration Case Pattern *<small><update 21.01.21><small>*

- 조건문과 반복문에서 연관 값을 매칭

```swift
enum Transportaion {
    case bus(number: Int)
    case taxi(company: String, number: String)
    case subway(lineNumber: Int, express: Bool)
}

var tpt = Transportaion.bus(number: 7)

switch tpt {
case .bus(let n):
    print(n)
case .taxi(let c, var n):
    print(c, n)
case let .subway(l, e):
    print(l, e)
}

tpt = Transportaion.subway(lineNumber: 2, express: false)

if case let .subway(2, express) = tpt { // 2호선 인지 확인하고 급행인지 아닌지 분기해주는 코드
    if express {
        
    } else {
        
    }
}

if case .subway(_, true) = tpt {
    print("express")
}

let list = [
    Transportaion.subway(lineNumber: 2, express: false),
    Transportaion.bus(number: 402),
    Transportaion.subway(lineNumber: 7, express: true),
    Transportaion.taxi(company: "SeoulTaxi", number: "1234")
]

for case let .subway(n, _) in list {
    print("1. subway \(n)")
}

for case let .subway(n, true) in list {
    print("2. subway \(n)")
}

for case let .subway(n, true) in list where n == 2 {
    print("3. subway \(n)")
}
```
---

## <a name="CaseIterable"></a>CaseIterable *<small><update 21.01.21><small>*

- 모든 case를 열거할 수 있게 도와주는 CaseIterable 프로토콜

```swift
enum Weekday: Int, CaseIterable { // CaseIterable protocol 을 채택할 경우, Allcases라는 collection 프로퍼티가 생성됨.
   case sunday
   case monday
   case tuesday
   case wednesday
   case thursday
   case friday
   case saturday
}

let rnd = Int.random(in: 0...Weekday.allCases.count)

Weekday(rawValue: rnd)

Weekday.allCases.randomElement()

for w in Weekday.allCases {
    print(w)
}
```

---
## <a name="Non-frozenEnumeration"></a>Non-frozen Enumeration *<small><update 21.01.21><small>*
- 새로운 case를 안전하게 처리
- default 앞에 @unknown 을 붙여주는 경우에 케이스 처리가 안된 부분이 있을 경우 경고 처리를 해줄 수 있음

```swift
enum ServiceType {
    case onlineCourse
    case offlineCamp
    case onlineCamp
    case seminar
}

let selectedType = ServiceType.onlineCourse

switch selectedType {
case .onlineCourse:
    print("send online course email")
case .offlineCamp:
    print("send offline camp email")
case .onlineCamp:
    print("send online camp email")
@unknown default:
    break
}
```
---
## <a name="structvsclass"></a>Structure 와 Class의 차이 *<small><update 21.01.21><small>*
1. Custom Data Type을 만들기 위해 필요한 Enumeration, Structure, Class
2. Structure, class 모두 멤버변수로 property, method, initializer, subscript, extension, protocol 가능
3. Structure는 Value Type 이며 Stack에 저장.
4. Class는 Reference Type 이며 Heap에 저장.
5. Structure는 Deinitializer, Inheritance, Reference Counting 이 불가하지만 Class 는 모두 가능
6. 값 형식인 Struct에서 속성을 바꾸는 메소드를 구현할 때에는 반드시 mutating으로 선언해야함.
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

---

## <a name="InitializerSyntax"></a>Initializer Syntax *<small><update 21.01.21><small>*

```swift
class Position {
    var x: Double
    var y: Double
    
    init() { // 생성자는 속성 초기화가 가장 중요한 규칙.
        x = 0.0
        y = 0.0
    }
    
    init(value: Double) {
        x = value
        y = value
    }
}

let a = Position() // 인스턴스 생성
a.x // 0으로 초기화
a.y

let b = Position(value: 100)
b.x
b.y
```

---

## <a name="LazyStoredProperty"></a>Lazy Stored Property *<small><update 21.01.21><small>*

- 지연 저장 속성
- lazy 변수는 처음 사용되기 전까지는 연산이 되지 않는다.
- struct와 class에서만 사용 가능
- Computed Property에는 lazy 키워드 사용 불가 ( 처음 사용될 때 메모리에 값을 올리고 그 이후 부터는 계속해서 메모리에 올라온 값을 사용. 사용할때 마다 값을 연산하여 사용하는 computed property에서는 사용할 수 없음. )
- lazy에 어떤 특별한 연산을 통해 값을 넣어주기 위해서는 코드 실행 블록인 closure를 사용


```swift
struct Image {
    init() {
        print("New Image")
    }
}

struct BlogPost {
    let title: String = "Title"
    let content: String = "Content"
    lazy var attachment: Image = Image()
    
    let date: Date = Date()
    
    lazy var formattedDate: String = {
        let f = DateFormatter()
        f.dateStyle = .long
        f.timeStyle = .medium
        return f.string(from: date)
    }()
}

var post = BlogPost()
post.attachment
post.date
```

---
## <a name="ComputedProperty"></a>Computed Property *<small><update 21.01.21><small>*

- 계산 속성
- 수학적 계산이 아니라 다른 속성을 기반으로 속성값이 결정된다는 의미
- Stored Property는 값을 저정할 메모리 공간을 가지고 있음
- Computed Property는 값을 지정할 메모리 공간을 가지고 있지 않음
- 다른 속성에 저장된 값을 읽어서 필요한 계산을 실행한 다음에 리턴하거나, 속성으로 전달된 값을 다른 속성에 저장.

```swift
class Person {
    var name: String
    var yearOfBirth: Int
    
    init(name: String, year: Int) {
        self.name = name
        self.yearOfBirth = year
    }
    
    var age: Int {
        get {
            let calender = Calendar.current
            let now = Date()
            let year = calender.component(.year, from: now)
            return year - yearOfBirth
        }
        set {
            let calender = Calendar.current
            let now = Date()
            let year = calender.component(.year, from: now)
            yearOfBirth = year - newValue
        }
    }
    
}

let p = Person(name: "Mino", year: 1996)
p.age

p.age = 50
p.yearOfBirth
```

---

## <a name="PropertyObserver"></a>Property Observer *<small><update 21.01.21><small>*

- 프로퍼티 값이 변경되기 직전, 직후를 감지
- 프로퍼티 옵저버를 사용하기 위해서는 프로퍼티의 값이 반드시 초기화 되어 있어야 함.

```swift
class Size {
    var width = 0.0 {
        willSet {
            print(width, "=>", newValue)
        }
        didSet {
            print(oldValue, "=>", width)
        }
    }
}

let s = Size()
s.width = 123
```

---

## <a name="InheritanceandOverriding"></a>Inheritance and Overriding *<small><update 21.01.22><small>*

- class에서 상속을 통해 Super Class로부터 멤버를 상속
- final class는 상속이 금지된 class이므로 상속 불가
- Super Class로부터 상속한 멤버를 재정의 -> Overriding
- Overriding이 가능한 대상은 methods, properties, subscripts, initializers
- Super Class를 기반으로 하는 방법과 아예 새롭게 재정의 하는 방법이 있음.

```swift
class Figure {
    var name = "UnKnown"
    
    init(name: String) {
        self.name = name
    }
    
    func draw() {
        print("draw \(name)")
    }
}

class Circle: Figure {
    var radius = 0.0
}

let c = Circle(name: "Circle")
c.radius
c.name
c.draw()

final class Rectangle: Figure { // final class는 상속이 금지된 class
    var widht = 0.0
    var height = 0.0
}

// class Square: Rectange { //error
//
//}

----
// Overriding

class Figure {
    var name = "Unknown"
    
    init(name: String) {
        self.name = name
    }
    
    func draw() {
        print("draw \(name)")
    }
}

class Circle: Figure {
    var radius = 0.0
    
    var diameter: Double {
        return radius * 2
    }
    
    //    override func draw() { // Super Class 를 무시하고 새롭게 구현
    //        print("Overriding \(name)")
    //    }
    
    override func draw() { // Super Class 를 기반으로 구현
        super.draw()
        print("Overriding \(name)")
    }
}

let c = Circle(name: "Circle")
c.draw()

class Oval: Circle {
    override var radius: Double {
        willSet {
            print(newValue)
        }
        didSet {
            print(oldValue)
        }
    }
    
    override var diameter: Double { // 읽기 전용 프로퍼티 상속은 읽기만 가능, 프로퍼티 옵저버도 불가
        get {
            return super.diameter
        }
        set {
            super.radius = newValue / 2
        }
    }
}


```

---

## <a name="Overloading"></a>Overloading *<small><update 21.01.22><small>*

- Overriding은 상속된 멤버를 현재 클래스에 적합하게 다시 구현할떄 사용
- Overloading은 하나의 형식에서 동일한 이름을 가진 다수의 멤버를 구현할때 사용
- 스위프트는 Overloading을 지원함. 그렇기 때문에 이름이 같아도 자료형이 다르면 다른것으로 인식
- 함수, 메소드, 서브스크립트, 생성자 -> Overloading을 지원
- Overloading Rule #1 - 함수 이름이 동일하면 파라미터 수로 식별
- Overloading Rule #2 - 함수 이름, 파라미터 수가 동일하면 파라미터 자료형으로 식별
- Overloading Rule #3 - 함수 이름, 파라미터가 동일하면 Argument Label로 식별
- Overloading Rule #4 - 함수 이름, 파라미터, Argument Label이 동일하면 리턴형으로 식별 // 리턴형으로 식별은 가급적이면 안하는게 좋음

```swift
func process(value: Int) {
    print("Int")
}

func process(value: String) {
    print("String")
}

func process(value: String, anotherValue: String) {
    
}

func process(_ value: String) {
    print("str")
}

func process(value: Double) -> Int {
    return Int(value)
}

func process(value: Double) -> String? {
    return String(value)
}

process(value: 0)
process(value: "")
process("str")

var results: Int = process(value: 1234)

struct Rectangle {
    func area() -> Double {
        return 0.0
    }
    
    static func area() -> Double {
        return 1
    }
}

let r = Rectangle()
r.area()
Rectangle.area()
```

---
## <a name="TypeCasting"></a>Type Casting *<small><update 21.01.22><small>*

- 타입캐스팅은 인스턴스의 타입을 확인하거나, 인스턴스의 타입을 슈퍼클래스 또는 서브클래스 타입처럼 다루기위해 사용

```swift
class Figure {
   let name: String
   
   init(name: String) {
      self.name = name
   }
   
   func draw() {
      print("draw \(name)")
   }
}

class Triangle: Figure {
   override func draw() {
      super.draw()
      print("🔺")
   }
}

class Rectangle: Figure {
   var width = 0.0
   var height = 0.0
   
   override func draw() {
      super.draw()
      print("⬛️ \(width) x \(height)")
   }
}

class Square: Rectangle {
   
}

class Circle: Figure {
   var radius = 0.0
   
   override func draw() {
      super.draw()
      print("🔴")
   }
}

// Type Check Operator
// type check는 Runtime에서 확인

let num = 123

num is Int
num is Double
num is String

let t = Triangle(name: "Triangle")
let r = Rectangle(name: "Rect")
let s = Square(name: "Square")
let c = Circle(name: "Circle")

r is Rectangle
r is Figure
r is Square

// Compile Time Cast
var upcasted: Figure = s
let nsstr = "str" as NSString
upcasted = s as Figure

// Runtime Cast
upcasted as? Square // Conditional Cast
upcasted as! Square // Forced Cast -> 느낌표는 최대한 사용 금지
upcasted as? Rectangle
upcasted as! Rectangle

upcasted as? Circle // nil
//upcasted as! Circle // crash

if let c = upcasted as? Circle {
    
}

let list = [t, r, s, c] // 가장 인접한 Super Class인 Figure Class 로 upcasting

for item in list {
    item.draw() // 다형성 Polymorphism -> 업캐스팅 되어있는 인스턴스를 통해서 메소드를 호출하더라도 실제 형식에서 오버라이딩한 메소드가 호출된다.
    
    if let c = item as? Circle {
        c.radius
    }
}
```

---

## <a name="Initializer"></a>Initializer *<small><update 21.01.22><small>*

```swift
class Position {
    var x = 0.0
    var y: Double // 기본값이 없을경우 init 해줘야함
    var z: Double? // 옵셔널은 기본값이 없을경우 기본으로 nil로 초기화
    
    init() {
        y = 0.0
    }
    
    // 평소에 init을 안해도 되는 부분은 Compiler에서 Default Initializer를 제공하기 때문.
}

let p = Position()

class SizeObj {
    var width = 0.0
    var height = 0.0
    
    init(width: Double, height: Double) {
        self.width = width
        self.height = height
    }
    
    convenience init(value: Double) {
        self.init(width: value, height: value) // 이런식으로 다른 initializer를 호출하는것은 Initializer Delegation
    }
}

struct SizeValue {
    var width = 0.0
    var height = 0.0
}

let s = SizeValue()
SizeValue(width: 1.2, height: 3.4) // Memberwise Initializer
// 구조체에서 직접 Initializer를 구현할경우 더이상 사용할 수 없음.
// 그래서 Default Initializer 처럼 sturct는 Memberwise Initializer를 제공함
```

---
## <a name="ClassInitializer"></a>Class Initializer *<small><update 21.01.25><small>*
- class에서 사용하는 Initializer는 지정 생성자와 간편 생성자로 나뉨. ( Designated Initializer, Convenience Initializer )
- class의 메인 Initializer는 Designated Initializer. ( 클래스가 가진 모든 속성을 초기화 )
- Convenience Initializer는 다양한 초기화 방법을 구현하기 위한 유틸리티 성격을 지님.

```swift
class Position {
    var x: Double
    var y: Double
    // Designated Initializer
    init(x: Double, y: Double) {
        self.x = x
        self.y = y
    }
    // Convenience Initializer
    convenience init(x: Double) {
        self.init(x: x, y: 0.0)
    }
}

class Figure {
    var name: String
    
    init(name: String) {
        self.name = name
    }
    
    func draw() {
        print("draw \(name)")
    }
    
    convenience init() {
        self.init(name: "UnKnown")
    }
}

// initailizer inheritance
class Rectangle: Figure {
    var width: Double = 0.0
    var height: Double = 0.0
    
    init(name: String, width: Double, height: Double) {
        self.width = width
        self.height = height
        super.init(name: name)
    }
    
    override init(name: String) {
        width = 0
        height = 0
        super.init(name: name)
    }
    
    convenience init() { // convenience는 오버라이딩이란 개념이 적용되지 않음.
        self.init(name: "UnKnown")
    }
}
```
---

## <a name="RequiredInitializer"></a>Required Initializer *<small><update 21.01.25><small>*

- 서브클래스에서 반드시 동일한 이니셜라이저를 구현 하도록 해주는 생성자.

```swift
class Figure {
    var name: String
    
    required init(name: String) {
        self.name = name
    }
    
    func draw() {
        print("draw \(name)")
    }
}

class Rectangle: Figure {
    var width = 0.0
    var height = 0.0
    
    init() {
        width = 0.0
        height = 0.0
        super.init(name: "unknown")
    }
    
    required init(name: String) {
        width = 0.0
        height = 0.0
        super.init(name: name)
        fatalError("init(name:) has not been implemented")
    }
    
}
```

---

## <a name="InitializerDelegation"></a>Initializer Delegation *<small><update 21.01.27><small>*

- Initializer Delegation은 초기화 코드에서 중복을 최대한 제거하고, 모든 속성을 효율적으로 초기화하기 위해서 사용.
- 값형식과 참조형식에서 서로 다른 규칙으로 구현
- Initializer Delegation Rules
1. designated 생성자는 반드시 슈퍼 클래스의 designated 생성자를 호출해야 한다.
2. convenience 생성자는 반드시 같은 클래스의 다른 생성자를 호출 해야한다.
3. Convenience 생성자를 호출 했을 때 최종적으로는 반드시 designated 생성자가 호출 되어야 한다.

```swift
struct Size {
    var width: Double
    var height: Double
    
    init(w: Double, h: Double) {
        width = w
        height = h
    }
    
    init(value: Double) { // Initializer Delegation 첫번째 이니셜라이저에게 위임, 유지보수가 쉬워짐.
        self.init(w: value, h: value)
    }
}

class Figure {
    let name: String
    
    // delegate across
    init(name: String) { // designated
        self.name = name
    }
    
    convenience init() {
        self.init(name: "unknown")
    }
}

class Rectangle: Figure {
    var width = 0.0
    var height = 0.0
    
    //Rule1(Delegate Up)
    init(n: String, w: Double, h: Double) {
        width = w
        height = h
        super.init(name: n)
    }
    
    convenience init(value: Double) {
        self.init(n: "rect", w: value, h: value)
    }
}

class Squre: Rectangle { //delegated up 불가
    convenience init(value: Double) {
        self.init(n: "squre", w: value, h: value)
    }
    
    convenience init() {
        self.init(value: 0.0)
    }
}

```

---

## <a name="Extension"></a>Extension *<small><update 21.01.27><small>*

- 이름 그대로 형식을 확장하는데 사용
- 확장 가능한 것 : Class / Structure / Enumeration / Protocol
- 멤버를 추가하는 것은 가능 하지만, 기존 멤버를 오버라이딩 하는 것은 불가능(상속을 통해 서브클래싱 해야됨)

#### Extension Syntax
```swift
struct Size {
    var width = 0.0
    var height = 0.0
}

extension Size {
    var area: Double {
        return width * height
    }
}
 
let s = Size()
s.width
s.height
s.area
 
extension Size: Equatable {
    //비교 연산
    public static func == (lhs: Size, rhs: Size) -> Bool {
        return lhs.width == rhs.width && lhs.height == rhs.height
    }
}
```

```swift
// Adding Properties

//Date 형식에 년도를 리턴하는 속성 추가
extension Date {
    var year: Int {
        let cal = Calendar.current
        return cal.component(.year, from: self)
    }
    var month: Int {
        let cal = Calendar.current
        return cal.component(.month, from: self)
    }
}
 
//let today = Date()
//today.year
//today.month

//Double 형식에 라디안/디그리 변환 속성 추가
extension Double {
    var radianValue: Double {
        return (Double.pi * self) / 180.0
    }
 
    var degreeValue: Double {
        return self * 180.0 / Double.pi
    }
}
 
let dv = 45.0
dv.radianValue
dv.radianValue.degreeValue

// Adding Methods

//Double 형식에 화씨/섭씨 온도 변환 메소드 추가
extension Double {
    func toFahrenheit() -> Double {
        return self * 9 / 5 + 32
    }
 
    func toCelsius() -> Double {
        return (self - 32) * 5 / 9
    }
 
    static func converToFahrenheit(from celsius: Double) ->
        Double {
            return celsius.toFahrenheit()
    }
 
    static func converToCelsius(from fahrenheit: Double) ->
        Double {
            return fahrenheit.toCelsius()
    }
}
 
let c = 30.0
c.toFahrenheit() //화씨 변환
 
Double.converToFahrenheit(from: 30.0)
 
//Date 형식에 문자열 포멧팅 메소드 추가
extension Date {
    func toString(format: String = "yyyyMMdd") ->
        String {
            let privateFormatter = DateFormatter()
            privateFormatter.dateFormat = format
            return privateFormatter.string(from: self)
    }
}
 
let today = Date()
today.toString()
 
today.toString(format: "MM/dd/yyyy")
 
//String 형식에 랜덤 문자열 생성 메소드 추가
//지정된 길이의 랜덤 문자열 생성을 스트링 형식에 추가
extension String {
    static func random(length: Int, characterIn chars:
        String =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJZ1234567890") -> String {
        var randomString = String()
        randomString.reserveCapacity(length) //지정 길이만큼의 리소스 확보
 
        for _ in 0 ..< length {
            guard let char = chars.randomElement() else {
                continue
            }
 
            randomString.append(char)
        }
 
        return randomString
    }
}
 
String.random(length: 5)

// Adding Initializer

//Date 형식에 년,월,일로 초기화 하는 생성자 추가
extension Date {
    init?(year: Int, month: Int, day: Int) {
        let cal = Calendar.current
        var comp = DateComponents()
        comp.year = year
        comp.month = month
        comp.day = day
 
        guard let date = cal.date(from: comp) else {
            return nil
        }
        self = date //셀프로 초기화
    }
}
 
Date(year: 2014, month: 4, day: 16)
 
 
//UIColor 클래스에 RGB 파라미터를 받는 생성자 추가
extension UIColor {
    convenience init(red: Int, green: Int, blue: Int) {
        self.init(red: CGFloat(red) / 255, green: CGFloat(green) / 255,
                  blue: CGFloat(blue) / 255, alpha: 1.0)
    }
}
 
UIColor(red: 0, green: 0, blue: 255)
 
struct Size2 {
    var width = 0.0
    var height = 0.0
 
}

extension Size2 {
    // extenstion 으로 초기화 해주면 기본 생성자와 함께 사용가능하다 
    init(value: Double) {
        width = value
        height = value
    }
}
Size2()
Size2(width: 12, height: 34)

// Adding Subscript

//String 형식에 정수 인덱스를 처리하는 서브스크립트 추가
extension String {
    subscript(idx: Int) -> String? {
        guard (0 ..< count).contains(idx) else {
            return nil
        }
 
        let target = index(startIndex, offsetBy: idx)
        return String(self[target])
    }
}
 
let str = "Swift"
str[1]
str[100]
 
//Date 형식에 컴포넌트를 리턴하는 서브스트립트 추가
extension Date {
    subscript(component: Calendar.Component) -> Int? {
        let cal = Calendar.current
        return cal.component(component, from: self)
    }
}
 
let today1 = Date()
today1[.year]
today1[.month]
today1[.day]

```

## <a name="ProtocolSyntax"></a>Protocol Syntax *<small><update 21.01.28><small>*

프로토콜(Protocol)
- 인터페이스
- 최소한으로 가져아 할 속성이나 메서드를 정의.
- 구현은 하지 않음. 정의만!
- 공통적으로 제공하는 멤버 목록.
- 구현해야하는 멤버가 선언되어있음.

```swift
// Defining Protocols
protocol Something {
    func doSomething()
}

// Adopting Protocols
struct Size: Something {
    func doSomething() {
        print(#function)
    }
    
}

// Class-Only Protocols
protocol SomethingObject: AnyObject, Something {
    
}

//struct Value: SomethingObject {
    //불가
//}

class Object: SomethingObject {
    func doSomething() {
        print(#function)
    }
    
}
```
---
## <a name="ProtocolRequirements"></a>Protocol Requirements *<small><update 21.01.28><small>*

```swift
// Property Requirements
// 프로토콜에서 속성은 무조건 var 키워드로!

protocol Figure {
    static var name: String { get set }
    var age: Int { get }
}

struct Rectangle: Figure {
    static var name: String = "Rect"
    var age: Int
}

class Circle: Figure {
    var age: Int = 0

    class var name: String {
        get {
            return "Circle"
        }
        set {

        }
    }
}

// Method Requirements
// Method Head 부분만 선언.

protocol Resettable {
    mutating func reset()
    static func reset()
}

class Size: Resettable {
    var width = 0.0
    var height = 0.0

    func reset() {
        width = 0.0
        height = 0.0
    }

    static func reset() {

    }
}

struct ValueSize: Resettable {
    var width = 0.0
    var height = 0.0

    mutating func reset() { // 값 형식의 인스턴스 메소드에서 속성값을 바꾸러면 mutatitng keyword 필요
        width = 0.0
        height = 0.0
    }

    static func reset() {

    }
}

// Initializer Requirements
// method와 마찬가지로 바디 생략

protocol Figure {
    var name: String { get }
    init(name: String)
}

struct Rectangle: Figure {
    var name: String // Memberwise 생성자로 요구사항 충족
}

class Circle: Figure {
    var name: String

    required init(name: String) {
        self.name = name
    }
}

final class Triangle: Figure { // final class 는 더이상 상속을 고려하지 않아도 되기 때문에 required init 불필요
    var name: String

    init(name: String) {
        self.name = name
    }
}

class Oval: Circle {
    var prop: Int

    init() {
        prop = 0
        super.init(name: "Oval")
    }

    required convenience init(name: String) {
        self.init()
    }
}

protocol Grayscale {
    init?(white: Double)
}

struct Color: Grayscale {
    init(white: Double) {

    }
}

// Subscript Requirements
protocol List {
    subscript(idx: Int) -> Int { get }
}

struct DataStore: List {
    subscript(idx: Int) -> Int {
        get { // get 요구사항만 충족시켜도 가능.
            return 0
        }
        set {

        }
    }
}

// Optional Requirements
// Optional 형식을 지칭하는것이 아닌, 단어 그대로 선택형 이라는 뜻
// class 에서만 채용이 가능함. -> AnyObject protocol이 자동으로 상속되기 떄문.

@objc protocol Drawable {
    @objc optional var strokeWidth: Double { get set }
    @objc optional var strokeColor: UIColor { get set }
    func draw()
    @objc optional func reset()
}

class Rectangle: Drawable {
    func draw() {
        
    }
}

let r: Drawable = Rectangle()
r.draw()
r.strokeWidth
r.strokeColor
r.reset?()
```

---

## <a name="Equatable"></a>Equatable *<small><update 21.01.28><small>*

- 값의 동일성을 비교할 수 있는 타입이라면, 반드시 구현해야하는 프로토콜
- int, double, string 같은 타입들은 이미 Equatable 채용 따라서 ==, != 연산자 사용이 가능
- 연관값이 선언되지 않은 열거형은 Equatable 구현이 자동으로 추가되고, 연관값을 가지고 있고 모든 연관값의 형식이 Equatable을 구현한 형식인 경우에도 자동으로 추가.

```swift
enum Gender {
    case female
    case male
}

Gender.female == Gender.male

struct MySize {
    let width: Double
    let height: Double
}

enum VideoInterface: Equatable {
    case dvi(width: Int, height: Int)
    case hdmi(width: Int, height: Int, version: Double, audioEnabled: Bool)
    case displayPort(size: CGSize)
}

let a = VideoInterface.hdmi(width: 2560, height: 1440, version: 2.0, audioEnabled: true)
let b = VideoInterface.displayPort(size: CGSize(width: 3840, height: 2160))

a == b

// Equatable for Structures
struct Person: Equatable {
    let name: String
    let age: Int
}

let a = Person(name: "Steve", age: 50)
let b = Person(name: "Paul", age: 27)

a == b

// Comparable for Classes
class Person { // class는 자동으로 추가해주지 않음.
    
    let name: String
    let age: Int
    
    init(name: String, age: Int) {
        self.name = name
        self.age = age
    }
}

extension Person: Equatable {
    static func == (lhs: Person, rhs: Person) -> Bool {
        return lhs.name == rhs.name && lhs.age == rhs.age
    }
}

let a = Person(name: "Steve", age: 50)
let b = Person(name: "Paul", age: 27)

a == b
a != b
```
