# TIL 220506UIResponder,ResponderChain

## 🔥학습 내용
## UIResponder
- 이벤트를 핸들링하고 이벤트에 반응할 수 있는 객체
- 이벤트가 일어나면 UIKit은 핸들링을 위해 해당 이벤트를 앱의 responder 객체들에게 보냄

## Responder Chain
- UIKit responder들은 이벤트 핸들링 말고도 처리되지 않은 이벤트를 앱의 다른 파트로 forwarding하는 일도 담당
- responder 객체들이 이벤트나 액션 메시지를 핸들링할 책임을 앱의 다른 객체들에게 전송할 수 있도록 해줌
- 이벤트나 액션 메세지들이 처리될 때 까지 계속 chain의 상위 객체들로 이동
- 마지막까지 처리되지 않는 경우, 앱이 해당 메시지를 버려버림

![A flow diagram: On the left, a sample app contains a label (UILabel), a text field for the user to input text (UITextField), and a button (UIButton) to  press after entering text in the field. On the right, the flow diagram shows how, after the user pressed the button, the event moves through the responder chain—from UIView, to UIViewController, to UIWindow, UIApplication, and finally to UIApplicationDelegate.](https://docs-assets.developer.apple.com/published/7c21d852b9/f17df5bc-d80b-4e17-81cf-4277b1e0f6e4.png)

## iOS 환경에서 사용자의 터치 이벤트를 알아채거나 제어할 수 있는 방법의 종류
- Gesture Recognizer
- UIResponder의 이벤트 처리 메서드
- UIView의 hitTest 메서드

## iOS 환경에서 사용자가 일으킬 수 있는 이벤트의 종류

* Touch events :  The view in which the touch occurred.
* Press events : The object that has focus.
* Shake-motion events : The object that you (or UIKit) designate.
* Remote-control events : The object that you (or UIKit) designate.
* Editing menu messages : The object that you (or UIKit) designate.

## 뷰 위에 텍스트 필드가 있고 텍스트 필드 위에 탭 제스쳐 인식기가 있는 상황에서 사용자가 텍스트 필드 위를 탭 했을 때 어떤어떤 객체가 어떤 메서드를 통해 반응하는지
- hitTest -> UIResponder -> Gesture 순서로 반응
```
hitTest(_:with:)
hitTest(_:with:)
🦜 MyTabGestureRecognizer touchesBegan
🐳 MyTextFieldWithTab touchesBegan
🦜 MyTabGestureRecognizer touchesEnded
MyTextFieldWithTabGesture 가 탭되었습니다
🐳 MyTextFieldWithTab touchesCancelled
```

## Responder Chain과 Gesture Recognizer는 이벤트 제어에서 상호간 상관관계일까요? 별개관계일까요? 그렇게 생각한 이유는 무엇인가요?
- 정답은 없음. 뭔가 애매한 관계.
- 하지만 Gesture Recognizer가 올려져있는 뷰의 경우 First Responder가 되지 못하는 걸 봤을 때 Responder Chain과 별개의 관계라고 봐야되지 않을까?
---
