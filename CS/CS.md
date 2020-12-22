# *Data Structure & Algorithm*

### 바로가기

- [자료구조의 개요](#개요)
	* [연결 리스트](#연결리스트)
	* [양방향 연결 리스트](#양방향연결리스트)
	* [스택](#스택)
	* [큐](#큐)	


---
>참고
>* 패스트 캠퍼스 컴퓨터공학 ALL IN ONE
>* [부스트코스] 모두를 위한 컴퓨터 과학 (CS50 2019)
----

## <a name="개요"></a>자료구조의 개요 *<small><update 20.06.22><small>*

#### 자료구조의 필요성
1. 데이터를 효과적으로 저장하고, 처리하는 방법에 대한 이해
2. 자료구조를 제대로 이해하지 못하면 불필요하게 메모리와 성능을 낭비할 여지가 있음.

#### 기본적인 자료구조들
1. 선형구조
- 배열
- 연결 리스트
- 스택
- 큐

2. 비선형 구조
- 트리
- 그래프

#### 자료구조와 알고리즘 상관관계
1. 효율적인 자료구조 설계를 위해 알고리즘 지식이 필요
2. 효율적인 알고리즘을 작성하기 위해서는 문제 상황에 맞는 적절한 자료구조가 사용되어야 함.
3. 따라서 자료구조론과 알고리즘 이론은 모두 동일선상에 놓을 수 있음.

#### 프로그램의 성능 측정 방법론
1. 시간 복잡도 (Time Complexity)란 알고리즘에 사용되는 연산 횟수를 의미
2. 공간 복잡도 (Space Complexity)란 알고리즘에 사용되는 메모리의 양을 의미
- 효율적인 알고리즘을 사용한다고 가정했을 때 일반적으로 시간과 공간은 반비례 관계.
- 시간 복잡도를 표현할 때는 최악의 경우를 나타내는 Big-O 표기법을 사용
- 다음 알고리즘은 O(n)의 시간 복잡도를 가짐
```c
int main(void) {
	int a, b;
	cin >> a >> b;
	int sum = 1;
	for (int i = 0; i < b; i++) { // 어떠한 변수만큼 반복을 한다.
		sum *= a;
	}
	cout << sum;
}
```
- 다음 알고리즘은 O(n2)의 시간 복잡도를 가짐.
```c
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
			}
		cout << '\n';
	}
}
```
- 다음 알고리즘은 O(1)의 시간 복잡도를 가짐
```c
#include <iostream>
using namespace std;
int main(void) {
	int a, b;
	cin >> a >> b
	cout << a+b;
}
```

- 예시
n이 1,000일 때?
n : 1,000번의 연산
nlogn : 약 10,000번의 연산
n2 : 1,000,000번의 연산
n3 : 1,000,000,000번의 연산
보통 연산 횟수가 10억을 넘어가면 1초 이상의 시간이 소요.

- 시간 복잡도를 표기할 때는 항상 큰 항과 계수만 표시
O(3n2+3) = O(n2)
현실적인 다양한 문제에서는 시간 제한이 1초 정도라고 생각하면 됌.

- 공간 복잡도를 표기할 때는 일반적으로 MB 단위로 표기합니다.
int a[1000]: 4KB
int a[1000000]: 4MB
int a[2000][2000]: 16MB

> 결론 : 프로그램을 작성할 때는 자료구조를 적절히 활용하여 성능 최적화를 노려야 한다.

----

## <a name="연결리스트"></a>연결 리스트 *<small><update 20.06.22><small>*

#### 연결 리스트의 필요성
1) 일반적으로 배열을 사용하여 데이터를 순차적으로 저장하고, 나열할 수 있음.
2) 배열을 사용하는 경우 메모리 공간이 불필요하게 낭비 될 수 있음.

- 배열 기반의 리스트
```c
#include <stdio.h>
#define INF 10000

int arr[INF];
int count = 0;

void addBack(int data) {
	arr[count] = data;
	count++;
}

void addFirst(int data) {
	for (int i =count; i >= 1; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = data;
	count++;
}

void show() {
	for (int i = 0; i < count; i++) {
		print("%d", arr[i]);
	}
}

int main(void) {
	addFirst(4);
	addFirst(5);
	addBack(7);
	addBack(6);
	show();
	return 0;
}
```
- 특정한 위치의 원소를 삭제하는 removeAt() 함수
```c
void removeAt(int index) {
	for (int i = index; i < count - 1; i++) {
		arr[i] = arr[i + 1];
	}
	count--;
}
```

- 배열 기반 리스트의 특징
1. 배열로 만들었으므로 특정한 위치의 원소에 즉시 접근할 수 있다는 장점.
2. 데이터가 들어갈 공간을 미리 메모리에 할당해야 한다는 단점.
3. 원하는 위치로의 삽입이나 삭제가 비효율적.

#### 연결 리스트
1. 일반적으로 연결 리스트는 구조체와 포인터를 함께 사용하여 구현.
2. 연결 리스트는 리스트의 중간 지점에 노드를 추가하거나 삭제할 수 있어야함.
3. 필요할 때마다 메모리 공간을 할당 받음.
4. 삽입과 삭제가 배열에 비해서 간단하다는 장점.
5. 배열과 다르게 특정 인덱스로 즉시 접근하지 못하며, 원소를 차례대로 검색해야 함.
6. 추가적인 포인터 변수가 사용되므로 메모리 공간이 낭비.

#### 단방향 연결 리스트
1. 포인터를 이용해 단방향적으로 다음 노드를 가리킴.
2. 일반적으로 연결 리스트의 시작 노드를 헤드(Head)라고 하며 별도로 관리.
3. 다음 노드가 없는 끝 노드의 다음 위치 값으로는 NULL을 넣음.

- 단방향 연결 리스트
```c
#include <stdio.h>
#include <stdlib.h> // 동적 라이브러리

typedef struct {
	int data;
	struct Node *next;
} Node;
Node *head;

void addFront(Node *root, int data) {
	Node *node = (Node*) malloc(sizeof(Node));
	node->data = data;
	node->next = root->next;
	root->next = node;
}

void removeFront(Node *root) {
	Node *front = root->next;
	root->next = front->next;
	free(front);
}

void freeAll(Node *root) {
	Node *cur = head->next;
	while (cur != NULL) {
		Node *next = cur->next;
		free(cur);
		cur = next;
	}
}

void showAll(Node *root) {
	Node *cur = head->next;
	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

int main(void) {
	head = (Node*) malloc(sizeof(Node));
	head->next = NULL;
	addFront(head, 2);
	addFront(head, 1);
	addFront(head, 7);
	addFront(head, 9);
	addFront(head, 8);
	removeFront(head);
	showAll(head);
	freeAll(head);
	return 0;
}

```

>결론
>1) 연결 리스트는 데이터를 선형적으로 저장하고 처리하는 한 방법.
>2) 기존에 배열을 이용했을 때보다 삽입과 삭제가 많은 경우에서 효율적.
>3) 다만 특정한 인덱스에 바로 참조해야 할 때가 많다면 배열을 이용하는 것이 효율적.

