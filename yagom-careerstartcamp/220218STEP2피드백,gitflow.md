# TIL 220218STEP2피드백,gitflow

## 🔥학습 내용
### STEP2 피드백
- Type Annotation
	- 협업자와의 상의와 상황에 따라 적절한 트레이드오프가 필요

- 불필요한 중복을 피하기위해 알고리즘적으로 처리하는 상황일 때 좀 더 명확하고 가독성이 유리한 방법이 있는지 최대한 고민해보기.
- 열거형 타입을 사용해서 사이드이펙을 줄이기.

```swift
		if userSelectedNumber == computerSelectedNumber {
			userInterface.printRockPaperScissorsGameResut(gameResult: .draw)
		    startProgram()
		 }

         if userSelectedNumber == computerSelectedNumber + 1 || userSelectedNumber == computerSelectedNumber - 2 {
            userInterface.printRockPaperScissorsGameResut(gameResult: .win)
            mukjipaGame.startMukjipaGame(currentTurn: .user)
        }

         if userSelectedNumber == computerSelectedNumber - 1 || userSelectedNumber == computerSelectedNumber + 2 {
            userInterface.printRockPaperScissorsGameResut(gameResult: .lose)
            mukjipaGame.startMukjipaGame(currentTurn: .computer)
        }
``` 
``` swift
		 switch (userHand, computerHand) {
         case (.rock, .rock), (.scissor, .scissor), (.paper, .paper):
             userInterface.printRockPaperScissorsGameResut(gameResult: .draw)
             startProgram()
         case (.rock, .scissor), (.scissor, .paper), (.paper, .rock):
             userInterface.printRockPaperScissorsGameResut(gameResult: .win)
             mukjipaGame.startMukjipaGame(currentTurn: .user)
         case (.rock, .paper), (.scissor, .rock), (.paper, .scissor):
             userInterface.printRockPaperScissorsGameResut(gameResult: .lose)
             mukjipaGame.startMukjipaGame(currentTurn: .computer)
         default:
             break
         }
```

---

### 도미닉의 GitFlow 강의
- 커밋은 최대한 작은단위로!
- 커밋 컨벤션 중요!
- 큰 업무를 작은 업무로 최대한 잘개 쪼개라
	- 그렇게 쪼개어진 간단한 문제들을 해결하다보면 큰 문제를 더 쉽게 해결할 수 있다.
- 브랜치 전략이 없으면?
	- 어떤 브랜치가 최신이지?
	- 어떤 브랜치에서 개발을 시작해야하지?
	- 어디에 푸시를 보내야 하지?
	- 빨리 버그 수정을 해서 배포해야하는데 어떤 브랜치를 기준으로 수정해야할까?
	- 배포 버전은 어떤걸 골라야하지?
	- 등의 상황들을 최소화 하기 위해 브랜치 전략을 사용해야 한다.
- Git Flow란
- 아래 브랜치들을 이용해 흐름을 보여주는 브랜치 전략
	- maste: 앱으로 출시된 브랜치
	- develop: 다음 출시 버전을 개발하는 브랜치
	- feature(s): 단일 기능 개발을 위한 브랜치
	- release(s): 다음 버전 배포를 준비하는 브랜치
	- hotfix(s): 급한 버그를 수정하는 브랜치

#### master

앱스토어, 플레이스토어에 출시되면 release 브랜치에서 합쳐진다.

- release 에서 배포가 완료되면 master에 머지한다
- git checkout master
- git merge -no-ff release-4.1.0.5
- 버전 태그들이 존재
- git tag ver4.1.0.5

#### develop

다음 버전을 개발하기 위한 base, 기능이 완료되면 develop에 합쳐진다.

- 배포가 완료되면 develop에도 머지가 된다
- git checkout develop
- git merge -no-ff ~
- 새로운 기능을 만들기 위한 브랜치 생성
- git checkout -b feature-scrap
- 새로운 기능 개발이 완료되면 develop에 합쳐진다
- git checkout develop
- git merge -no-ff feature-scrap

#### feature

단일 기능 개발을 하는 브랜치, develop에서 브랜치를 생성하고 기능 개발이 완료되면 develop에 합쳐진다

- 새로운 기능을 만들기 위한 브랜치를 생성
- 기능 개발 브랜치 이름은 feature에 - 을 붙이고 개발하는 기능명을 적는다.
- git checkout -b feature-scrap
- 부분이 완료될 때마다 커밋을 한다
- git commit -m “feat: 스크랩 버튼 UI 추가”
- git commit -m “feat: 다른 사람의 스크랩 보기 구현”
- 새로운 기능 개발이 완료되면 develop에 합쳐진다
- git checkout develop
- git merge -no-ff ~

#### release 

develop 에서 배포를 준비할 때 생성하는 브랜치, 버전명과 빌드번호 등을 이 브랜치에서 수정

- develop 에서 새로운 버전 배포 브랜치 생성
- git checkout -b ~
- 버전명과 빌드번호등을 배포되는 버전에 맞게 수정 커밋
- git commit -m docs: 버전, 빌드번호 입력
- 검수 요청에 실패하면 수정한 내용들을 커밋한다
- git commit -m fix: 사용자 차단 기능 추가
- 배포가 성공하면 master, devlop에 합쳐진다
- git merger -no-ff ~

#### hotfix

급한 버그를 수정하는 브랜치

- 배포된 버전인 master에서 급한 버그를 수정하기 위한 브랜치를 생성
- git checkout master
- git checkout -b hotfix~
- 버그를 수정하고 그 내용들을 커밋한다
- git commit -m fix: 프로필 화면 ~ 버그 수정
- hotfix는 릴리즈로 가지않고 바로 hotfix에서 버전 빌드번호 수정 후 배포
- 배포가 성공하면 master, develop에 합쳐짐

---

#### 키포인트
- git merge -no-ff 옵션
	- 머지할 때 흐름을 저장할 수 있음.
	- 그냥 머지하는 경우 흐름이 사라짐.
	- 이런게 있는지 처음 알았다!!!
- 이러한 work flow를 파악할 수 있는 것이 Git Flow를 사용하는 이유
- 이렇게 사용된 브랜치들은 develop과 master를 제외하고는 머지가 완료되면 제거
- 주요 git 명령어
	- git checkout
	- git checkout -b
	- git merge -no-ff
- 기본적인 브랜치 구조를 생성해주는 git flow avh라는것도 있음
- 1개월 이상의 긴 호흡으로 개발해 주기적으로 배포, QA 및 테스트, hotfix 등 수행할 수 있는 여력이 있는 팀에 어울리는 브랜치 전략
	- 하지만 도미닉이 생각하기에 Git Flow를 사용하면, 기본적으로 체계가 잡혀있고 규칙이 존재하기 때문에 오히려 소규모에서도 문제없이 소스 관리를 할 수 있는 장점이 있다고 생각.

---
