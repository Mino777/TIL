# TIL 220210cs,step1피드백,step2

## 🔥학습 내용
- CS
	- 하드웨어
		- 입출력장치, 기억장치, 연산장치, 제어장치
	소프트웨어
		- 시스템 소프트웨어
			- 운영체제, 로더, 장치드라이버, 컴파일러, 어셈블러, 링커, 유틸리티
		- 응용 소프트웨어
			- 운영체제상에서 실행되는 모든 프로그램
	- 하버드 구조
		- 메모리가 명령어, 데이터 메모리로 나누어져 있음
		- 속도가 빠르지만, 초기 구성에 비용이 많이 듦
	- 폰노이만 구조
		- 메모리가 하나만 있음
		- 구성이 쉬움
		- 병목 문제 발생
	- 최신 컴퓨터 아키텍처
		- 하버드 + 폰노이만
		- CPU 내부는 하버드 구조, 외부는 폰 노이만 구조
	- 32bit/64bit
		- CPU가 한번에 처리할 수 있는 0과 1의 개수
		- 32bit의 경우 4byte, 64bit의 경우 8byte
			- 따라서 현재 swift의 Int타입은 8byte
- Set의 특징
	-   정렬되지 않은 컬렉션
	-   중복 요소를 허용하지 않음
	-   해시를 통해 값을 저장하기 때문에 배열에 비해 검색 속도가 빠름
	-   구조체로 Stack에 저장됨.

- 매개변수 기본값
- 네이밍에서 줄임말, 관용적인 표현 금지!
- enumerated()
	- Sequence 타입에 enumerated() 메서드를 사용하면, (index, value) 튜플형식으로 구현된 Sequence로 리턴을 시켜주는 메서드
- side-effects가 없는 함수의 경우 네이밍을 명사형으로.
	- 주로 리턴값이 있고, 해당 리턴값을 상수에 할당하여 사용할 때
- side-effects가 있는 함수의 경우 네이밍을 동사형으로.
- map
	-   Returns an array containing the results of mapping the given closure over the sequence’s elements.
	-   각 sequence에 closure로 전달된 연산을 수행한 결과를 array로 반환합니다

- joined
	-   Returns the elements of this sequence of sequences, concatenated.
	-   배열의 원소들을 하나로 묶어줍니다
- 가독성을 위해 최대한 호출하는 함수를 먼저 배치하면 좋다.
	- 정답은 없지만, 컨벤션의 통일은 필수!
- Range
	-   A half-open interval from a lower bound up to, but not including, an upper bound
	-   Range는 lower bound를 포함하지만 upper bound를 포함하지 않습니다

- ClosedRange
	-   An interval from a lower bound up to, and including, an upper bound
	-   ClosedRange는 lower bound와 upper bound를 모두 포함합니다
```swift
let range : Range<Int> = 0..<0
print(range.isEmpty)
//true

let closedRange: ClosedRange<Int> = 0...0
print(closedRange.isEmpty)
//false
```

---

## 🔥쓰고싶은 말
- 활동학습 너무 재밌다! ( 두두, 에디, 티아나👍)
	- 티아나 교수님이 굉장히 인상적이었다. 나도 티아나처럼 설명 잘하는 사람 되야지!
- cs 공부는 활성 상태 보기 부터!
- 스위프트 용어들을 컴퓨터 구조와 엮어서 생각해보려고 노력하기
- 함수의 순서 배치 등 컨벤션을 좀 더 통일하니까 확실히 훨!씬! 보기 좋은 코드를 만들 수 있었다.
- 리턴값이 있는 함수를 상수에 할당하여 사용할 때 명사로 표현되어 할당되는 것이 좋다.
- 두두는 게임을 못한다😆

## 🔥오늘의 링크
### 네이밍
- https://www.swift.org/documentation/api-design-guidelines/#naming
- https://tv.naver.com/v/4980432/list/267189

### 클린코드 - 컨벤션
[https://medium.com/@ish453525/clean-code-%ED%98%95%EC%8B%9D-%EB%A7%9E%EC%B6%94%EA%B8%B0-b6ee86a45e99](https://medium.com/@ish453525/clean-code-%ED%98%95%EC%8B%9D-%EB%A7%9E%EC%B6%94%EA%B8%B0-b6ee86a45e99)
