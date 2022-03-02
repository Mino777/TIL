# TIL 220301viewcontrollerlifecycle

## 🔥학습 내용
### ViewController Life Cycle

![View Controller Life Cycle Image](http://i.stack.imgur.com/g19fw.png)

1. loadView
- VC에 대한 View를 생성하고 메모리에 올린 후에 viewDidLoad()를 호출
- 스토리보드나 nib 파일로 작업하는 경우 해당 메서드로 아무 작업도 수행할 필요가 없음.
- 가급적 사용하지 않음

2. viewDidLoad
- 화면이 처음 만들어질 때 한번만 실행되므로, 처음 한 번만 실행해야 하는 코드가 있을 경우 해당 메소드 내부에 작성

3. viewWillAppear
- VC가 화면에 나타날 때마다 호출

4. viewWillLayoutSubViews
- VC에 View가 하위 View를 배치하려고 한다는 것을 알리기 위해 호출
- 해당 메서드는 예를 들어 회전하거나 레이아웃이 필요한 것으로 표시될 때와 같이 프레임이 변경될 때마다 호출

5. viewDidLayoutSubviews
- VC에 View가 하위 View를 배치했음을 알리기 위해 호출
- View가 하위 View를 배치한 후 추가 변경이 필요한 경우 수행

6. viewDidAppear
- VC가 화면에 나타난 후에 호출
- 사용자 인터페이스에서 애니메이션을 시작하거나, 비디오 또는 사운드 재생을 시작하거나, 네트워크에서 데이터 수집을 시작할 수 있음

7. viewWillDisappear
- View가 사라지기 직전에 호출
- View가 삭제되려고 하는 것을 VC에 통지

8. viewDidDisappear
- VC가 View에서 제거된 후 호출
- 알림 수신, 다른 개체 속성 관찰, 장치 센서 모니터링, 더 이상 필요하지 않은 네트워크 호출을 중지할 수 있음

---

-   아래의 코드는 UIViewController의 view 관련 메서드 중 어느 메서드 내부에 위치하는 것이 좋을지 생각해봅시다
    -   사용자 환영 애니메이션을 보여주는 코드
	    - viewDidAppear
    -   뷰에 보여질 데이터를 불러올 코드
	    - viewDidLoad
    -   배경음악을 재생할 코드
	    - viewDidAppear
    -   배경음악을 중지할 코드
	    - viewDidDisappear
    -   노티피케이션 수신을 위한 옵저버 등록 코드
	    - viewDidLoad
    -   노티피케이션 수신 중단을 위한 구독 중단 코드
	    - viewDidDisappear
    -   스토리보드로 구성한 뷰 요소의 초기값을 설정하는 코드
	    - viewDidLoad

---

> - 참고
>   - [View Controller Lifecycle](https://guides.codepath.com/ios/View-Controller-Lifecycle)
