# TIL 220324RunLoop_UpdateCycle_ViewDrawingCycle_LayoutCycle_UIViewMethod

## 🔥학습 내용

### Run Loop
- RunLoop 객체는 소켓, 파일, 키보드 마우스 등의 입력 소스를 처리하는 이벤트 처리 루프
- 쓰레드가 일해야 할 때는 일하고, 일이 없으면 쉬도록 하는 목적으로 고안되었음.
- 이런 RunLoop 앞에 Main, Global 등등 이름을 붙여주는데 앞에 붙는 이름은 Thread 이름.

### Main Run Loop
![https://s3.ap-northeast-2.amazonaws.com/media.yagom-academy.kr/resources/usr/6191d103143f8b5487805fb4/20220325/623dafe50983dd14920a3f3e.png](https://s3.ap-northeast-2.amazonaws.com/media.yagom-academy.kr/resources/usr/6191d103143f8b5487805fb4/20220325/623dafe50983dd14920a3f3e.png)

- 앞에서 말했듯이, MainRunLoop는 Main Thread에서 실행되기 때문에 MainRunLoop라고 말함.
- Main Thread는 어플리케이션이 실행될 때 프레임워크 차원에서 UIAplication 객체가 자동으로 RunLoop를 설정하고 실행해줌. 따라서 개발자가 따로 RunLoop를 실행시켜주지 않아도 입력 소스를 처리하는 이벤트 처리를 main thread에서는 실행할 수 있던 것.
- 그렇기 때문에 UI와 관련된 모든 메서드들은 모두 main thread에서만 사용할 수 있었던 것! 와우! 그렇군
- 아무튼 MainRunLoop는 돌아가면서 터치 이벤트, 위치의 변화, 디바이스의 회전 등의 각종 이벤트들을 처리.
- 이러한 처리 과정은 각 이벤트들에 알맞는 핸들러를 찾아 그들에게 권한을 위임하며 진행 (ex) 버튼의 터치 이벤트를 @IBAction 메서드가 처리하는 것)
- 이렇게 발생한 이벤트들을 모두 처리하고 권한이 다시 MainRunLoop로 돌아오게 되고 이 시점을 Update Cycle이라고 함.

