# *Error.*

### 바로가기

- [xcode 시뮬레이터 안보일 때](#xcodesimulatornon)
- [sourceTree 하위 폴더 인식 못할 때](#sourcetreedir)
- [WKWebView](#WKWebView)

----

## <a name="xcodesimulatornon"></a>xcode 시뮬레이터 안보일 때 *<small><update 20.05.30><small>*
xcode 업데이트를 하고나서, 코딩을 하던 중 시뮬레이터를 돌렸더니 시뮬이 나오지않음. 오류도 뜨지 않음 정상적으로 running 중임. 독립으로 시뮬을 오픈해봐도 뜨지 않음.. **멘붕** 각종 구글링을 해보아도 잘 안나옴.. 1시간 정도 삽질ㅠㅠ

#### 방법
시뮬레이터 실행 파일? 앱? 을 Dock으로 가져온 뒤에 강제 종료 한 후에 다시 돌리면 정상 작동함. 허무하다,,
  
----

## <a name="sourcetreedir"></a>sourceTree 하위 폴더 인식 못할 때 *<small><update 20.05.30><small>*
깃 폴더를 정리를 하려고 마음을 먹고 소스트리로 폴더 정리를 하던 중에, 소스트리가 하위 폴더를 인식을 못하는 상황.

#### 방법
폴더를 인식하지 않는 이유는 하위 폴더를 이전에 Git에 연동을 했을 경우에 .git 파일이 존재하기 때문.<br>
.git 파일이 존재하면 소스트리가 중복 repo로 인식하기 때문에 그 폴더를 인식하지 못함.<br>
터미널을 키고 그 하위폴더 위치로 가서 ls -la 로 .git 파일이 있는지 확인 후, 파일이 있다면 rm -rf .git 으로 삭제해주면 인식 완료!

----

## <a name="WKWebView"></a>WKWebView *<small><update 20.04.29><small>*

Could not instantiate class named WKWebView because no class named WKWebView was found; the class needs to be defined in source code or linked in from a library (ensure the class is part of the correct target)’
1. 프로젝트 파일 선택

2. Build Phase tab 선택

3. Link Binary with Libraries section 에 + button 으로 webkit프레임웤 추가

----
