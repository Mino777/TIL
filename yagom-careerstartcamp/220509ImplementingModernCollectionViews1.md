
# TIL 220509ImplementingModernCollectionViews1

## 🔥학습 내용
## Modern CollectionView 용어 정리
### DiffableDataSource
```swift
@MainActor class UICollectionViewDiffableDataSource<SectionIdentifierType, ItemIdentifierType> : NSObject where SectionIdentifierType : Hashable, ItemIdentifierType : Hashable
```
```swift
dataSource = UICollectionViewDiffableDataSource<Int, UUID>(collectionView: collectionView) {
    (collectionView: UICollectionView, indexPath: IndexPath, itemIdentifier: UUID) -> UICollectionViewCell? in
    // Configure and return cell.
}
```

- 기본적으로 기존의 DataSource와 역할은 같음
- 기존 DataSource는 Protocol, DiffableDataSource는 Generic Class이며 기존 DatsSource를 채택하고있음
- performBatchUpdates() 메서드대신 apply라는 단일 메서드를 통해 단순하고 오토매틱하게 기존 작업 처리 가능
- 기존의 DataSource처럼 IndexPath를 사용하지않고 Hash 개념을 사용
	- Snapshot: 현재 UI state의 truth
	- section과 item에 대해 Unique identifiers가 있고 해당 id로 업데이트
	- apply 시에 각 hash value를 비교해 업데이트가 필요한 부분을 인지
	- 따라서 해당 제네릭 변수는 반드시 Hashable 해야함
	- 빠른 속도
	- 간결성
	- IndexPath를 통해 일어날 수 있는 크래시 방지
- 기존 reloadData()로의 데이터 동기화와 다르게 자연스럽게 UI를 업데이트할 수 있음

### CompositionalLayout
```swift
@MainActor class UICollectionViewCompositionalLayout : UICollectionViewLayout
```
![Schematic representation of the App Store app on iOS, showing a collection view with a compositional layout. The layout is composed of two horizontally-scrolling sections that have different layouts. The top section shows one group with one item visible onscreen, with other groups peeking in from the side of the screen. The bottom section shows one group that's a column of three cells, each of those cells being an item. Each of the items, groups, and sections are outlined and labeled to show how the pieces fit together.](https://docs-assets.developer.apple.com/published/2308306163/rendered2x-1585241228.png)

```swift
func createBasicListLayout() -> UICollectionViewLayout { 
    let itemSize = NSCollectionLayoutSize(widthDimension: .fractionalWidth(1.0),                                  
                                         heightDimension: .fractionalHeight(1.0))    
    let item = NSCollectionLayoutItem(layoutSize: itemSize)  
  
    let groupSize = NSCollectionLayoutSize(widthDimension: .fractionalWidth(1.0),                                          
                                          heightDimension: .absolute(44))    
    let group = NSCollectionLayoutGroup.horizontal(layoutSize: groupSize,                                                   
                                                     subitems: [item])  
  
    let section = NSCollectionLayoutSection(group: group)    

    let layout = UICollectionViewCompositionalLayout(section: section)    
    return layout
}
```
- 기본적으로 Section, Group, Item 객체들에 각각의 레이아웃 정보를 세팅해주고, 해당 객체들을 합쳐서 구성
- NSCollectionLayoutSize
	- 셀의 크기를 결정해주는 객체
	- NSCollectionLayoutDimension 타입의 프로퍼티를 가지고있음
		- absolute: 고정 크기
		- fractionalHeight: 포함된 그룹안의 세로비율만큼의 크기 (max 1)
		- fractionalWidth: 포함된 그룹안의 가로비율만큼의 크기 (max 1)
		- estimated: 최소크기
- NSCollectionLayoutItem
	- 네이밍 그대로 아이템
	- NSCollectionLayoutSize를 적용한 Cell
- NSCollectionLayoutGroup
	- 가로, 세로, 커스텀 가능
	- 같은 크기의 셀을 반복할지, 다른 크기의 셀을 반복할지에 대해서 subitems로 설정 가능
- NSCollectionLayoutSection
	- Group을 담는 Container
	- 네이밍 그대로 기존의 Section
- NSCollectionLayoutSupplementaryItem
	- 벳지같은 시각적 장식을 추가하는데 사용
	- 필요할 때 알아보자
- NSCollectionLayoutBoundarySupplementaryItem
	- 헤더뷰, 푸터뷰에 레이아웃 추가할 때 사용
	- 필요할 때 알아보자

### UICollectionLayoutListConfiguration
- List 타입의 Layout을 사용할 때 선언할 수 있는 설정을 모아둔 구조체
- 요걸로 테이블뷰를 대체할 수 있는 듯
- 대신 다른 친구들은 iOS13+ 이지만 얘는 iOS14+
- Appearance, Swipe Action Provider 등이 있음
```swift
let configuration = UICollectionLayoutListConfiguration(appearance: .sidebar)
let layout = UICollectionViewCompositionalLayout.list(using: configuration)
```
```swift
func configureLayout() {
    let provider = {(_: Int, layoutEnv: NSCollectionLayoutEnvironment) -> NSCollectionLayoutSection? in
      let configuration = UICollectionLayoutListConfiguration(appearance: .grouped)
      return .list(using: configuration, layoutEnvironment: layoutEnv)
    }
    collectionView.collectionViewLayout = UICollectionViewCompositionalLayout(sectionProvider: provider)
  }
```
---

> - 참고
>  - [Advances in UI Data Sources](https://developer.apple.com/videos/play/wwdc2019/220/)
>   - [Implementing Modern Collection Views](https://developer.apple.com/documentation/uikit/views_and_controls/collection_views/implementing_modern_collection_views)
>   - [UICollectionViewCompositionalLayout](https://developer.apple.com/documentation/uikit/uicollectionviewcompositionallayout)
>   - [UICollectionViewDiffableDataSource](https://developer.apple.com/documentation/uikit/uicollectionviewdiffabledatasource)
>   - [Modern Collection Views with Compositional Layouts](https://www.raywenderlich.com/5436806-modern-collection-views-with-compositional-layouts)