### Update Cycle
![https://s3.ap-northeast-2.amazonaws.com/media.yagom-academy.kr/resources/usr/6191d103143f8b5487805fb4/20220325/623db2a70983dd14920a3f96.png](https://s3.ap-northeast-2.amazonaws.com/media.yagom-academy.kr/resources/usr/6191d103143f8b5487805fb4/20220325/623db2a70983dd14920a3f96.png)

- 모든 이벤트 핸들러가 종료되고 MainRunLoop로 권한이 다시 돌아오는 시점
- MainRunLoop에서 이벤트가 처리되는 과정에서 크기나 위치가 이동하는 애니메이션과 같이 layout이나 position 값을 바꾸는 핸들러가 실행될 때도 있음.
- 이러한 변화의 경우 즉각적으로 반영되는 것이 아님
- 이러한 변화의 경우 update cycle에서 이런 view 들의 값을 바꿔주어 position이나 layout의 변화를 적용 시킴.
- 즉 position이나 layout값을 변경하는 코드와 실제로 변경되는 값이 반영되는 시점에는 시간차가 존재!
- 따라서 실제 이벤트가 처리되는 시점과 개발자가 원하는 업데이트 시점이 다를때 UIView 메서드들을 잘 사용하면 효과적으로 컨트롤할 수 있음.
- Update Cycle의 경우 Layout -> Display -> Constraint 순
- View들을 배치하고(layout), 보여주고(display), 제약해줌(constraint)
- Layout은 View의 크기, Screen에서 View의 위치를 뜻함
- Display는 Color, Text, Image, CGDrawing과 같이 size, position과 관련없는 property들을 뜻함
- Constaint의 경우 우리가 알고있는 Constraint를 뜻함

### View Drawing Cycle
- 뷰가 로드 되거나 변경이 있을 때 화면에 시각적으로 표현되어 그려지는 일종의 사이클
- 1. 뷰 로드 시 시스템이 UIView에게 draw 메서드를 통해 드로잉 요청
- 2. 뷰의 스냅샷을 캡쳐하여 UIView에게 전달
- 3. 뷰의 컨텐츠 변경 시 setNeedsDisplay() 메서드를 호출하여 시스템에 업데이트 요청
- 4. 업데이트 요청을 받은 뷰를 업데이트 -> 뷰의 스냅샷을 캡쳐하고 뿌려주는 프로세스를 반복하는 과정

### Layout Cycle
![https://s3.ap-northeast-2.amazonaws.com/media.yagom-academy.kr/resources/usr/6191d103143f8b5487805fb4/20220325/623db9a80983dd14920a3fb2.png](https://s3.ap-northeast-2.amazonaws.com/media.yagom-academy.kr/resources/usr/6191d103143f8b5487805fb4/20220325/623db9a80983dd14920a3fb2.png)

1. Constraint
- 오토레이아웃 제약 조건 갱신
- 뷰를 실제로 배치하는데에는 영향을 주지 않음
- 뷰 계층구조에서 하위뷰에서 상위뷰의 순서로 이루어짐

2. Layout
- 제약 조건을 바탕으로 레이아웃 갱신
- 구체적인 뷰의 Frame
- 뷰의 Center와 Bounds를 결정
- 뷰 계층구조에서 상위뷰에서 하위뷰의 순서로 이루어짐

3. Draw
	- 레이아웃 단계에서 구한 frame을 CoreGraphics를 사용하여 화면에 그려줌

### UIView Method
1. Constraint
- updateConstraints()
	- View가 동적으로 변화하는 Constraint를 적용할 수 있게끔 해주는 메서드
	- 직접 호출 금지! (얘는 만약에라도 직접 호출 해야될때는 override로 구현해도 괜찮긴 함)
	- 정적인 constraints들은 IB로 잡거나, view의 init 또는 viewDidLoad에 구현하는것이 좋음
- 자동적으로 update flag 켜지는 상황
	- view 계층에서 view 삭제
	- constraint 활성화 / 비활성화
	- constraints들의 우선순위나 상수값 변경
- 개발자가 직접 update flg 켜주기
	- setNeedsUpdateConstraint()
		- 다음 update cycle에 예약
	- updateConstraintsIfNeeded()
		- 바로 업데이트
	- invalidateInstrinsicContentSize()
		- 이 메서드를 통해 View의 Contents가 변경되면 intrinsicContentSize 프로퍼티를 통해 크기 계산을 다시 할 수 있음
		- custom view를 만들었을 경우에 해당 메서드와 프로퍼티를 구현해주어야함

2. Layout
- layoutSubviews()
	- View 및 Subview들의 크기를 다시 계산하거나 위치의 재지정을 다루는 메서드
	- 직접 호출 금지! (얘는 절!대! 직접 호출하면 안된다고 공식문서에 명시되어있음)
	- layoutSubviews가 view의 layout이 업데이트 되고 반드시 불리는 유일한 메서드이기 때문에 layout, sizing 관련 된 로직은 viewDidLayoutSubviews()에 두어야함.
	- 이번 플젝에서 사용한 scrollToBottom 메서드의 경우에도 여기에 두어도 정상적으로 동작.
- 자동적으로 update flag 켜지는 상황
	- 기기 회전
	- subview 추가
	- view 크기 변경
	- view의 constraint 변경
	- UIScrollView 스크롤
- 개발자가 직접 update flg 켜주기
	- setNeedsLayout()
		- 다음 update cycle에 예약
	- layoutIfNeeded()
		- 바로 업데이트
		- view가 refresh 되어야 되는 마크가 없으면 layoutSubview를 호출하지 않음
		- 이번 플젝에서도 stackView가 추가되고 난 후 layout 값이 업데이트 되어 y값 좌표가 계산이 되어야 되는데, layoutIfNeeded로 바로 업데이트 되지 않는 경우 추가되기 이전의 y좌표가 찍힘

3. Display
- draw(_:)
	- layoutSubViews처럼 동작하지만, 재귀적으로 하위 view들에게는 적용되지 않는다라는 차이점이 있음
	- 직접 호출 금지! (얘는 만약에라도 직접 호출 해야될때는 override로 구현해도 괜찮긴 함)
- 자동적으로 update flag 켜지는 상황
	- view의 bound 변경
- 개발자가 직접 update flg 켜주기
	- setNeedsDisplay()
		- 다음 update cycle에 예약

### UIView Method Flow
![https://s3.ap-northeast-2.amazonaws.com/media.yagom-academy.kr/resources/usr/6191d103143f8b5487805fb4/20220325/623dc68b0983dd14920a3fef.png](https://s3.ap-northeast-2.amazonaws.com/media.yagom-academy.kr/resources/usr/6191d103143f8b5487805fb4/20220325/623dc68b0983dd14920a3fef.png)

- UIView Method들이 iOS의 run loop와 작동하는 방식 Flow

---

> - 참고
>   - https://tech.gc.com/demystifying-ios-layout/
>   - https://babbab2.tistory.com/68
>   - https://developer.apple.com/documentation/uikit/uiview/1622482-layoutsubviews
>   - https://medium.com/mj-studio/번역-ios-레이아웃의-미스터리를-파헤치다-2cfa99e942f9
>   - https://baked-corn.tistory.com/105
>   - https://green1229.tistory.com/67
>   - https://developer.apple.com/library/archive/documentation/2DDrawing/Conceptual/DrawingPrintingiOS/GraphicsDrawingOverview/GraphicsDrawingOverview.html
>   - https://sueaty.tistory.com/162
