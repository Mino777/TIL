//
//  main.c
//  Clang
//
//  Created by 조민호 on 2020/05/05.
//  Copyright © 2020 조민호. All rights reserved.
//

//#include <stdio.h> // stdio -> 표준입출력 라이브러리

// scanf() c언어에서 특정한 변수에 값을 넣기 위해서 scanf()를 사용
//int main(void) {
//    int a;
//    printf("숫자를 입력해주세요. \n");
//    scanf("%d", &a);
//    printf("입력한 숫자는 %d입니다. \n", a);
//    return 0;
//}

/*
 scanf()를 이용할 때 &를 이용하는 이유는?
 &는 특정한 변수의 주소를 의미.
 실제로 컴퓨터는 특정한 메모리 주소에 접근하여 데이터를 수정하므로, &를 이용.
 그렇다면 메모리 주소에 얼마만큼의 크기로 데이터를 쓸 지 결정해야 함.
 형식지정자
 int %d
 long long %lld
 double %lf
 float %f
 string %s
 char %c
 */

//#include <stdio.h>
//
//int main (void) {
//    printf("손님이 몇 명 왔나요?\n");
//    int a;
//    scanf("%d", &a);
//    if (a == 1 || a == 2) {
//        printf("2인석으로 안내합니다.₩n");
//    }
//    else if ( a == 3 || a == 4) {
//        printf("4인석으로 안내합니다.₩n");
//    }
//    else {
//        printf("대형석으로 안내합니다.₩n");
//    }
//}

//#include <stdio.h>
//
//int main(void) {
//    printf("학점을 입력하세요.\n");
//    char a;
//    scanf("%c", &a);
//    switch (a) {
//        case 'A':
//            printf("A학점 입니다.₩n"); break;
//        case 'B':
//            printf("B학점 입니다.₩n"); break;
//        case 'C':
//            printf("C학점 입니다.₩n"); break;
//        case 'D':
//            printf("D학점 입니다.₩n"); break;
//        default:
//            printf("F학점 입니다.₩n");
//    }
//}

// 반복문
// for 문
// 1) for 문 내부의 조건에 부합하면 계속해서 특정한 구문을 실행합니다.
// 2) 반복문을 탈출하고자 하는 위치에 break 구문을 삽입합니다.

// for (초기화; 조건; 반복 끝 명령어) {
    // 반복적으로 실행할 부분
// }

// 1부터 n까지의 합 출력하기
//#include <stdio.h>
//
//int main(void) {
//    int n, sum = 0;
//    printf("n을 입력하세요.\n");
//    scanf("%d", &n);
//    for ( int i = 1; i <=n; i++) {
//        sum = sum + i;
//    }
//    printf("%d\n", sum);
//}

// 함수
// 반환자료형 함수명(매개변수) {
    // 수행될 명령어
    // return 반환할 값;
//}
//
//#include <stdio.h>
//
//void calculator(int a, int b) {
//    printf("%d + %d = %d\n", a, b, a+b);
//    printf("%d - %d = %d\n", a, b, a-b);
//    printf("%d * %d = %d\n", a, b, a*b);
//    printf("%d / %d = %d\n", a, b, a/b);
//    printf("\n");
//}
//
//int main(void) {
//    calculator(3, 10);
//}

//#include <stdio.h>
//
//int factorial(int a) {
//    if (a == 1) return 1;
//    else return a * factorial(a - 1);
//}
//
//int main(void) {
//    int n;
//    printf("n 팩토리얼을 계산합니다.\n");
//    scanf("%d", &n);
//    printf("%d\n", factorial(n));
//}

// 배열
// 자료형 배열명[배열의 크기] = {초기화 값};
// 배열의 원소 중에서 최대값 찾기
//#include <stdio.h>
//#include <limits.h>
//int main(void) {
//    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};
//    int i, maxVlaue = INT_MIN;
//    for (i = 0; i < 10; i++) {
//        if (maxVlaue < a[i]) maxVlaue = a[i];
//    }
//    printf("%d\n", maxVlaue);
//}
// 문자열에 포함된 'l'개수 출력하기
//#include <stdio.h>
//
//int main(void) {
//    char a[] = "Hello, World!";
//    int count = 0;
//    for (int i = 0; i <=10; i++) {
//        if (a[i] == 'l')
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}

// 포인터
// 포인터의 개념
// 1. 지금까지의 변수는 그 자체로 자신의 자료형에 맞는 값을 저장.
// 2. 포인터 변수는 특이한 변수로, 메모리 주소를 저장.
// 포인터 관련 연산자
// 주소 연산자 & - 변수 앞에 붙어서 변수의 메모리 시작 주소 값을 구함.
// 포인터 * - 포인터 변수를 선언할 때 사용.
// 간접 참조 연산자 * - 선언된 포인터 변수가 가리키는 변수를 구함.

