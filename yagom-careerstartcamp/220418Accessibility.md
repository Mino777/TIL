# TIL 220418Accessibility

## 🔥학습 내용

## Accessibility
#### Vision
- VoiceOver 제공
- 색상 반전, Dynamic Type을 통한 더 큰 텍스트, 확대/축소 및 돋보기와 같은 디스플레이 조정을 지원

#### Hearing
- 자막, 시각 및 촉각 알림, Siri 모드 입력 등을 지원

#### Physical and Motor
- Switch Control
- Siri
- Assistive Touch를 통해 표준 제스처를 더 쉽게 수행하도록 지원

#### Literacy and Learning
- Speak Screen
- Typing Feedback
- Safari Reader

## Dynamic Type in Typography
- 유저가 선호하는 텍스트 크기에 대응하여 유연성을 제공하기 위해 애플이 만들어 놓은 Text Style
- 폰트를 설정할 때 System, Custom이 아닌 Text Styles를 통해 설정 가능
- Automatically Adjust Font 설정을 통해 앱이 실행되는 동안에 글씨 크기가 동적으로 바뀌는 것을 허용하는지에 대한 Bool 값
- Label의 경우 Storyboard의 Inspector에서 설정해줄 수 있지만 Button의 경우 코드로 직접 설정해주어야 함.
```swift
button.titleLabel?.adjustsFontForContentSizeCategory = true
```

## Accessibility Inspector
- Xcode -> Open Developer Tool -> Accessibility Inspector
- 해당 Inspector를 통해 어떤 부분이 현재 접근성 지원에 문제가 있는지, 글꼴 사이즈 테스트 등 접근성 지원에 필요한 프리뷰, 디버깅 지원 및 VoiceOver 프리뷰 제공

## Voice Over 지원
- 앱의 객체와 상호 작용하는 스크린 리더
- 각 요소에 모두 Accessibility Label을 설정
- UI Component 타입들은 자동으로 읽어주기 때문에 이름에 포함시키지 않는다.
	- Add Button x
	- Add o
- 어떠한 항목을 + 해주는 버튼 같은 경우엔 항목 까지 붙여준다
	- Add
	- Add Peanut Butter
- 반복된 단어는 지양한다.
- 음악 재생 어플리케이션에 있는 버튼의 경우 당연히 음악과 관련된 버튼일 것이기에 song과 같은 이름을 생략한다
	- Previous song, Play song, Next song
	- Previous, Play, Next
- 애니메이션에 사용자가 쉽게 알 수 있도록 의미가 있는 네이밍을 해준다
	- spinner
	- Loading...
- 너무 장황한 설명은 지양한다
	- Delete ~~
	- Delete

## Accessibility Attributes
- `isAccessibilityElement: Bool`
	- 기본으로 true이지만 아닌 Component도 있음
	- false로 설정되면 해당 element에 대해서 voice over trigger 되지 않음
- `accessibilityLabel: String?`
	- 접근성 문구
	- button의 경우 image가 있으면 해당 image 이름으로 label이 설정되기 때문에 따로 설정이 필요할 수 있음
- `accessibilityTraits: UIAccessibilityTraits`
	- button, header, image 등 해당 element의 카테고리 특성을 나타냄.
	- [accessibilityLabel + accessibilityTraits] 형식으로 보이스 오버 출력
- `accessibiltyValue: String?`
	- 값이 달라지는 경우에 사용
	- Ex) 슬라이더 50%로 설정되어있으면 "50%"로 설정
- `accessibiltyHint: String?`
	- 어떻게 사용하는게 좋은지에 대한 설명 부여
	- ex) 볼륨을 조절하려면 Swipe up 혹은 down 하세요
---

> - 참고
>   - [HIG](https://developer.apple.com/design/human-interface-guidelines/accessibility/overview/introduction/)
>   - [Accessibility Inspector (WWDC 2019)](https://developer.apple.com/videos/play/wwdc2019/257/)
>   - [Writing Great Accessibility Labels (WWDC 2019)](https://developer.apple.com/videos/play/wwdc2019/254/)
>   - [접근성 (Accessibility)](https://sujinnaljin.medium.com/swift-접근성-accessibility-9bdfe18d8846)
