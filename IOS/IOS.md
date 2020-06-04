
# *IOS.*

### 바로가기

- [AppProjectFile](#appprojectfile)
- [Info.plist](#infoplist)
- [StoryBoard OverView](#sboverview)
- [AutoLayout](#autolayout)
- [WebView](#WebView)
- [Networking in IOS](#networking)

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
## <a name="sboverview"></a>StoryBoard OverView*<small><update 20.06.04><small>*

#### viewController ?

viewController는 앱 내부 구조의 기초입니다. 모든 앱에는 하나 이상의 viewController가 있으며 대부분의 앱에는 여러 개의 viewController가 있습니다. 각 viewController는 앱 사용자 인터페이스의 일부와 해당 인터페이스와 기본 데이터 간의 상호 작용을 관리합니다. 또한 viewController는 사용자 인터페이스의 다른 부분간에 전환을 쉽게 할 수 있습니다.

#### viewController의 역할
1. view 관리 
viewController의 가장 중요한 역할은 view 계층을 관리하는 것입니다. <br>

![이미지 : ../Art/VCPG_ControllerHierarchy_fig_1-1_2x.png](https://developer.apple.com/library/archive/featuredarticles/ViewControllerPGforiPhoneOS/Art/VCPG_ControllerHierarchy_fig_1-1_2x.png)

2. 데이터 중재자
viewController는 관리하는 view와 앱 데이터 사이의 중재자 역할을합니다. <br> 

![이미지 : ../Art/VCPG_CustomSubclasses_fig_1-3_2x.png](https://developer.apple.com/library/archive/featuredarticles/ViewControllerPGforiPhoneOS/Art/VCPG_CustomSubclasses_fig_1-3_2x.png)

3. 사용자 상호작용 
뷰는 일반적으로 자체 터치 이벤트를 처리하고 관련 델리게이트 또는 대상 객체 (보통 뷰 컨트롤러) 의 메서드에 결과를보고합니다 . 따라서 뷰 컨트롤러의 대부분의 이벤트는 대리자 메서드 또는 작업 메서드를 사용하여 처리됩니다 .

4. 자원 관리
뷰 컨트롤러는 뷰와 만들어진 오브젝트들에 대한 모든 책임을집니다. 이 UIViewController클래스는 뷰 관리의 대부분을 자동으로 처리합니다. 예를 들어, UIKit은 더 이상 필요없는 뷰 관련 리소스를 자동으로 해제합니다. UIViewController 서브 클래스 에서는 명시적으로 작성하는 오브젝트를 관리해야합니다.

5. 적응성
뷰 컨트롤러는 뷰의 프리젠 테이션과 해당 프리젠 테이션을 기본 환경에 맞게 조정할 책임이 있습니다. 모든 iOS 앱은 iPad 및 여러 크기의 iPhone에서 실행될 수 있어야합니다. 각 장치에 서로 다른 뷰 컨트롤러와 뷰 계층을 제공하는 대신 변화하는 공간 요구 사항에 맞게 뷰를 조정하는 단일 뷰 컨트롤러를 사용하는 것이 더 간단합니다. <br>

![이미지 : ../Art/VCPG_SizeClassChanges_fig_1-4_2x.png](https://developer.apple.com/library/archive/featuredarticles/ViewControllerPGforiPhoneOS/Art/VCPG_SizeClassChanges_fig_1-4_2x.png)

------

#### Safe Area ?

iPhoneX 에 포함된 5.8인치 Super Retina 레이아웃이 반드시 전면 Super Retina 디스플레이를 채우는 동시에 콘텐츠와 컨트롤 부분이 올바르게 표시되어야 하며 간단히 탭할 수 있어야 합니다. SafeArea은 앱이 iPhone X의 새로운 규격에 맞게 제대로 동작하는지 확인하는 데 사용합니다.
SafeArea는 전체 인터페이스의 보이는 부분 내에 뷰를 배치하는 데 도움을 줍니다.
<br>
  
![캘린더 앱의 안전 영역](https://docs-assets.developer.apple.com/published/dbcc36bfb3/e5aca39a-f9a2-4ab8-9f45-08fd95fb845c.png)

-----

#### Segue ?

segues를 사용하여 앱 인터페이스의 흐름을 정의하십시오. SEGUE는 앱의 스토리 보드 파일에 두 개의 뷰 컨트롤러 사이의 전환을 정의합니다. segue의 시작점은 segue를 시작하는 버튼, 테이블 행 또는 제스처 인식기입니다. segue의 끝점은 표시하려는 뷰 컨트롤러입니다. segue는 항상 새로운 뷰 컨트롤러를 제공하지만 unwind segue 를 사용하여 뷰 컨트롤러를 닫을 수도 있습니다. <br>

![이미지 : ../Art/segue_defined_2x.png](https://developer.apple.com/library/archive/featuredarticles/ViewControllerPGforiPhoneOS/Art/segue_defined_2x.png)
**UIStoryboardSegue  클래스**

UIStoryboardSegue 클래스는 UIKit에서 사용할 수 있는 표준 화면전환을 위한 프로퍼티와 메서드를 포함하고 있습니다. 또 커스텀 전환을 정의하기 위해 서브클래스를 구현해서 사용할 수도 있습니다. 필요에 따라서 UIViewController의 `performSegue(withIdentifier:sender:)`메서드를 사용하여 세그 객체를 코드로 실행할 수 있습니다.

세그(Segue) 객체는 뷰 컨트롤러의 뷰 전환과 관련된 정보를 가지고 있습니다. 세그는 뷰 컨트롤러의 뷰를 다른 뷰 컨트롤러의 뷰로 전환할 때 뷰 컨트롤러의 `prepare(for:sender:)` 메서드를 사용하여 새로 보여지는 뷰 컨트롤러에 데이터를 전달할 수 있습니다.

**주요 프로퍼티**

-   `var source: UIViewController`  : 세그에 전환을 요청하는 뷰 컨트롤러입니다.
-   `var destination: UIViewController`  : 전환될 뷰 컨트롤러입니다.
-   `var identifier: String?`  : 세그 객체의 식별자입니다.

**주요 메서드**

-   `func perform()`  : 뷰 컨트롤러의 전환을 수행합니다.

----
#### UI Objects

### Label
라벨은 화면 인터페이스 요소를 설명하거나 짧은 메시지를 제공합니다. 사람들은 라벨을 편집 할 수 없지만 라벨의 내용을 복사 할 수 있습니다. 라벨은 많은 양의 정적 텍스트를 표시 할 수 있지만 짧게 유지하는 것이 가장 좋습니다.

### Button
버튼은 앱별 작업을 시작하고 배경을 사용자 지정할 수 있으며 제목이나 아이콘을 포함 할 수 있습니다. 이 시스템은 대부분의 사용 사례에 대해 사전 정의 된 여러 버튼 스타일을 제공합니다. 완전 맞춤형 버튼을 디자인 할 수도 있습니다.

### Segmented Control
세그먼트 컨트롤은 두 개 이상의 세그먼트로 구성된 선형 집합이며 각 세그먼트는 상호 배타적 버튼으로 작동합니다. 컨트롤 내에서 모든 세그먼트의 너비는 동일합니다. 버튼과 마찬가지로 세그먼트에는 텍스트 또는 이미지가 포함될 수 있습니다. 세그먼트 컨트롤은 종종 다른보기를 표시하는 데 사용됩니다. 예를 들어 지도에서 세그먼트 컨트롤을 사용하면 지도, 대중 교통 및 위성보기간에 전환 할 수 있습니다.<br>

![지도 설정 시트가있는지도의 스크린 샷  이 시트는 사람들이지도, 대중 교통 및 위성지도 유형간에 전환하는 데 사용하는 세그먼트 화 된 제어에 초점을 맞추기 위해 강조 표시됩니다.](https://developer.apple.com/design/human-interface-guidelines/ios/images/segmented-controls_2x.png)

### Text Field
텍스트 필드는 한 줄의 고정 높이 필드이며 모서리가 둥글고 종종 사용자가 키보드를 누를 때 자동으로 키보드를 표시합니다. 텍스트 필드를 사용하여 이메일 주소와 같은 소량의 정보를 요청하십시오. <br>

![](https://developer.apple.com/design/human-interface-guidelines/ios/images/Text_Fields_2x.png)
### Slider
슬라이더는 엄지라고하는 컨트롤이있는 가로 트랙으로 손가락으로 슬라이드하여 미디어 재생 중 화면 밝기 수준 또는 위치와 같은 최소값과 최대 값 사이를 이동할 수 있습니다. 슬라이더의 값이 변경되면 최소값과 썸 사이의 트랙 부분이 색상으로 채워집니다. 슬라이더는 최소값과 최대 값의 의미를 나타내는 왼쪽 및 오른쪽 아이콘을 선택적으로 표시 할 수 있습니다.<br>

![설정> 디스플레이 및 밝기의 밝기 슬라이더.](https://developer.apple.com/design/human-interface-guidelines/ios/images/sliders_2x.png)

### Switch
스위치는 상호 배타적인 두 상태 (켜기 및 끄기) 사이의 시각적 전환입니다.

### Activity Indicator View
Activity Indicator View는 작업이 처리되고 있음을 나타내는 spinning wheel입니다. 작업을 처리하는 데 알 수없는 시간이 걸리면 활동 표시기를 표시하여 앱이 정지되지 않았음을 사용자에게 알려야합니다. <br>
![ios-activity-indicator-storyboard.png](https://images.squarespace-cdn.com/content/v1/52428a0ae4b0c4a5c2a2cede/1580154337617-QIPV6KZXQQA0OBU61HLS/ke17ZwdGBToddI8pDm48kArtACSDOOB6A58kf8OPUbNZw-zPPgdn4jUwVcJE1ZvWQUxwkmyExglNqGp0IvTJZamWLI2zvYWH8K3-s_4yszcp2ryTI0HqTOaaUohrI8PIrjOV0mrYipr-875fYO719OT2dqlgcDTq9GmcSpEvuRo/ios-activity-indicator-storyboard.png?format=2500w)
### Progress View
Progress View는 웹 서비스에서 사용자에게 응답을 다운로드 / 업로드 / 대기하는 등 장기 실행 활동의 진행률을 표시하는 데 사용됩니다. 이것은 부재시 응용 프로그램이 응답하지 않는다는 인상을 줄 수있는 필수 UI 요소입니다.<br>
![iOS progressview 메인 스토리 보드](https://cdn.journaldev.com/wp-content/uploads/2018/07/ios-progressview-main-storyboard.png)
### Page Control
페이지 컨트롤은 플랫 페이지 목록에서 현재 페이지의 위치를 ​​보여줍니다. 사용 가능한 페이지를 연 순서대로 나타내는 일련의 작은 표시기 점으로 나타납니다. 실선은 현재 페이지를 나타냅니다. 시각적으로 이 점들은 항상 같은 거리에 있으며 화면에 너무 많은 것이 나타나면 잘립니다. 사용자는 페이지 컨트롤의 앞 또는 뒤 가장자리를 눌러 다음 또는 이전 페이지를 방문 할 수 있지만 특정 점을 탭하여 특정 페이지로 이동할 수는 없습니다. 탐색은 항상 페이지를 한쪽으로 스와이프하여 항상 순차적으로 발생합니다.<br>

![](https://developer.apple.com/design/human-interface-guidelines/ios/images/Page_Controls_2x.png)
### Stepper
스테퍼는 증분 값을 늘리거나 줄이는 데 사용되는 2 분할 컨트롤입니다. 기본적으로 스테퍼의 한 세그먼트에는 더하기 기호가 표시되고 다른 세그먼트에는 빼기 기호가 표시됩니다. 원하는 경우 이 기호를 사용자 정의 이미지로 바꿀 수 있습니다.<br>

![](https://developer.apple.com/design/human-interface-guidelines/ios/images/Steppers_2x.png)
### Horizontal Stack View , Vertical Stack View ( 따로 또 정리하기 )
Stack View는 사용자 인터페이스를 빠르고 쉽게 디자인 할 수있는 강력한 도구입니다. 이들의 속성을 통해 배열 된 뷰를 배치하는 방법을 고도로 제어 할 수 있습니다. 추가 사용자 지정 제약 조건으로 이러한 설정을 보강 할 수 있습니다. 그러나 이것은 레이아웃의 복잡성을 증가시킵니다.<br>
![이미지 : ../Art/Simple_Stack_View_Screenshot_2x.png](https://developer.apple.com/library/archive/documentation/UserExperience/Conceptual/AutolayoutPG/Art/Simple_Stack_View_Screenshot_2x.png)
![이미지 : ../Art/simple_stack_2x.png](https://developer.apple.com/library/archive/documentation/UserExperience/Conceptual/AutolayoutPG/Art/simple_stack_2x.png)
중첩 Stack Views
  
![image: ../Art/Nested_Stack_Views_Screenshot_2x.png](https://developer.apple.com/library/archive/documentation/UserExperience/Conceptual/AutolayoutPG/Art/Nested_Stack_Views_Screenshot_2x.png)
![image: ../Art/nested_stack_views_2x.png](https://developer.apple.com/library/archive/documentation/UserExperience/Conceptual/AutolayoutPG/Art/nested_stack_views_2x.png)


### Table View ( 열 ) ( 따로 또 정리하기 )
테이블은 데이터를 섹션 또는 그룹으로 나눌 수있는 스크롤되는 단일 열 행 목록으로 표시합니다. 표를 사용하여 대량 또는 소량의 정보를 목록 형식으로 깨끗하고 효율적으로 표시하십시오. 일반적으로 테이블은 텍스트 기반 컨텐츠에 이상적이며 종종 관련 컨텐츠가 반대쪽에 표시된 분할보기의 한쪽에서 탐색 수단으로 나타납니다. <br>
테이블뷰는 iOS 애플리케이션에서 많이 활용하는 사용자 인터페이스입니다. 테이블뷰는 리스트 형태를 지니고 있으며 스크롤이 가능해 많은 정보를 보여 줄 수 있습니다.<br>
![Mail 앱의 메일 함 화면의 일부 스크린 샷. 일반 테이블을 사용하여 여러 항목을 나열합니다.](https://developer.apple.com/design/human-interface-guidelines/ios/images/tables-plain_2x.png)
![지도로 표시되는 항목과 별도로 피하기 위해 그룹화 된 표를 사용하여 도로 유형을 나열하는지도 앱의 운전 및 탐색 설정의 일부 스크린 샷입니다.](https://developer.apple.com/design/human-interface-guidelines/ios/images/tables-grouped_2x.png)
![iPad의 사운드 설정 스크린 샷.  왼쪽보기는 소리가 선택된 최상위 설정의 일반 표입니다.  오른쪽에는 삽입 된 그룹화 된 테이블 스타일을 사용하여 설정을 3 개의 그룹으로 구분하는 사운드 설정 세부 사항보기가 있습니다.](https://developer.apple.com/design/human-interface-guidelines/ios/images/tables-inset-grouped-landscape_2x.png)
### Table View Cell ( 따로 또 정리하기 )
테이블뷰 셀(TableView Cell)은 테이블뷰를 이루는 개별적인 행(row)으로, `UITableViewCell` 클래스를 상속받습니다. `UITableViewCell` 클래스에 정의된 표준 스타일을 활용해 문자열 혹은 이미지를 제공하는 셀을 생성할 수 있으며, 커스텀 서브뷰를 올려 다양한 시각적 모습을 나타낼 수 있습니다. <br>
Table View Cell은 하나의 테이블 행의 내용을 관리하는 특수 유형의 view입니다. 주로 셀을 사용하여 앱의 사용자 정의 컨텐츠를 구성 및 표시하지만 UITableViewCell은 다음과 같은 테이블 관련 동작을 지원하기위한 특정 사용자 정의를 제공합니다.
-   셀에 선택 또는 강조 색상을 적용합니다.
-   세부 사항 또는 공개 제어와 같은 표준 액세서리보기 추가
-   셀을 편집 가능한 상태로 만들기
-   셀 내용을 들여 쓰기하여 테이블에 시각적 계층을 만듭니다.<br>
![셀 영역 자체 및 액세서리보기 및 편집 컨트롤이 표시된 그림.  액세서리보기 또는 편집 컨트롤을 수용하기 위해 필요에 따라 셀의 내용 영역이 축소됩니다.](https://docs-assets.developer.apple.com/published/2128ef91ee/a27538d0-bc9a-4972-aa83-8616889d7959.png)

모든 테이블보기에는 컨텐츠를 표시하기 위해 하나 이상의 셀 유형이 있어야하며, 테이블에는 다른 유형의 컨텐츠를 표시하기 위해 여러 셀 유형이있을 수 있습니다. 테이블의 데이터 소스 개체는 화면에 표시되기 직전에 셀 생성 및 구성을 처리합니다.

### Configuring Your Cell's Content
테이블에는 기본적으로 하나의 셀 유형이 있지만 테이블의 프로토 타입 셀 속성에서 값을 변경하여 추가 할 수 있습니다. 셀 내용을 구성하는 것 외에도 다음 속성을 구성해야합니다.
-   identifier. 이 식별자 (재사용 식별자라고도 함)를 사용하여 셀을 만듭니다.
-   style. 표준 유형 중 하나를 선택하거나 사용자 정의 셀을 정의하십시오.
-   class. 사용자 정의 동작 으로 서브 클래스를 지정 하십시오.<br>
![테이블 뷰 셀의 표준 레이아웃](https://docs-assets.developer.apple.com/published/06ba0eba91/63b0c95b-bf2f-4798-9cca-8a5e77631679.png)
### Image View
Image View 투명하거나 불투명 한 배경 위에 단일 이미지 또는 애니메이션 이미지 시퀀스를 표시합니다. 이미지 뷰 내에서 이미지는 신축, 스케일, 크기에 맞게 조정되거나 특정 위치에 고정 될 수 있습니다.
### Collection View ( 행 ) ( 따로 또 정리하기 )
컬렉션은 사진 세트와 같이 순서가 정해진 콘텐츠 세트를 관리하며, 사용자 정의가 가능하고 시각적인 레이아웃으로 제공한다. 컬렉션은 선형 형식을 엄격하게 적용하지 않기 때문에 크기가 다양한 항목을 표시하는 데 특히 적합합니다. 일반적으로 컬렉션은 이미지 기반 컨텐츠를 보여주는 데 이상적입니다. 배경과 다른 장식적 뷰는 sub set 아이템을 시각적으로 구별하기 위해 선택적으로 구현될 수 있습니다. <br>
컬렉션뷰는 유연하고 변경 가능한 레이아웃을 사용하여 데이터 아이템의 정렬된 세트를 표시하는 수단입니다. 컬렉션뷰의 가장 일반적인 용도는 데이터 아이템을 그리드와 같은 형태로 표현합니다. 더불어 다양한 방법으로 컬렉션뷰의 레이아웃을 사용자 정의할 수 있습니다.<br>

![](https://developer.apple.com/design/human-interface-guidelines/ios/images/Collections_2x.png)
### Collection View Cell ( 따로 또 정리하기 )
Collection View에서 하나의 셀을 나타내는 단일 view. 레이블 및 이미지 view와 같은 하위 view를 사용하여 모양을 제공. <br>
컬렉션뷰의 셀은 냉장고 속에 있는 반찬통으로 생각할 수 있습니다. 컬렉션뷰라는 냉장고가 있고, 냉장고 안에는 실제 반찬(콘텐츠)을 담고 있는 컬렉션뷰 셀이라는 반찬통이 있다고 생각할 수 있습니다. 
-   컬렉션뷰 셀은 데이터 아이템을 화면에 표시합니다.
-   하나의 셀은 하나의 데이터 아이템을 화면에 표시합니다.
-   컬렉션뷰 셀은 두 개의 배경을 표시하는 뷰와 하나의 콘텐츠를 표시하는 뷰로 구성되어 있습니다. 두 개의 배경뷰는 셀이 선택되었을 때 사용자에게 시각적인 표현을 제공하기 위해 사용됩니다.
-   셀의 레이아웃은 컬렉션뷰의 레이아웃 객체에 의해 관리됩니다.
-   컬렉션뷰 셀은 뷰의 재사용 메커니즘을 지원합니다.
-   일반적으로 컬렉션뷰 셀 클래스의 인스턴스는 직접 생성하지 않습니다. 대신 특정 셀의 하위 클래스를 컬렉션뷰 객체에 등록한 후, 컬렉션뷰 셀 클래스의 새로운 인스턴스가 필요할 때, 컬렉션의 `dequeueReusableCell(withReuseIdentifier:for:)` 메서드를 호출합니다.
    -   스토리보드를 사용하여 셀을 구성하면 컬렉션뷰에 따로 셀 클래스를 등록할 필요는 없습니다.<br>

[UICollectionViewCell](https://developer.apple.com/documentation/uikit/uicollectionviewcell)
### Collection Reusable View
 section header or footer 같은 컬렉션 뷰에서 재사용 가능한 뷰의 속성 및 동작을 정의.
 collectionView가 가시 범위 밖으로 스크롤 될 때 삭제하지 않고 재사용 큐에 배치
### Text View
Text View는 여러 줄의 스타일이 적용된 텍스트 내용을 표시합니다. Text View는 모든 높이가 될 수 있으며 내용이 view 외부로 확장 될 때 스크롤이 가능합니다. 기본적으로 Text View 내의 내용은 왼쪽 정렬되며 시스템 글꼴은 검은 색으로 사용됩니다. Text View를 편집 할 수 있는 경우 view 내부를 누르면 키보드가 나타납니다.<br>
![](https://developer.apple.com/design/human-interface-guidelines/ios/images/Text_Views_2x.png)
### Scroll View
Scroll View를 사용하면 문서의 텍스트 또는 이미지 모음과 같이 가시 영역보다 큰 내용을 탐색 할 수 있습니다. 사람들이 스와이프, 플릭, 드래그, 탭 및 핀치 할 때 Scroll View가 제스처를 따라 가면서 자연스러운 느낌으로 콘텐츠를 표시하거나 확대 / 축소합니다. Scroll View 자체는 모양이 없지만 사람들이 상호 작용할 때 일시적인 스크롤 표시기를 표시합니다. Scroll View는 페이징 모드에서 작동하도록 구성 할 수도 있습니다. 여기서 스크롤하면 현재 페이지를 이동하지 않고 완전히 새로운 내용의 페이지가 표시됩니다.<br>

![](https://developer.apple.com/design/human-interface-guidelines/ios/images/Scroll_View_2x.png)
### Date Picker
특정 날짜, 시간 또는 둘 다를 선택하기위한 효율적인 인터페이스입니다. 카운트 다운 타이머를 표시하기위한 인터페이스도 제공합니다.<br>
![](https://docs-assets.developer.apple.com/published/9b72935ec7/d932bb88-19b5-4ce2-bdbe-67298719699d.png)
### Picker View
선택 도구에는 하나 이상의 스크롤 가능한 개별 값 목록이 포함되며, 각 값에는 선택한 값이 하나씩 있으며, view 중앙의 어두운 텍스트로 표시된다. 사용자가 필드를 편집하거나 메뉴를 누를 때 화면 아래나 팝업 창에 선택기가 표시되는 경우가 많다. 일정관리 이벤트에서 날짜를 편집하는 것과 같이 피커도 인라인으로 나타날 수 있다. 선택기의 높이는 대략 5행의 목록 값 높이 입니다. 선택기의 너비는 장치 및 컨텍스트에 따라 화면 너비 또는 화면 둘러싸는 view입니다.<br>
![Picker View iOS Tutorial - iOScreator](https://static1.squarespace.com/static/52428a0ae4b0c4a5c2a2cede/5264cfdde4b070b299b2b0f4/5c6c420b9140b7718a6cc048/1552674361937/picker-simulator.png?format=1500w)
### Visual Effect View With Blur
Visual Effect View는 다른 뷰 뒤에 사용자 정의 가능한 블렌딩 효과를 제공한다.<br>
![UIVisualEffectView with mask layer - Stack Overflow](https://i.stack.imgur.com/B0D6G.png)
### Visual Effect Views With Blur and Vibrancy
흐릿한 배경과 render에 바이브런시 효과가 있는 뷰를 포함해서 제공 ( 반투명 )<br>
![UIVisualEffectView Tutorial: Getting Started | raywenderlich.com](https://koenig-media.raywenderlich.com/uploads/2014/09/vibrancy.png)
### Map Kit View
지도 응용프로그램에서 제공하는 것과 유사한 내장형 지도 인터페이스 제공. 이 클래스를 그대로 사용하여 지도 정보를 표시하고 프로그램에서 지도 내용을 조작. 지정된 좌표에 지도를 중앙에 놓고 표시할 영역의 크기를 지정하고, 사용자 지정 정보로 지도에 주석을 달 수 있다.

### MetalKit View
MTKView 클래스는 Metal-aware 뷰의 기본 구현을 제공함으로써 Metal 도면 애플리케이션을 만드는 데 필요한 노력을 단순화한다. MTKView 오브젝트는 응용프로그램을 대신하여 MTLRenderPassDescriptor 오브젝트와 관련 렌더 대상 첨부파일을 관리하는 편리한 방법을 제공한다. 내용을 업데이트해야 할 때 뷰에 끌어들이기만 하면 된다.

### GLKit View
GLKView 클래스는 OpenGL ES-aware 뷰의 기본 구현을 제공함으로써 OpenGL ES 애플리케이션을 만드는 데 필요한 노력을 단순화한다. GLKView는 당신의 어플리케이션을 대신하여 프레임 버퍼 객체를 직접 관리한다. 당신의 어플리케이션은 단지 콘텐츠를 업데이트해야 할 때 프레임 버퍼로 끌어들이기만 하면 된다.

### SceneKit View
SCNView 클래스를 사용하면 SceneKit 프레임워크를 사용하여 3D 장면을 표시할 수 있다. 응용프로그램에서 3D 장면을 쉽게 로드, 조작 및 렌더링할 수 있다.

### SpriteKit View
SKView 클래스는 SpriteKit 프레임워크를 사용하여 2D 장면을 표시할 수 있다. 응용프로그램에서 2D 장면을 쉽게 로드, 조작 및 렌더링할 수 있다.

### ARKit SceneKit View
ARSCNView 클래스를 사용하면 ARKit 및 SceneKit 프레임워크를 사용하여 카메라 배경에 3D 장면을 표시할 수 있다. ARS 세션을 닫아 3D 장면을 프로그램에서 쉽게 로드, 조작 및 렌더링할 수 있다.

### ARKit SpriteKit View
ARSKView 클래스는 ARKit 및 SpriteKit 프레임워크를 사용하여 장면을 표시할 수 있다. ARS 세션을 닫아 응용프로그램에서 씬(scene)을 쉽게 로드, 조작 및 렌더링할 수 있도록 한다.

### Web View (deprecated)
이전 릴리즈를 지원하는 기존 UIWebView. WKWebView 사용을 선호한다.

### WebKit View
내장된 웹 콘텐츠를 표시하고 콘텐츠 탐색을 활성화한다.

### RealityKit AR View
ARView 클래스는 RealityKit 프레임워크를 사용하여 3D 인터랙티브 AR 장면을 표시할 수 있다. 응용프로그램에서 3D AR 콘텐츠를 쉽게 로드, 조작 및 렌더링할 수 있다.

### Navigation Var
앱 화면 상단의 상태 표시줄 아래에 네비게이션 표시줄이 나타나 일련의 계층적 화면을 통해 네비게이션을 활성화한다. 새 화면이 표시되면 막대 왼쪽에는 이전 화면 제목이 붙어 있는 뒤 단추가 자주 나타난다. 때때로 탐색 모음의 오른쪽에는 편집 또는 완료 단추와 같은 컨트롤이 있어 활성 보기 내의 내용을 관리할 수 있다. 분할 보기에서 탐색 막대가 분할 보기의 단일 창에 나타날 수 있다. 탐색 막대는 반투명하고 배경 색조가 있을 수 있으며 키보드가 화면에 표시되거나 제스처가 발생하거나 보기 크기가 조정될 때 숨기도록 구성할 수 있다.<br>
  
![Partial screenshot of Calendar showing the month and the day's events, highlighted to emphasize the navigation bar.](https://developer.apple.com/design/human-interface-guidelines/ios/images/NavigationBar_2x.png)

### Navigation Item
UINavigationBar 객체의 스택에 있는 NavigationItem에 대한 정보를 캡슐화하며, item이 스택의 맨 위에 있을 때 NavigationBar에 표시되는 내용 및 back item일 때 표시 방법. NavigationBar에 표시되려면 NavigationItem에 title이 있어야 한다. <br>
내비게이션 아이템은 내비게이션바의 콘텐츠를 표시하는 객체입니다. 그리고 뷰 컨트롤러가 전환될 때마다 내비게이션바는 하나의 공동 객체지만, 내비게이션 아이템은 각각의 뷰 컨트롤러가 가지고 있는 프로퍼티입니다. 즉, 내비게이션바가 내비게이션 컨트롤러와 연관이 있다면 내비게이션 아이템은 해당 뷰 컨트롤러와 연관이 있습니다. 보통 내비게이션바에서 보여지는 중앙 타이틀, 좌측 바 버튼, 우측 바 버튼 등이 내비게이션 아이템의 프로퍼티입니다.

### Toolbar
도구 모음은 앱 화면 하단에 나타나며 현재보기 또는 그 안의 내용과 관련된 작업을 수행하기위한 버튼이 있습니다. 툴바는 반투명하고 배경 색조가있을 수 있으며 사람들이 필요하지 않을 때 숨길 수 있습니다. 예를 들어 Safari에서는 읽기 가능성이 높으므로 페이지 스크롤을 시작하면 도구 모음이 숨겨집니다. 화면 하단을 눌러 다시 표시 할 수 있습니다. 키보드가 화면에 있으면 도구 모음도 숨겨집니다.<br>

![](https://developer.apple.com/design/human-interface-guidelines/ios/images/ToolBars_2x.png)
### Bar Button Item
Bar Button Item은 button과 비슷하게 동작하며 제목, 이미지, 액션 및 대상이 있다. UIBarButtonItem 클래스는 플러스 이미지와 같이 시스템이 제공하는 이미지와 함께 Bar Button Item을 지정하는 데 사용할 수 있는 방법을 제공한다. <br>
바 버튼 아이템은 `UIToolbar` 또는 `UINavigationBar` (`backBarButtonItem`,`leftBarButtonItem`,`rightBarButtonItem`등)에 배치할 수 있는 특수한 버튼입니다. 제목이나 이미지를 보여줄 수 있고 미리 `UIBarButtonItem.SystemItem` 열거형에 정의된 여러 스타일 중 하나의 스타일로 선택할 수도 있습니다.

### Fixed Space Bar Button Item
Fixed Space Bar Button Item은 지정된 거리만큼 왼쪽에서 여백을 주고 싶을 때 사용합니다.  
명시적인 너비 값을 가질 수 있습니다.  

### Flexible Space Bar Button Item
Flexible Space Bar Button Item은 빈 공간을 모두 채울 때 사용합니다.  
이 버튼을 Done 버튼 왼쪽에 배치하면 Done 버튼 앞쪽에 있는 모든 빈 공간을 채우기 때문에 Done 버튼은 오른쪽 끝에 배치됩니다.

### Tap Bar
앱 화면 하단에 탭 표시 줄이 나타나고 앱의 다른 섹션간에 빠르게 전환 할 수 있습니다. Tap Bar는 반투명하며 배경 색조가있을 수 있으며 모든 화면 방향에서 동일한 높이를 유지하며 키보드가 표시되면 숨겨집니다. Tap Bar에는 여러 개의 탭이 포함될 수 있지만 표시되는 탭 수는 장치 크기 및 방향에 따라 다릅니다. 가로 공간이 제한되어 일부 탭을 표시 할 수없는 경우 마지막 표시 탭이 추가 탭이되어 추가 탭이 별도의 화면에 목록으로 표시됩니다. <br> 
사용자가 탭바의 항목(Item)을 선택하면 해당 항목에 연결된 뷰 컨트롤러의 콘텐츠가 화면에 보이게 됩니다. 주로 여러 메뉴를 구성할 때 많이 사용합니다. 카테고리 사이의 전환을 위해 사용하거나 다양한 관점으로 같은 정보를 제공하는 데 사용합니다.  
탭바는 화면에 보여지기 위한 뷰 요소이므로 제어를 하기 위해서는 컨트롤러가 필요합니다. 프로그래머가 직접 탭바를 제어할 컨트롤러 클래스를 작성하여 사용할 수도 있지만, 대부분의 경우 프레임워크에서 제공하는 탭바 컨트롤러(UITabBarController)를 사용하여 제어합니다. 이렇게 탭바와 탭바 컨트롤러를 사용하여 인터페이스를 구성한 것을 탭바 인터페이스라고 부릅니다.<br>

![사진 앱에서 선택한 앨범 탭의 스크린 샷.](https://developer.apple.com/design/human-interface-guidelines/ios/images/TabBar_2x.png)
![](https://cphinf.pstatic.net/mooc/20180124_172/1516768679755pJA0M_PNG/140_1.png?type=w760)  
](https://www.edwith.org/boostcourse-ios/lecture/16862/#)
### Tap Bar Item
UITabBar의 항목을 나타낸다. 각 탭 모음 항목에는 제목과 이미지가 있으며 UITabBar에서 보기를 선택하는 데 사용된다. <br>
탭바 뷰에서 각 탭은 이름과 이미지를 표시할 수 있고 뷰 컨트롤러는 이러한 용도로 `tabBar`프로퍼티를 관리합니다. 탭바 컨트롤러가 콘텐츠 뷰 컨트롤러를 포함하면 해당 뷰 컨트롤러의 탭바 아이템이 탭바 컨트롤러의 탭바에 추가됩니다. 탭바 컨트롤러의 탭바 아이템이 6개 이상인 경우, 5번째 탭에 'More'이라는 아이템이 표시되고 사용자가 More 버튼을 누르면 나머지 탭 항목을 선택할 수 있는 인터페이스가 표시됩니다.

### Search Bar
Search Bar를 사용하면 텍스트를 필드에 입력하여 많은 값을 검색 할 수 있습니다. Search Bar는 단독으로 또는 navigation bar 또는 content view에 표시 될 수 있습니다. navigation bar에 표시되면 search bar를 navigation bar에 고정하여 항상 액세스 할 수 있거나 사용자가 아래로 스와이프하여 탐색 할 때까지 축소 할 수 있습니다.<br>

![](https://developer.apple.com/design/human-interface-guidelines/ios/images/SearchBar_Prominent_2x.png)

### Menu Command
명령은 메뉴의 다른 명령과 그룹화되며, 선택 시 첫 번째 응답기를 통해 수행 메시지를 전송한다. 동작 수행 외에도, 명령어는 종종 체크 표시로 표시된 설정을 수정한다.

### Main Menu
MacOS에서 메인 메뉴로 사용할 기본 메뉴 및 명령 집합이 포함되어 있다.

### Sub Menu
하위 메뉴에 하위 메뉴를 표시하도록 구성된 메뉴.

### Inline Section Menu
하위 항목을 구분 기호로 인라인으로 표시하기 위한 메뉴 설정.

### View ( 따로 또 정리하기 ) ( 프레임, 바운드도 같이 )
UIView는 뷰 계층 구조에서 상위 영역의 직사각형 영역 내에서 이벤트를 그리고 배치하며 처리할 수 있는 구조를 제공한다. <br>
iOS에서  화면에  애플리케이션의  콘텐츠를  나타내기  위해  윈도우와  뷰를  사용합니다. 윈도우는  그  자체로  콘텐츠를  표현할  수  없지만  애플리케이션의  뷰를  위한  컨테이너  역할을  합니다. 뷰는 UIView 클래스  또는 UIView 클래스의  하위클래스(Subclass)의  인스턴스로  윈도우의  한  영역에서  콘텐츠를  보여줍니다. 뷰가  나타낼  수  있는  콘텐츠는  이미지, 문자, 도형  등과  같이  다양합니다. 뷰는  또  다른  뷰를  관리하고  구성하기  위해  사용되기도  합니다.<br>

뷰는  제스처  인식기(gesture recognizer)를  사용하거나  직접  터치  이벤트를  처리할  수  있습니다. 또한  뷰  계층(view hierarchy)구조에서  부모뷰(parent view)는  자식뷰(child view)의  위치와  크기를  관리합니다.<br>

나타내고자  하는  유형의  콘텐츠에  적합한  뷰를  여러  개  사용하여  뷰  계층(view hierarchy)구조를  구성하고  이를  통해  콘텐츠를  보여주는  것이  좋습니다. 예를  들어 UIKit에는  이미지, 텍스트  그리고  다른  유형의  콘텐츠를  나타내는  뷰가  포함되어  있습니다.

### Container View
`iOS`에서  `ContainerView`를 사용하면 View 가 하위 View 를 가질 수 있으며
하위 View 는 자체 View Controller로 관리됩니다.
기본적으로 iOS에서 사용할 수있는 UINavigationController 및 UITabBarController와 같은 UIViewController가 이 범주에 속합니다.

### View Controller ( 따로 또 정리하기 )
toolbars, navigation bars, and application views에 대한 view 관리 기능 제공.  
또한 UIViewController 클래스는 장치 방향이 변경될 때 modal views and rotating views를 지원한다.

### StortyBoard Reference
Storyboard references는 많은 파일로부터 스토리보드를 factoring 하는 것을 허락한다. placeholders에 연결되어진 segues는 한 스토리보드에서 다른 스토리보드로 전환 되는것을 허락한다.

### Navigation Controller
Navigation controllers 는 navigation bar, and a stack of view controllers를 관리한다. 각 view controller는 navigation item을 통해 navigation bar의 모양을 커스터마이징할 수 있다. view controller를 스택에 push 하고 pop할 때,  navigation controller가 view와 navigation bar를 적절하게 업데이트한다.

### Table View Controller
UITableView 관리, 정확한 치수의 인스턴스(instance) 자동 생성 및 마스크 크기 조정, table view's delegate and data source 역할을 수행한다. UITableViewController 클래스는 toggling of editing modes을 제공한다.

### Collection View Controller
UITableView 관리, 정확한 치수의 인스턴스(instance) 자동 생성 및 마스크 크기 조정, collection view's delegate and data source 역할을 수행한다.

### Tab Bar Controller
tap bar item을 나타내는 set of viewController 를 관리한다. 각 viewController는 tap bar item에 대한 정보를 제공하고 item을 선택할 때 표시할 view를 제공한다.

### Split View Controller
Split view controllers는 master view controller(often a  list)가 child view controller의 변경을 시작하는 master-detail interfaces를 만드는 데 사용된다.

### Page View Controller
data source and delegate와의 coordination을 통해 sequence of view controllers를 페이지로 표시. 페이지 간 Swipe navigation은 사용자의 손가락을 추적하는 page curl 전환으로 자동 처리된다. 네비게이션 방향은 책의 페이지처럼 수평이거나 벽 달력의 페이지처럼 수직일 수 있다.

### Hosting View Controller ( 이해하기 싫음.. )
Customize SwiftUI view는 프로그래밍 방식으로 루트 보기를 할당하는 UIHostingController의 사용자 지정 하위 클래스를 선언하여 계층 내용을 본다.  
원하는 루트 보기로 초기화된 대상 Hosting Controller를 프로그래밍 방식으로 반환하는 Segue Action을 source view controller에서 선택적으로 정의할 수 있다.

### GLKit View Controller
GLKViewController 클래스는 모든 표준 뷰 컨트롤러 기능을 제공하며 OpenGL ES 렌더링 루프를 구현한다.  
GLKViewController 객체는 GLKView 객체와 함께 작동하여 보기에 애니메이션 프레임을 표시한다.

### AVKit Player View Controller
시청각 콘텐츠 및 표준 재생 컨트롤을 표시할 수 있는 AVPlayer 개체를 관리하는 컨트롤러.

### Object
custom class inspector를 사용하여 이 개체를 특정 클래스의 인스턴스로 전환하십시오.  
이 개체는 종종 view controllers와 별개의 custom controllers를 인스턴스화하는 데 사용되지만 여전히 뷰에 대한 action 및 outlet 관계를 유지한다.

### Tap Gesture Recognizer
사용자가 탭할 때 action message 보내기.
탭 제스처 인식기는 한 번 또는 여러 번 터치하는 탭으로 구성할 수 있다.

### Pinch Gesture Recognizer
사용자가 두 손가락으로 pinches 하는 동안 계속해서 action message를 전송한다.  
pinch gesture recognizer는 종종 내용을 확대축소하는데 사용된다.

### Rotation Gesture Recognizer
사용자가 두 손가락으로 회전을 수행하는 동안 계속해서 action message를 전송한다.  
rotation gesture recognizer는 종종 내용을 회전하는 데 사용된다.

### Swipe Gesture Recognizer
사용자가 swipes할 때 action message 전송  
한 방향으로 한 번 또는 여러 번 터치할 수 있도록 swipe gesture recognizer를 구성할 수 있다. 여러 방향을 인식하려면 multiple recognizers를 사용하십시오.

### Pan Gesture Recognizer
사용자가 drags 하는 동안 action message를 계속 전송.
pan gesture recognizer는 한 번 또는 여러 번 터치할 수 있도록 구성할 수 있다.

### Screen Edge Pan Gesture Recognizer
사용자가 화면 가장자리에서 drags 끌어오는 동안 action message 보내기  
특정 화면 가장자리를 인식하도록 화면 가장자리 pan gesture recognizer를 구성할 수 있다.

### Long Press Gesture Recognizer
사용자가 presses하는 동안 action message를 계속 전송.
long press gesture recognizer는 한 번 또는 여러 번 터치하고, 한 번 또는 여러 번 탭으로 구성할 수 있다.

### Custom Gesture Recognizer
사용자가 custom gesture를 수행할 때 action message 전송  
custom class inspector를 사용하여 이 개체를 특정 제스처 인식기의 인스턴스로 전환하십시오.

---------

#### 결론
Storyboard 의 전반적인 내용을 알게 되었다. 공식 홈페이지 울렁증이 사라졌다. 이제 애플 공식문서가 무섭지않아!

---------
> 출처 : [애플 공식문서 for viewController](https://developer.apple.com/library/archive/featuredarticles/ViewControllerPGforiPhoneOS/index.html#//apple_ref/doc/uid/TP40007457-CH2-SW1) <br>
[Safe Area](https://developer.apple.com/documentation/uikit/uiview/positioning_content_relative_to_the_safe_area) <br>
[HIG](https://developer.apple.com/design/human-interface-guidelines/ios/overview/themes/)
-------
## <a name="autolayout"></a>AutoLayout *<small><update 20.06.03><small>*

autolayout


------

## <a name="WebView"></a>WebView *<small><update 20.04.28><small>*

### IOS app 에서 웹사이트를 보여주는 방법
1. 사파리앱을 열어줌
내 앱 "안에서" 열어주는게 아니라 사파리앱을 앱에서 열어주는 것.
```swift
@IBAction func openSafariAction(_ sender: Any) {

 guard let url = URL(string: "https://github.com/Mino777"), UIApplication.shared.canOpenURL(url) else { return }

 UIApplication.shared.open(url, options: [:], completionHandler: nil)


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

2번과 3번중 자신의 상황에 따라 골라서 사용하면 될 듯. <br>
출처 https://zeddios.tistory.com/375

----

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









