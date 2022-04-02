# TIL 220331AppLifeCycle

## 🔥학습 내용
### iOS 13에서 Scene Delegate로 이관된 App Delegate의 역할?
- UI Life Cycle과 관련된 모든 작업은 UISceneDelegate로 이관되었음.

### App Delegate와 Scene Delegate의 각각의 역할?
- AppDelegate
	 - 앱의 중앙 데이터 구조 초기화
	 - 앱의 Scene 구성
	 - low-memory 경고, 다운로드 완료 알림 등 앱 외부에서 발생한 알림에 대한 응답
	- 앱 자체를 대상으로 하며 앱의 scene, views 또는 viewControllers와 관련이 없는 이벤트에 응답
	 - Apple Push Notification 서비스 등 필요한 서비스 등록
	 - Session LifeCycle
		 - 새로운 Scene Session이 생성/제거될 때 application에게 알리는 역할

- SceneDelegate
	- UI LifeCycle

### Scene의 개념이 생긴 이유는 무엇이고, 언제 어디서 활용?
- 하나의 프로세스로 여러개의 UI(multiple windows)를 지원하기 위해서 생겨났다.
- Scene이 추가된다는 의미는 프로세스가 추가되는것이 아닌 프로세스가 관리하는 화면이 추가된다는 의미

### Scene-Based Life-Cycle
![An illustration showing the state transitions for a scene-based app. Scenes start in the unattached state and move to the foreground-active or background state. The foreground-inactive state acts as a transition state.](https://docs-assets.developer.apple.com/published/c834d5ac04/scene-state@2x.png)

### App-Based Life-Cycle
![An illustration showing the state transitions for an app without scenes. The app launches into the active or background state. An app transitions through the inactive state. ](https://docs-assets.developer.apple.com/published/64a2e0dab8/app-state@2x.png)

### Life Cycle에서 Unattached, Suspended, Not Running의 메모리와 프로세스의 관점에서의 차이?
- Unattached
	- Scene이 delegate에게 연결 노티피케이션을 받기 전 상태
	- 메모리에 올라가있고, 프로세스 실행 상태
 - Suspended
	- Scene이 background에 있고 아무것도 실행되지 않는 상태
	- 메모리에 올라가있지만, 프로세스는 대기중인 상태
- Not Running
	 - 메모리에도 없고 프로세스도 종료된 상태

### App Life Cycle 모식도의 점선과 실선의 차이?
- 실선: 사용자의 요청이나 시스템의 event에 의해 전환되는 경우
- 점선: 시스템에 의해 자동으로 전환
---

> - 참고
>   - [Managing Your App's Life Cycle](https://developer.apple.com/documentation/uikit/app_and_environment/managing_your_app_s_life_cycle)
>    - [App Life Cycle](https://velog.io/@wonhee010/App-Life-Cycle) 