---

## <a name="양방향연결리스트"></a>양방향 연결 리스트 *<small><update 20.12.15><small>*

#### 양방향 연결 리스트
1. 양방향 연결 리스트는 머리(Head)와 꼬리(Tail)를 모두 가진다는 특징이 있음
2. 양방향 연결 리스트의 각 노드는 앞 노드와 뒤 노드의 정보를 모두 저장함

```c
#include <stdio.h> 
#include <stdlib.h> 

typedef struct {  
	int data;  
	struct Node *prev; 
	struct Node *next;
} Node;
Node *head, *tail;
```

HEAD <=> 일반노드 <=> TAIL

#### 양방향 연결 리스트 삽입 함수
```c
void insert(int data) {  
	Node* node = (Node*) malloc(sizeof(Node)); 
	node->data = data;
	Node* cur;
	cur = head->next;
	while (cur->data < data && cur != tail) {
	 cur = cur->next;
 }
	 Node* prev = cur->prev;
	 prev->next = node;
	 node->prev = prev;
	 cur->prev = node;
	 node->next = cur; 
}
```

#### 양방향 연결 리스트 삭제 함수
```c
void removeFront() {  
	Node* node = head->next; 
	head->next = node->next; 
	Node* next = node->next; 
	next->prev = head; 
	free(node);
}
```