//#include <stdio.h>
//
//int main(void) {
//    int a = 5;
//    int *b = &a;
//    int **c = &b;
//    printf("%d\n", **c);
//}

// 배열과 포인터는 사실 내부적으로 거의 동일.
// 배열을 선언한 이후에는 그 이름 자체를 포인터 변수처럼 사용 가능.

//#include <stdio.h>
//
//int main(void) {
//    int a[] = { 1, 2, 3, 4 ,5 };
//    int *b = a;
//    printf("%d\n", b[2]);
//}

// 문자
// 1. c언어에서의 문자는 내부적으로 아스키 코드 구조를 따름.
// 2. c언어에서 문자 입출력의 내부에는 버퍼(Buffer)가 존재.

//#include <stdio.h>
//
//int main() {
//    int a; char c;
//    scanf("%d", &a);
//    printf("%d\n", a);
//    int temp;
//    // 한 자씩 받아서 파일의 끝이거나 개행 문자를 만나면 입력을 멈추므로 항상 입력 버퍼를 비움.
//    while ((temp = getchar()) != EOF && temp != '\n') { }
//    scanf("%c", &c);
//    printf("%c\n", c);
//    return 0;
//}

// 문자열
// 1. c언어에서 문자열은 배열이므로 포인터 형태로 사용 가능.
// 2. c언어에서 문자열 비교, 연산, 탐색 등의 알고리즘의 사용 방법은 각각 함수 형태로 제공.
// 문자열 함수
// strlen() 문자열의 길이를 반환
// strcmp() 문자열 1이 문자열 2보다 사전적으로 앞에 있으면 -1, 뒤에 있으면 1을 반환
// strcpy() 문자열 복사
// strcat() 문자열 1에 문자열 2를 더함.
// strstr() 문자열 1에 문자열 2가 어떻게 포함되어 있는 지를 반환.

//#include <stdio.h>
//
//int main(void) {
//    char *a = "Hello World";
//    printf("%c\n", a[1]);
//    printf("%c\n", a[3]);
//    printf("%c\n", a[7]);
//    return 0;
//}

// 컴퓨터가 변수를 처리하는 방법
// 1. c언어에서는 전역 변수, 지역 변수 등의 다양한 종류의 변수 사용
// 2. 함수에 데이터를 전달하는 방법은 값을 전달하는 방식과 주소를 전달하는 방식 두 가지가 있음.
// 전역변수, 지역변수, 정적변수, 레지스터 변수, add함수 - 값, 참조에 의한 전달 방식

// 다차원 배열과 포인터 배열
// 1. 컴퓨터에서 2차원 배열 이상을 표현할 수 있음.
// 2. c언어의 배열은 내부적으로 포인터와 동일하므로 포인터 연산으로 배열을 대체 할 수 있음.
// 3차원 배열
//#include <stdio.h>
//
//int a[2][3][3] = {{{1, 2, 3},{4, 5, 6}, {7, 8, 9}},
//                    {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
//
//int main(void) {
//    int i, j, k;
//    for (i=0; i<2; i++) {
//        for (j=0; j<3; j++) {
//            for (k=0; k<3; k++){
//                printf("%d", a[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    return 0;
//}

// 포인터 배열
//#include <stdio.h>
//
//int main(void) {
//    int a[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
//    int (*p)[5] = &a[1];
//    int i;
//    for (i=0; i<5; i++) {
//        printf("%d", p[0][i]);
//    }
//    return 0;
//}

// 동적 메모리 할당
// 1. 동적 메모리 할당 (malloc()) 을 이용해 프로그램이 실행중이 도중에 메모리 공간을 배정할 수 있음.
// 2. 동적으로 할당 받은 프로그램은 반드시 명시적으로 free() 함수를 이용해 할당 해제를 해야만 함.
// 동적으로 할당된 변수는 <힙 영역> 에 저장
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//    int *a = malloc(sizeof(int));
//    printf("%d\n", a);
//    a = malloc(sizeof(int));
//    printf("%d\n", a);
//    return 0;
//}

// 1. 전통적인 c언어에서는 스택에 선언된 변수는 따로 메모리 해제를 해주지 않아도 됨.
// 2. 반면에 동적으로 할당된 변수는 반드시 free()함수로 메모리 해제를 해주어야 함.
// 3. 메모리 해제를 하지 않으면 메모리 내의 프로세스 무게가 더해져 언젠가는 오류 발생.
// 4. 메모리 누수 방지는 코어 개발자의 핵심 역량.

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//    int *a = malloc(sizeof(int));
//    printf("%d\n", a);
//    free(a);
//    a = malloc(sizeof(int));
//    printf("%d\n", a);
//    free(a);
//    return 0;
//}

