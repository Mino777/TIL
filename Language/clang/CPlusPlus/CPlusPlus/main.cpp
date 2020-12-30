//
//  main.cpp
//  CPlusPlus
//
//  Created by 조민호 on 2020/12/30.
//

// C++?
// 절차적 프로그래밍 언어인 c언어에 객체 지향 개념을 추가한 언어

// 변수
#include <iostream>
using namespace std;
//
//int main() {
//    int x;
//    x = 123;
//    x = x + 2;
//
//    cout << x << endl;
//
//    return 0;
//}

// 출력
//
//int main() {
//    cout << "hello, world!" << endl;
//    cout << "woderful c++" << endl;
//}

// 입력
//
//int main() {
//    char name[1000];
//    cout << "성함과 전화번호를 입력하세요." << endl;
//    cin.getline(name, sizeof(name));
//    cout << "구매금액을 입력하세요." << endl;
//    int caltot, calpoint;
//    cin >> caltot;
//    calpoint = caltot * 0.01;
//    cout << name << "님 금회 발생 포인트 = " << calpoint << "점 입니다." << endl;
//}

// if문
//int main() {
//    int number;
//    cin >> number;
//
//    if (number % 2 == 0) {
//        cout << "짝수입니다." << endl;
//    } else {
//        cout << "홀수입니다." << endl;
//    }
//
//    return 0;
//}

// switch문
//int main() {
//
//    int number;
//    cin >> number;
//
//    switch (number) {
//        case 1:
//            cout << "1입니다." << endl;
//            break;
//        case 2:
//            cout << "2입니다." << endl;
//            break;
//        case 3:
//            cout << "3입니다." << endl;
//            break;
//        default:
//            break;
//    }
//
//    return 0;
//}

// for문
//int main() {
//    int student[3] = {1, 2, 3};
//
////    for (int i = 0; i < 3; i++) {
////        cout << i + 1 << "번째 학생의 학번은 " << student[i] << "입니다." << endl;
////    }
//
//    for (int i = 1; i < 10; i++) {
//        for (int j = 1; j < 10; j++) {
//            cout << i << " x " << j << " = " << i * j << endl;
//        }
//    }
//
//    return 0;
//}

// while문
//int main() {
//    bool loop = true;
//    char input;
//    while (loop) {
//        cout << "asdf";
//        cin >> input;
//
//        if (input == 't') {
//            loop = false;
//        }
//    }
//
//    return 0;
//}

// 함수
//int plusFunction(int x, int y) {
//    return x + y;
//}
//
//int main() {
//    int x,y,z;
//    cin >> x >> y;
//
//    z = plusFunction(x, y);
//    cout << z << endl;
//
//    return 0;
//}

// 구조체
//struct Student {
//    string name;
//    int number;
//    int age;
//};
//
//int main() {
//    Student stu;
//    stu.name = "조민호";
//    stu.number = 111;
//    stu.age = 25;
//
//    cout << stu.name << endl << stu.number << endl << stu.age << endl;
//}

// 배열
//int main() {
//    int board[5][4] = {
//        {0, 1, 2, 3},
//        {4, 5, 6, 7},
//        {8, 9, 10, 11},
//        {12, 13, 14, 15},
//        {16, 17, 18, 19}
//    };
//
//    cout << board[2][0] << endl;
//}
// 포인터
//int main() {
//    int x = 10;
//    int* x_ptr;
//    x_ptr = &x;
//
//    cout << "X값:" << x << endl;
//    cout << "X의 주소값:" << &x << endl;
//    cout << "X_ptr의 값:" << x_ptr << endl;
//    cout << "X_ptr이 가르키는값:" << *x_ptr << endl;
//    return 0;
//}

//int main() {
//    int arr[3] = {1, 2, 3};
//    int* x_ptr;
//    x_ptr = &arr[0];
//    x_ptr++;
//    cout << *x_ptr << endl;
//
//    return 0;
//}

//int main() {
//    int x = 10;
//    int* x_ptr = &x;
//    int** x_ptr_ptr = &x_ptr;
//
//    cout << x << endl << *x_ptr << endl << **x_ptr_ptr << endl;
//
//    return 0;
//}

// 동적할당
int main(void) {
    int *p = new int[5];
 
    for (int i = 0; i < 5; i++) {
        p[i] = i + 1;
    }
 
    for (int i = 0; i < 5; i++) {
        cout << p[i] << "\n";
    }
 
    delete[] p;
 
    return 0;
}