#### 양방향 연결 리스트 전체 출력 함수
```c
void show() {
	 Node* cur = head->next;
	 while (cur != tail) { 
		 printf("%d ", cur->data); 
		 cur = cur->next; 
 }
}
```

#### 완성된 양방향 연결 리스트 사용하기
```c
int main(void) {  
	head = (Node*) malloc(sizeof(Node)); 
	tail = (Node*) malloc(sizeof(Node)); head->next = tail;  
	head->prev = head;  
	tail->next = tail;  
	tail->prev = head;  
	insert(2);  
	insert(1);  
	insert(3);  
	insert(9);  
	insert(7);  
	removeFront();  
	show();  
	system("pause");  
	return 0;
}
```

#### 양방향 연결 리스트 구현에 있어서 주의할 점
1. 삽입 및 삭제 기능에서의 예외 사항을 처리할 필요가 있음.
2. 더 이상 삭제할 원소가 없는데 삭제하는 경우 등을 체크해야함.

> 결론
> 1. 양방향 연결 리스트에서는 각 노드가 앞 노드와 뒤 노드의 정보를 저장하고 있음
> 2. 양방향 연결 리스트를 이용하면 리스트의 앞에서부터 혹은 뒤에서부터 모두 접근할 수 있음

----

## <a name="스택"></a>스택 *<small><update 20.12.16><small>*

#### 스택
1. 스택은 한쪽으로 들어가서 한쪽으로 나오는 자료구조 (LIFO)
2. 이러한 특성 때문에 수식 계산 등의 알고리즘에서 다방면으로 활용
- PUSH: 스택에 데이터를 넣음.
- POP: 스택에서 데이터를 빼냄.
3. 스택은 배열을 이용한 구현 방법과 연결 리스트를 이용한 구현 방법으로 나뉨.

#### 배열을 이용한 스택 구현
- 스택의 선언
```c
#include <stdio.h> 
#define SIZE 10000 
#define INF 99999999 

int stack[SIZE]; 
int top = -1;
```
- 스택 삽입 함수
```c
void push(int data) {
 if (top == SIZE - 1) { 
	printf("스택 오버플로우가 발생했습니다.\n");
	return; 
	}
	 stack[++top] = data;
}
```
- 스택 추출 함수
```c
int pop() {
 if (top == -1) { 
	printf("스택 언더플로우가 발생했습니다.\n");
	return -INF;
	} 
 return stack[top--];
}
```
- 스택 전체 출력 함수
```c
void show() {  
	printf("--- 스택의 최상단 ---\n"); 
	 for (int i = top; i >= 0; i--) {
	 printf("%d\n", stack[i]);
	 } 
	printf("--- 스택의 최하단 ---\n"); 
}
```
- 완성된 스택 사용하기
```c
int main(void) {
  push(7); 
  push(5);
  push(4);
  pop();
  push(6);
  pop();
  show();
  system("pause");
  return 0; 
}
```

#### 연결 리스트를 이용한 스택 구현
- 스택의 선언
```c
#include <stdio.h> 
#include <stdlib.h> 
#define INF 99999999

typedef struct {
	 int data;
	 struct Node *next; 
} Node;

typedef struct {
	 Node *top; 
} Stack;
```

- 스택 삽입 함수
```c
void push(Stack *stack, int data) {  
	Node *node = (Node*) malloc(sizeof(Node)); 
	node->data = data;  
	node->next = stack->top;  
	stack->top = node;
}
```

