# TIL 220315DoubelStackQueue

## 🔥학습 내용

### Double Stack Queue
- 기존 Array를 사용한 Queue의 경우 dequeue 할 때 removeFirst 메서드를 사용하면서 시간 복잡도가 O(n)이 됨
- 더블 스택의 경우 배열의 마지막 요소를 제거하는 연산은 재정렬이 필요하지 않아 O(1)이 되는 것을 활용
![](https://user-images.githubusercontent.com/54234176/158317226-a26675d7-707d-43c9-87c2-81c8cd240d5c.jpg)

```swift
struct CalculatorItemQueue<Element: CalculateItem> {
    private var inputStack: [Element] = []
    private var outputStack: [Element] = []
    
    var isEmpty: Bool {
        return inputStack.isEmpty && outputStack.isEmpty
    }
    
    var count: Int {
        return inputStack.count + outputStack.count
    }
    
    var front: Element? {
        return outputStack.last ?? inputStack.first
    }
    
    var rear: Element? {
        return outputStack.first ?? inputStack.last
    }

    mutating func enqueue(_ element: Element) {
        inputStack.append(element)
    }
    
    mutating func dequeue() -> Element? {
        guard self.isEmpty == false else {
            return nil
        }
        
        if outputStack.isEmpty {
            outputStack = inputStack.reversed()
            inputStack.removeAll()
        }
        
        return outputStack.removeLast()
    }
    
    mutating func clear() {
        inputStack.removeAll()
        outputStack.removeAll()
    }
}

```
---
