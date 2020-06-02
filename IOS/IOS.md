# *IOS.*

### 바로가기

- [AppProjectFile](#appprojectfile)
- [Info.plist](#infoplist)
- [Networking in IOS](#networking)
- [WebView](#WebView)

----
## <a name="appprojectfile"></a>AppProjectFile *<small><update 20.06.03><small>*


#### AppProject File ?
해당 디렉토리 최상단에 있는 파일. Project Editor의 역할을 함.

**project** <br>
`Project`는 Application을 빌드하기 위한 파일, 리소스, 정보를 담은 repository입니다. 처음 Xcode를 켜고 Single View Application을 생성하면 `Project`를 생성하게 됩니다. 이 때, 프로젝트의 디렉토리를 살펴보게 되면 `프로젝트명.xcodeproj`라는 파일이 생긴 것을 확인할 수 있습니다. 정확히 얘기하면 이는 파일이 아니라 이는 디렉토리입니다.

**Target** <br>
`Target`은 프로젝트를 통해 생성되는 Application을 지칭합니다. 이는 일반적으로 하나의 모듈을 의미합니다.

**Scheme** <br>
`Scheme`은 `Target`이 프로젝트를 Build, Profile, Test등을 할 때 일어날 일들을 정의할 수 있도록 해주는 항목입니다. 일반적으로 `Target`은 1개 이상의 `Scheme`을 가지고 있습니다. 이 `Scheme`에서는 프로젝트 빌드시 사용되는 환경변수나 인자를 넘겨줄 수 있습니다.

-----

#### General Pane for IOS
-   번들 식별자, 운영 체제 및 App Store에서 앱을 식별하는 문자열
-   앱을 게시 할 버전 번호
-   앱의 특정 빌드를 식별하는 빌드 번호
-   Apple 개발자 프로그램 개발 팀의 이름
-   앱이 실행되는 최초의 iOS 버전 인 배포 대상
-   앱을 빌드 할 기기
-   앱을 시작할 때로드 할 기본 사용자 인터페이스 파일
-   앱이 지원하는 사용자 인터페이스 방향 (세로, 거꾸로, 가로 왼쪽, 가로 오른쪽)

#### Signing & Capabilities Pane
- Signing의 경우 General Tap 에 있는 앱 번들 식별 관련 속성들과 유사.
- Team, Bundle Identifier, Provisioning Profile, Signing Certificate 등이 있음.
- Capabilities의 경우 iCloud, Game Center, In-App Purchase 및 Maps와 같은 다양한 Apple 기술을 앱에 추가할 때 사용하는 속성. ( 스토리보드에 UIObject 들을 인풋 하듯이 추가 해주면 됌. )
- Capabilities를 추가하면, 그 해당 기술에 대한 세세한 옵션을 설정할 수 있음.

#### Resource Tags Pane
- `On-demend resource` 는 필요할 때만 다운로드하는 앱 콘텐츠입니다. 사용자가 다운로드 한 앱 번들과 별도로 App Store에서 호스팅됩니다. `On-Demend Resource`를 사용하여 더 작은 앱, 더 빠른 다운로드 및 더 풍부한 앱 콘텐츠를 지원할 수 있습니다. 태그를 사용하여 대상에서 `On-Demend Resource`를 식별하고 관리합니다.

#### Info Pane
- Info pane에는 앱과 관련된 속성, 앱에서 만들거나 열 수있는 파일 형식 및 앱에서 제공하는 OS X의 서비스가 표시됩니다. 대부분의 사용자 정의 대상 속성은 Xcode 인터페이스의 다른 부분 (예 : 일반 창에서 설정 한 번들 식별자, 버전 및 빌드 번호)에서 수정됩니다.
- 문서 유형 설정은 앱에서 만들고 편집 할 수있는 문서 유형을 지정하고 iOS 또는 Mac OS에서 해당 문서 유형에 대해 표시되는 사용자 정의 아이콘을 제공합니다.
- 앱에서 내보내거나 가져올 수있는 모든 파일 형식에 대해 내보내고 가져온 UTI를 추가합니다. 일반적으로 앱에 고유 한 문서 유형과 달리 UTI는 일반 텍스트 또는와 같은 일반 형식을 지정합니다 `.png`. 예를 들어 UTI는 응용 프로그램간에 클립 보드로 복사 및 붙여 넣기를 지원합니다.
- URL 유형 설정을 사용하면 사용자 지정 프로토콜을 사용하여 다른 앱과 데이터를 교환하기위한 사용자 지정 스키마를 지정할 수 있습니다.

#### Build Settings, Phases, Rules pane
- 제품을 빌드하기위한 지침 (빌드 설정 및 빌드 단계의 형태)이 포함됩니다. `Target`은 프로젝트의 빌드 설정을 상속합니다. 대부분의 개발자는 이러한 설정을 거의 변경하지 않아도되지만 대상 수준에서 다른 설정을 지정하여 프로젝트의 빌드 설정을 무시할 수 있습니다. 프로젝트 편집기에서 대상을 선택하여 정보, 빌드 설정 또는 빌드 단계 분할 창에서 대상 설정을 수정하십시오.

------

#### 결론
xcode에 대해서 어느정도 훑어볼 수 있는 시간이 되었다. 중요하다고 생각하는 pane 은 general, capabilities 정도가 될 것 같다. 왜냐하면 다른 곳에 비해서 이쪽 속성들을 개발자가 많이 다루게 될 것 같다. build setting 에서 swift compiler 쪽을 잘 건드려주면 빌드 속도가 빨라진다고 한다. 나중에 한번 해봐야겠다.

> 출처 : [Apple xcode overview](https://developer.apple.com/library/archive/documentation/ToolsLanguages/Conceptual/Xcode_Overview/WorkingwithTargets.html#//apple_ref/doc/uid/TP40010215-CH32-SW1)

------

## <a name="infoplist"></a>Info.plist *<small><update 20.06.02><small>*

#### info.plist ?
사용자에게 더 나은 환경을 제공하기 위해 iOS 및 macOS는 각 앱 또는 번들에 특수 메타 데이터가 있어야합니다. 이 메타 데이터는 다양한 방식으로 사용됩니다. 일부는 사용자에게 표시되고, 일부는 시스템에서 앱과 앱이 지원하는 문서 유형을 식별하기 위해 내부적으로 사용되며, 일부는 시스템 프레임 워크에서 앱 실행을 용이하게하기 위해 사용됩니다. 응용 프로그램이 시스템에 메타 데이터를 제공하는 방법은 **information property list file**을 사용하는 것입니다.<br>
속성 목록은 시스템이 런타임에 액세스 할 수있는 임의의 데이터를 구성하는 방법입니다. information property list는 번들에 대한 구성 데이터를 포함하는 속성 목록의 전문 유형입니다. 파일의 키와 값은 번들에 적용하려는 다양한 동작 및 구성 옵션을 설명합니다. Xcode 프로젝트 템플릿은 일반적으로 초기 키 세트와 적절한 기본값으로 정보 등록 정보 목록 파일을 지정합니다. 파일을 편집하여 프로젝트에 따라 키와 값을 변경하거나 추가 할 수 있습니다.

------

#### Key 종류
- Core Foundation Key
- Launch Services Key
- Cocoa Key
- macOS Key
- IOS Key
- watchOS Key
- App Extension Key

------

#### 애플에서 추천해주는 Key
-   [CFBundleDevelopmentRegion](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CoreFoundationKeys.html#//apple_ref/doc/uid/20001431-130430) <br>
번들의 기본 언어 및 지역을 언어 ID로 지정합니다. 예를 들어 호주의 영어에는 언어 ID가 `en-AU`있습니다. 시스템은 사용자가 선호하는 언어의 자원을 찾을 수없는 경우 이 값을 사용합니다.
    
-   [CFBundleDisplayName](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CoreFoundationKeys.html#//apple_ref/doc/uid/20001431-110725)<br>
    사용자가 볼 수 있고 Siri에서 사용하는 번들의 표시 이름을 지정합니다.
-   [CFBundleExecutable](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CoreFoundationKeys.html#//apple_ref/doc/uid/20001431-101909)<br>
    번들의 기본 실행 파일 이름을 식별합니다. 앱의 경우 앱 실행 파일입니다. 로드 가능한 번들의 경우 번들에 의해 동적으로 로드되는 바이너리입니다. 프레임 워크의 경우 프레임 워크의 공유 라이브러리입니다.
-   [CFBundleIconFiles](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CoreFoundationKeys.html#//apple_ref/doc/uid/TP40009249-SW10)<br>
    번들의 아이콘 파일을 식별하는 문자열 배열이 포함되어 있습니다. (PNG 형식을 사용하여 항상 아이콘 파일을 작성하는 것이 좋습니다.) 아이콘 파일 이름을 지정할 때는 파일 이름 확장자를 생략하는 것이 가장 좋습니다. 파일 이름 확장자를 생략하면 시스템 `@2x`에서 표준 해상도 이미지 파일 이름을 사용하여 이미지 파일의 고해상도 버전을 자동으로 감지 할 수 있습니다
-   [CFBundleIdentifier](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CoreFoundationKeys.html#//apple_ref/doc/uid/20001431-102070)<br>
    번들을 고유하게 식별합니다. 시스템의 각 개별 앱 또는 번들에는 고유한 번들 ID가 있어야합니다. 시스템은 이 문자열을 사용하여 여러 가지 방법으로 앱을 식별합니다. 예를 들어, 환경 설정 시스템은이 문자열을 사용하여 지정된 환경 설정이 적용되는 앱을 식별합니다.
-   [CFBundleInfoDictionaryVersion](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CoreFoundationKeys.html#//apple_ref/doc/uid/20001431-102088)<br>
    현재 버전의 속성 목록 구조를 식별합니다. 이 키는 info.plist 파일 형식의 이후 버전을 지원하기 위해 존재합니다. Xcode는 번들을 빌드 할 때 이 키를 자동으로 생성하므로 수동으로 변경해서는 안됩니다.
-   [CFBundlePackageType](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CoreFoundationKeys.html#//apple_ref/doc/uid/20001431-111321)<br>
    번들 유형을 식별합니다.
-   [CFBundleVersion](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CoreFoundationKeys.html#//apple_ref/doc/uid/20001431-102364)<br>
    번들의 빌드 버전 번호를 지정하며 번들의 iteration (릴리스 또는 릴리스되지 않은)을 식별합니다.
-   [LSRequiresIPhoneOS](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/LaunchServicesKeys.html#//apple_ref/doc/uid/TP40009250-SW2)<br>
    앱이 iOS에서만 실행할 수 있는지 여부를 지정합니다.
-   [UIMainStoryboardFile](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/iPhoneOSKeys.html#//apple_ref/doc/uid/TP40009252-SW9)<br>
    앱의 기본 스토리 보드 파일 이름이 포함 된 문자열을 포함합니다 . 스토리보드 파일은 앱의 뷰 컨트롤러, 해당 뷰 컨트롤러와 해당 뷰 컨트롤러 사이의 연결 및 뷰 컨트롤러 사이의 연결을 포함하는 Interface Builder 아카이브입니다. 이 키가 있으면 시작시 기본 스토리 보드 파일이 자동으로 로드되고 앱의 창에 초기 뷰 컨트롤러가 설치됩니다.
-   [UIRequiredDeviceCapabilities](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/iPhoneOSKeys.html#//apple_ref/doc/uid/TP40009252-SW3)  (required)<br>
    iTunes와 App Store가 앱을 실행하는 데 필요한 장비 관련 기능을 알려줍니다. iTunes 및 모바일 App Store는이 목록을 사용하여 고객이 나열된 기능을 지원하지 않는 장비에 앱을 설치하지 못하게합니다.
-   [UIStatusBarStyle](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/iPhoneOSKeys.html#//apple_ref/doc/uid/TP40009252-SW14)<br>
    앱이 시작될 때 상태 표시 줄의 스타일을 지정합니다.
-   [UIInterfaceOrientation](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/iPhoneOSKeys.html#//apple_ref/doc/uid/TP40009252-SW13)<br>
    앱 사용자 인터페이스의 초기 방향을 지정합니다.
-   [UIRequiresPersistentWiFi](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/iPhoneOSKeys.html#//apple_ref/doc/uid/TP40009252-SW12)<br>
앱에 Wi-Fi 연결이 필요한지 여부를 지정합니다. iOS는 앱이 실행되는 동안 활성 Wi-Fi 연결을 열어 둡니다.
-   [NSHumanReadableCopyright](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CocoaKeys.html#//apple_ref/doc/uid/TP40009251-112854-TPXREF117)<br>
이 키는 번들에 대한 저작권 표시가있는 문자열을 포함합니다.
-   [NSMainNibFile](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CocoaKeys.html#//apple_ref/doc/uid/20001431-107221)<br>
    이 키에는 앱의 메인 nib 파일 이름이 포함 된 문자열이 포함 됩니다. nib 파일은 사용자 인터페이스에 대한 설명과 해당 인터페이스 객체 간의 연결을 포함하는 Interface Builder 아카이브입니다. 앱이 시작되면 기본 nip 파일이 자동으로 로드됩니다.
-   [NSPrincipalClass](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CocoaKeys.html#//apple_ref/doc/uid/TP40009251-SW11)<br>
이 키에는 번들의 기본 클래스 이름이 포함 된 문자열이 포함됩니다. 이 키는 플러그인 및 기타 동적으로로드 된 번들과 같이 동적으로로드 된 코드의 진입 점을 식별하는 데 사용됩니다. 번들의 기본 클래스는 일반적으로 번들의 다른 모든 클래스를 제어하고 해당 클래스와 번들 외부의 클래스 사이를 조정합니다.
------

#### 내가 생각했을 때 중요한 Key
- UIApplicationExitsOnSuspend <br>
백그라운드에서 앱을 실행하지 않고 종료할지 여부를 지정
- UIBackgroundModes <br>
앱이 백그라운드에서 계속 실행되도록 지정
- UILaunchStoryboards <br>
앱의 시작 이미지를 생성 할 여러 스토리 보드에 대한 정보를 지정
- NFCReaderUsageDescription
- NSAppleMusicUsageDescription
- NSBluetoothPeripheralUsageDescription
- NSCalendarsUsageDescription
- NSCameraUsageDescription
- NSContactsUsageDescription
- NSFaceIDUsageDescription
- NSHealthShareUsageDescription
- NSHealthUpdateUsageDescription
- NSHomeKitUsageDescription
- NSLocationAlwaysUsageDescription
- NSLocationUsageDescription
- NSLocationWhenInUseUsageDescription
- NSMicrophoneUsageDescription
- NSMotionUsageDescription
- NSPhotoLibraryAddUsageDescription
- NSPhotoLibraryUsageDescription
- NSRemindersUsageDescription
- NSVideoSubscriberAccountUsageDescription <br>
위 "NS"가 붙은 Key들은 모두 Privacy와 관련된 Key들임. 

-------

#### 결론
info.plist가 어떤 역할을 하는지와 IOS, Cocoa Key에 대해서 어느정도 알게 되었다. <br>
iOS 10 부터는 개인 데이터에 대한 액세스 권한이 있는 경우에 미리 선언을 해주지 않으면, 앱이 중단된다고 하니 privacy key는 꼭 잘 알아두어야겠다.

> 출처 : [Apple Documentation Archive 중 info.plist](https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Introduction/Introduction.html#//apple_ref/doc/uid/TP40009248-SW1)

--------

## <a name="networking"></a>Networking in IOS *<small><update 20.05.30><small>*

#### 네트워킹 실제 사용 사례

넷플릭스 - 컨텐츠 리스트, 사용자 정보, 동영상 스트리밍
애플뮤직 - 컨텐츠 리스트, 사용자 정보, 음악 스트리밍
페이스북 - 뉴스피드 리스트, 사용자 친구정보, 새로운 노티 정보
>이렇듯, 많은 앱에서 네트워킹은 굉장히 중요한 부분임.

---

#### IOS 안에서 Networking 하기 위해 배워야할 것
- Concurrency ( 동시성 )
- GCD & Operations, HTTP, URLSession

#### 어떻게 서버와 앱이 데이터를 주고 받나?
- HTTP라는 방법으로 REST API를 이용해서 JSON 데이터를 주고받음.

#### HTTP : HyperText Transfer Protocol
- 앱과 서버간의 데이터를 주고 받을 때 사용하는 통신규약, 규칙

#### HTTP 어떻게 작동하나?
1. 클라이언트가 서버에게 메시지를 요청
2. 서버는 요청에 대한 응답 ( JSON 형태로 )

#### HTTP Request Method
1. post		: Create
2. get			: Read
3. update	: Update
4. delete		: Delete

Request 시에 Request Headers & body 로 요청.
Response 시에 Response Headers & body 로 응답.

#### Content-Type
text/html
application/json
image/png
video/mpeg

#### HLS ( HTTP Live Streaming ) - 영상,음원 스트리밍
- 애플이 개발하여 2009년 출시한 HTTP 기반 적응 비트레이트 스트리밍 통신 프로토콜. 
- 이 프로토콜은 여러 미디어 플레이어, 웹 브라우저, 모바일 기기, 스트리밍 미디어 서버에서 지원. 
- 연간 비디오 산업 조사에 따르면 가장 대중적인 스트리밍 포맷으로 간주.

#### postman

#### Concurrency ( 동시성 ) - App이 한번에 여러개 수행
앱이 하는일
사용자 인터랙션 처리 ( 작업 1 )	 = 스레드 1 / 메인 스레드 에서 처리
네트워킹 ( 작업 2 )	= 스레드 2 / 다른 스레드
백그라운드에서 파일 다운로드 ( 작업 3 )	= 스레드 3 / 다른 스레드
파일 저장하고 읽기 ( 작업 4 )	=  스레드 4 / 다른 스레드 에서 처리
컴퓨터공학에선 이러한 작업을 스레드 라고 함.

#### GCD ( Grand Central Patch ) ( 스레드 위에 만들어진 녀석 )
어떤 해야할 일들을 만들어서 GCD에 넘기면 시스템에서 알아서 스레드 할당해서 안전하게 수행 시켜 준다.
어떤 해야할 일 = 코드 블럭
큐를 이용해서 태스크 관리 함.
GCD + DispatchQueue

#### DispatchQueue 의 타입
1. Main Queue
2. Global Queue
3. Custom Queue

#### Main Queue
메인 스레드에서 작동하는 큐
```swift
DispatchQueue.main.async {
	// Do Any UI Update Here
}
```

#### Global Queue
시스템에 의해 관리되는 QOS를 가지고 있음.?

QOS ( Quality of Services )
1. userInteractive
- 제일 급한 것
2. userInitiated
- 거의 바로 수행 되어야 하는 것
3. default
- 별로 안씀. 덜 중요한 작업에 사용.
4. utility
- 나름 무거운 작업에 사용 ex) networking, 파일 불러오기
5. background
- 사용자에게 당장 인식 될 필요가 없는 것. ex) 위치 업데이트, 뉴스, 영상 다운 

```swift
DispatchQueue.global(qos: .background).async {
	// Do Heavey Work Here
}
```

#### Custom Queue
직접 큐를 생성해서 관리.
```swift
let concurrentQueue = DispatchQueue(label: "concurrent", qos: .background, attributes: .concurrent)
let serialQueue = DispatchQueue(label: "serial", qos: .background)
```

#### 두개의 Queue 같이 쓰기
큰 이미지 파일을 다운받고나서 화면에 이미지를 뿌려줘야 할 때 ( 이렇게 작업과의 의존이 있을 때 두개의 queue 같이 씀 )
각 태스크 별로 사용되어야하는 큐가 다를 때

```swift
DispatchQueue.global(qos: .background).async {
	let image = downloadImageFromServer()
	DispatchQueue.main.async {
	self.imageView.image = image
	}
}
```
#### Sync & Async ( 동기, 비동기 )
무거운 작업은 대부분 Async 로 사용.
왜냐하면 무거운 작업을 동기로 사용하면 우선순위가 뒤바뀜.
최대한 Async로 진행하는 것이 좋음.

#### URLSession API
URLSessionConfiguration 을 이용해서 생성
URLSession은 여러개의 URLSessionTask를 만들 수 있고, URLSessionTask를 통하여 실제 서버와 통신
URLSessionDelegate을 활용하여 중간 과정을 확인 할 수 있음.
중간 과정 확인은 필수는 아님.

#### URLSessionConfiguration class
Default 기본 통신 할 때 사용
Ephemeral 캐쉬나 쿠키를 저장하지 않도록 하는 정책을 할 때. private 모드
Background 앱이 백그라운드에 있을 때 컨텐츠 다운로드할 때.

#### URLSessionTask
URLSessionDataTask 데이터를 메모리상에서 처리. 간단한 데이터를 받을 때 사용. 백그라운드 세션에 대한 지원이 안됨.
URLSessionUploadTask 파일 업로드할 때 Request Body 제공
URLSessionDownloadTask 파일을 다운받아 디스크에 사용할 때 사용

IOS에서 네트워킹을 할 땐 URLSession을 이용한다.

----

## <a name="WebView"></a>WebView *<small><update 20.04.28><small>*

### IOS app 에서 웹사이트를 보여주는 방법
1. 사파리앱을 열어줌
내 앱 "안에서" 열어주는게 아니라 사파리앱을 앱에서 열어주는 것.
```swift
@IBAction func openSafariAction(_ sender: Any) {

 guard let url = URL(string: "https://github.com/Mino777"), UIApplication.shared.canOpenURL(url) else { return }

 UIApplication.shared.open(url, options: [:], completionHandler: nil)

}
```

2. WKWebView사용하기
```swift
import WebKit

guard let url = URL(string:"https://github.com/Mino777") else {return}
let request = URLRequest(url: url)
webView?.load(request)
```
WKWebView는 앱 안에서 보여주지만, 스레드는 앱과 별도 돌아감.
그리고 WKWebView는 info.plist에 NSAppTransportSecurity Key를 추가해줘야 함.
```swift
<key>NSAppTransportSecurity</key>
    <dict>
        <key>NSAllowsArbitraryLoads</key>
        <true/>
    </dict>
```

3. SFSafariViewController로 열어줌
```swift
import SafariServices

@IBAction func oepnSFSafariViewControllerAction(_ sender: Any) {
    guard let url = URL(string: "https://github.com/Mino777") else { return }
    let safariViewController = SFSafariViewController(url: url)
    present(safariViewController, animated: true, completion: nil)
 }
```

각각의 장단점.
1번은 장점이 별로 없음. 거의 안쓰는 추세.
2번 WKWebView는 장점으론 웹 콘텐츠를 수정하거나 조작해야하는 경우 가장 높은 유연성을 제공하지만,여러 이슈가 있음.
이슈 및 특성 정보(https://zeddios.tistory.com/332)
3번 SFSafariViewController는 사파리의 기능들을 모두 사용할 수 있음 (쿠키, 보안 등등)

2번과 3번중 자신의 상황에 따라 골라서 사용하면 될 듯.
출처 https://zeddios.tistory.com/375

----