- 스택 추출 함수
```c
int pop(Stack *stack) {
	if (stack->top == NULL) { 
		 printf("스택 언더플로우가 발생했습니다.\n");
		 return -INF;
	  } 
	Node *node = stack->top; 
	int data = node->data; 
	stack->top = node->next;
	free(node);
	return data;
}
```

- 스택 전체 출력 함수
```c
void show(Stack *stack) {  
	Node *cur = stack->top; 
	printf("--- 스택의 최상단 ---\n"); 
	while (cur != NULL) {
		 printf("%d\n", cur->data); 
		 cur = cur->next;
	  } 
	printf("--- 스택의 최하단 ---\n"); 
}
```

- 완성된 스택 사용하기
```c
int main(void) { 
	Stack stack; 
	stack.top = NULL; 
	show(&stack); 
	push(&stack, 7); 
	push(&stack, 5); 
	push(&stack, 4); 
	pop(&stack); 
	push(&stack, 6); 
	pop(&stack); 
	show(&stack); 
	system("pause"); 
	return 0;
}
```
>결론
>1. 한 쪽 끝에서만 자료를 넣고 뺄 수 있는 LIFO(Last In First Out) 형식의 자료 구조
>2. 배열과 연결 리스트로 구현 가능
>3. 재귀 알고리즘을 사용하는 경우 스택이 유용하다.

---
## <a name="큐"></a>큐 *<small><update 20.12.23><small>*

1. 큐는 뒤쪽으로 들어가서 앞쪽으로 나오는 FIFO 형태의 자료구조
2. 이러한 특성 때문에 스케쥴링, 탐색 알고리즘 등에서 다방면으로 활용.

#### 배열을 이용한 구현
- 선언
```c
#include <stdio.h>
#define SIZE 10000
#define INF 99999999

int queue[SIZE];
int front = 0;
int rear = 0;
```
- 삽입
```c
void push(int data) {
  if (rear >= SIZE) {
	printf("큐 오버플로우가 발생했습니다.\n");
	return; 
	}
  queue[rear++] = data;
}
```
- 추출
```c
int pop() {
  if (front == rear) {
	printf("큐 언더플로우가 발생했습니다.\n");
    return -INF;
  }
  return queue[front++];
}
```
- 전체 출력
```c
void show() {
	printf("--- 큐의 앞 ---\n");
	for (int i = front; i < rear; i++) {
	    printf("%d\n", queue[i]);
	}
	printf("--- 큐의 뒤 ---\n"); 
}
```
- 사용
```c
int main(void) {
  push(7);
  push(5);
  push(4);
  pop();
  push(6);
  pop();
  show();
  system("pause");
  return 0;
}
```

#### 연결 리스트를 이용한 구현
- 선언
```c
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999
typedef struct {
	int data;
	struct Node *next;
} Node;
typedef struct { 
	Node *front; 
	Node *rear; 
	int count;
} Queue;
```
- 삽입
```c
void push(Queue *queue, int data) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if (queue->count == 0) {
	    queue->front = node;
  } else {
	queue->rear->next = node;
  }
  queue->rear = node;
  queue->count++;
}
```
- 추출
```c
int pop(Queue *queue) {
  if (queue->count == 0) {
	printf("큐 언더플로우가 발생했습니다.\n");
    return -INF;
  }
	Node *node = queue->front; 
	int data = node->data; 
	queue->front = node->next; 
	free(node); 
	queue->count--;
    return data;
}
```
- 전체 출력
```c
void show(Queue *queue) {
	Node *cur = queue->front; 
	printf("--- 큐의 앞 ---\n"); 
	while (cur != NULL) {
	    printf("%d\n", cur->data);
	    cur = cur->next;
	  }
	printf("--- 큐의 뒤 ---\n"); 
}
```
- 사용
```c
int main(void) {
	Queue queue;
	queue.front = queue.rear = NULL; 
	queue.count = 0;
	push(&queue, 7);
	push(&queue, 5);
	push(&queue, 4);
	pop(&queue);
	push(&queue, 6);
	pop(&queue);
	show(&queue);
	system("pause");
	return 0;
}
```
---
