# *IOS.*

### 바로가기

- [WebView](#WebView)

----

## <a name="WebView"></a>WebView

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





