# TIL 211206 
> Tag: 캠프시작, Git, Week1 Live Session

## 🔥오늘의 이벤트
- 캠프 시작
- Week1 Mission Step1 완료
- Week1 Live Session 수강 완료

## 🔥학습 내용
### Git
> 코드리뷰를 위한 프로세스
1. 프로젝트를 자신의 계정으로 fork
2. fork한 저장소를 자신의 맥으로 clone
    - git clone {url}
    - cd {폴더}
3. 기능 구현을 위한 브랜치 생성
    - git checkout -b 브랜치이름
4. 기능 구현 후 add, commit
    - git status 
    - git add -A or .
    - git commit -m "message"
5. 원격 저장소에 push
    - git push origin 브랜치이름
6. Github에서 PR 보내기
    - original 저장소의 브랜치 체크 후 PR
7. merge 완료 후 브랜치 변경 및 삭제
    - git checkout 브랜치이름
    - git branch -D 삭제할 브랜치이름
8. original 저장소와 동기화를 위한 저장소 추가
    - git remote add upstream {url}
    - git remote -v
9. original 저장소에서 자기 브랜치 가져오기
    - git fetch upstream 브랜치이름 
    - git branch -a
10. original 저장소 브랜치와 동기화
    - git rebase upstream/브랜치이름
11. 기능 구현을 위한 브랜치 생성
    - git checkout -b 브랜치이름
---

### Week1 Live Session
- 능동적인 자세 필쑤!
- 기본기
    - 재활용성
    - 코드 컨벤션!
- 이유 있는 코드
- 왜라는 질문에 항상 준비하기
- 어제의 나랑만 비교하기
- 비전공자 CS 공부
    - 맥의 활성 상태 보기
    - 네트워킹
    - 와우 신박해
- 자만심 버리기
- 빠르게가려면 혼자가고 멀리가려면 함께가라!
    

## 🔥문제점 / 고민한 점
- Github Token Issue

## 🔥해결 방법
- Github에서 새로운 Token 발행
