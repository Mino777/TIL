# TIL 220228builderpattern

## 🔥학습 내용

### 빌더 패턴(Builder Pattern)
- 복잡한 객체를 생성자에 여러 개의 파라미터를 넣지 않고 각각 값을 넣어주며 생성하는 것을 도와주는 디자인 패턴

![](https://assets.alexandria.raywenderlich.com/books/des/images/06272e94624ac4835411d41e69a30f2399bddc2aeb82b0798152d5d489f909bb/original.png)

- Director 객체는 Product 객체를 사용
- Director 객체는 Builder 객체를 사용해서 Product를 만듦
- Builder 객체는 build() 메서드를 통해 Product를 생성

```swift
struct Product {
    var name: String
    var age: Int
    var height: Int
}

class ProductBuilder {
    private var name: String = ""
    private var age: Int = 0
    private var height: Int = 0
    
    func setName(_ name: String) -> ProductBuilder {
        self.name = name
        return self
    }
    
    func setAge(_ age: Int) -> ProductBuilder {
        self.age = age
        return self
    }
    
    func setHeight(_ height: Int) -> ProductBuilder {
        self.height = height
        return self
    }
    
    func build() -> Product {
        return Product(name: name, age: age, height: height)
    }
}

struct Director {
    let product: Product
    
    init(product: Product) {
        self.product = product
    }
    
    func create() {
        print("\(product.name), \(product.age), \(product.height)")
    }
}

class ViewController {
    let builder: ProductBuilder
    let director: Director
    
    init(builder: ProductBuilder, director: Director) {
        self.builder = builder
        self.director = director
    }
    
    func create() {
        director.create()
    }
}

let builder = ProductBuilder()
let director = Director(product: builder
                            .setName("마이노")
                            .setAge(10)
                            .setHeight(183)
                            .build())
let vc = ViewController(builder: builder, director: director)
vc.create()
```

- Java의 경우에 사용하는 이유는
	- 생성자에서 파라미터의 수가 많아졌을 때 헷갈림
	- 초기화하지 않아도 되는 값인데 처리해줘야 해서 가독성이 떨어짐
- swift의 경우 빌더 패턴을 꼭 사용해야 할까?
- swift의 경우 파라미터에 레이블을 달아줄 수 있고, 파라미터에 default value를 지정해줄 수 있는데?

> - 참고
>   - [Builder Pattern](https://www.raywenderlich.com/books/design-patterns-by-tutorials/v3.0/chapters/9-builder-pattern)