// 동적으로 문자열 처리하기
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void) {
//    char *a = malloc(100);
//    memset(a, 'A', 100);
//    for (int i = 0; i<100; i++) {
//        printf("%c", a[i]);
//    }
//    return 0;
//}

// 함수 포인터
// 1. c언어 프로그램의 모든 함수는 내부적으로 포인터 형태로 관리할 수 있음.
// 2. 함수 포인터는 자주 사용되지 않지만 알고 있으면 컴퓨터의 구조를 이해하는데 도움을 줌.
// 반환 자료형(*이름)(매개변수) = 함수명;
// 함수 포인터를 반환하여 사용하기
//#include <stdio.h>
//
//int add(int a, int b) {
//    return a + b;
//}
//
//int(*process(char* a))(int, int) {
//    printf("%s\n", a);
//    return add;
//}
//
//int main(void) {
//    printf("%d\n", process("10과 20을 더해보겠습니다.")(10,20));
//    return 0;
//}

// 구조체
// 1. 여러개의 변수를 묶어 하나의 객체를 표현하고자 할 때 사용할 수 있음.
// 2. 캐릭터, 몬스터, 학생, 좌표 등 다양한 객체를 모두 프로그래밍 언어를 이용해 표현할 수 있음.
// struct 구조체명 {
//  자료형1 변수명1;
//  자료형2 변수명2;
//  ~~
//};

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct {
//    char studentId[10];
//    char name[10];
//    int grade;
//    char major[51];
//} Student;
//
//int main (void) {
//    Student *s = malloc(sizeof(Student));
//    strcpy(s->studentId, "201412783");
//    strcpy(s->name, "mino");
//    s->grade = 4;
//    strcpy(s->major, "스포츠산업경영학과");
//    printf("학번: %s\n", s->studentId);
//    printf("이름: %s\n", s->name);
//    printf("학년: %d\n", s->grade);
//    printf("학과: %s\n", s->major);
//}

//파일을 열고 닫기
//1) 파일 입출력 변수는 FILE 형식의 포인터 변수로 선언합니다.
//2) 파일을 열 때는 fopen() 함수를 이용합니다.
//3) 파일을 닫을 때는 fclose() 함수를 이용합니다.
//
//FILE *fp;
//fp = fopen(파일 경로, 접근 방식); // 파일 관련 처리
//fclose(fp);
//파일 열기 함수인 fopen() 함수에는 파일 경로와 접근 방식을 설정할 수 있습니다.
//기본 경로는 현재 프로그램의 경로입니다.
//가장 많이 사용되는 접근 방식은 다음과 같습니다.
//r 파일에 접근하여 데이터를 읽습니다.
//w 파일에 접근하여 데이터를 기록합니다 . (파일이 이미 존재하면 덮어쓰기)
//a 파일에 접근하여 데이터를 뒤에서부터 기록합니다.
//파일 입출력 함수
//1) 기본적인 입출력을 위해서 printf()와 scanf() 함수를 사용하곤 했습니다.
//2) 파일 입출력에서는 그 대신에 fprintf()와 fscanf()가 사용됩니다.
//
//fprintf(파일 포인터, 서식, 형식지정자); fscanf(파일 포인터, 서식, 형식지정자);
//학생구조체선언하기
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct {
//  char name[20];
//  int score;
//} Student;
////학생데이터를읽어그대로출력하기
//int main(void) {
//int n, sum = 0;
//FILE *fp;
//fp = fopen("input.txt", "r"); fscanf(fp, "%d", &n);
//  Student *students = (Student*)malloc(sizeof(Student) * n);
//  for (int i = 0; i < n; i++) {
//fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->score));
//printf("이름: %s, 성적: %d\n", (students + i)->name, (students + i)->score); }
//system("pause");
//return 0; }
//성적평균을구하고메모리할당해제하기
//
//int main(void) {
//int n, sum = 0;
//FILE *fp;
//fp = fopen("input.txt", "r"); fscanf(fp, "%d", &n);
//Student *students = (Student*)malloc(sizeof(Student) * n); for (int i = 0; i < n; i++) {
//fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->score)); }
//for (int i = 0; i < n; i++) { sum += (students + i)->score;
//}
//free(students);
//fclose(fp);
//printf("점수 평균: %.2f\n", (double)sum / n); system("pause");
//return 0;
//}
