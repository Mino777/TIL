# TIL 220303modalpresentationissue,guardletselfvsself?withweakself

## 🔥학습 내용

### modalPresentationStyle (late iOS 13.0) Issue
[](https://hacknicity.medium.com/view-controller-presentation-changes-in-ios-13-ac8c901ebc4e)[https://hacknicity.medium.com/view-controller-presentation-changes-in-ios-13-ac8c901ebc4e](https://hacknicity.medium.com/view-controller-presentation-changes-in-ios-13-ac8c901ebc4e)

- 위 글에 따르면 가로모드(Landscape)에서 pagesheet같은 ios13이후로 나온 presentation style을 쓰는 경우에, iPhone XS Max and iPhone Plus 모델만 해당 스타일로 동작이 된다고 합니다. 
- 그래서 현재 JuiceMaker 프로젝트에서 pagesheet를 해도 해당 모델이 아니면 fullscreen으로 동작합니다. 근데 해당되는 모델 시뮬레이터로 실행을 했는데도 가로모드에서 pagesheet 적용이 안되네요;; 가로모드에서는 이제 아예 다 안되는건가..?
- 그런데 재밌는게, 스토리보드에서 Presentation Style을 automatic(pagesheet)으로 지정해놓았을 경우에, 보이기에는 fullscreen형식으로 동작하는데도 불구하고 View Life Cycle은 pagesheet로 적용됩니다. 
- modal로 올라온 VC가 없어질 때 이전 VC에서 viewWillAppear가 호출되지 않습니다. 근데 이거는 제가 해본 실험이어서 확실하진 않지만 우선 결과는 그렇습니다... 근데 생각해보니 내부 동작은 설정된 값으로 되는게 당연했던거 같긴 하네요.. 보이는 것만 그런거니까..

### guard let self = self vs self? with weak self

- guard let self = self를 지양해야한다?
	- closure 내부에서 외부에있는 프로퍼티를 캡처할 때, 현재 instance가 heap에 존재하면 객체를 Strong으로 참조하고, instance가 해제 되었으면 nil을 반환하여 탈출
	- guard let self = self를 쓰는 경우, deallocation delay를 발생시킬 수 있음. 즉, 클로저가 참조하고 있는 객체의 메모리 해제를 지연시킬 수 있음.
	- 무거운 작업이 존재하는 경우, 클로저 안의 로직을 수행 중에 self 인스턴스가 해제될 수 있음.
	- 그런데 guard let으로 self를 체크하는 경우 self에 대한 강한 참조가 생기고 클로저가 종료될 때 까지 self의 해제를 지연시킴.
- self?
	- self?의 경우 각 self?마다 nil 체크를 하기 때문에 nil인 경우 해당 메서드를 스킵하고 다음으로 진행.
	- 그렇기 때문에 deallocation delay가 발생하지 않음
- 클로저 안에서 self참조가 많을 경우에 그냥 체이닝이 뵈기 싫어서 guard let self = self를 자주 사용했는데 이제 그냥 체이닝 써야겠당!

---

> - 참고
>  - [You don’t (always) need [weak self]](https://medium.com/@almalehdev/you-dont-always-need-weak-self-a778bec505ef)
>   - [swift - guard let self = self vs self?.](https://jinsangjin.tistory.com/129)
>   - [guard let self = self 사용하면 안되는 이유](https://ios-development.tistory.com/602)
