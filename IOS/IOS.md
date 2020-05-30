# *IOS.*

### 바로가기

- [Networking in IOS](#networking)
- [WebView](#WebView)

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





