# TIL 220216StructvsClass

## 🔥학습 내용
## Struct 와 Class 차이점

1.  Structure는 Value Type 이며 Stack에 저장.
2.  Class는 Reference Type 이며 Heap에 저장.
3.  Structure는 Deinitializer, Inheritance, Reference Counting 이 불가하지만 Class 는 모두 가능
4.  등등등..

Struct와 Class의 차이점은 구글링하면 무수히 많은 내용들이 나온다.

그리고 Struct와 Class를 선택하기 위해 구글링하고나면

나같은 초보 iOS개발자는 "공식문서에서 Value Type이라 빠르고 안전한 Struct를 우선적으로 생각하라고 하네! 오케이! 상속도 안쓰네! 오케이! Struct로 가즈아! 어? 근데 생각해보니까 왜 실제로 개발할때보면 Class를 위주로 사용을 하지? 띠용.." 이라는 의문으로 끝난다.

그래서 나만의 간단하고 합리적인 기준을 정하기로 했다.

## Struct를 선택하는 경우

1.  연관성있는 간단한 데이터 값들을 하나의 데이터타입으로 표현하고 싶은 경우
2.  Struct 자체로만 사용하는 경우

## Class를 선택하는 경우

1.  상속이 필요한 경우
2.  레퍼런스 타입의 인스턴스 프로퍼티가 필요한 경우

Class를 선택하는 경우중에 3번, 레퍼런스 타입의 인스턴스 프로퍼티가 정의되어야하는 경우는

struct안에 레퍼런스가 있는 경우, 레퍼런스 수에 비례하여 레퍼런스 카운팅 오버헤드를 지불하게되고 둘 이상의 레퍼런스가 있는 경우 class보다 레퍼런스 카운팅 오버헤드가 더 많이 유지되어 성능적으로 좋지 못하기 때문에 만약 타입안에 또 다른 타입의 인스턴스가 들어가는 경우 Class를 사용한다.

해당 내용의 경우 [WWDC 2016 Understanding Swift Performance](https://developer.apple.com/videos/play/wwdc2016/416/)에 나온다.

![레퍼런스 카운팅 오버헤드](https://user-images.githubusercontent.com/54234176/154288601-bede8850-d87f-4a88-9d85-5589359173a8.png)

레퍼런스 카운팅 오버헤드!!

---
