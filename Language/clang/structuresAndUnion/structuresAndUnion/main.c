//
//  main.c
//  structuresAndUnion
//
//  Created by 조민호 on 2020/04/17.
//  Copyright © 2020 조민호. All rights reserved.
//

// Example
// 1.
//#include <stdio.h>
//int main()
//{
//    struct student
//    {
//        int roll_no;
//            char name[80];
//            float fees;
//            char DOB[80];
//    };
//struct student stud1;
//     printf("\n Enter the roll number : ");
//     scanf("%d", &stud1.roll_no);
//     printf("\n Enter the name : ");
//     scanf("%s", stud1.name);
//     printf("\n Enter the fees : ");
//     scanf("%f", &stud1.fees);
//     printf("\n Enter the DOB : ");
//     scanf("%s", stud1.DOB);
//     printf("\n ********STUDENT'S DETAILS *******");
//     printf("\n ROLL No. = %d", stud1.roll_no);
//     printf("\n NAME = %s", stud1.name);
//     printf("\n FEES = %f", stud1.fees);
//     printf("\n DOB = %s", stud1.DOB);
//     return 0;
//}

// 2.
//#include <stdio.h>
//int main()
//{
//    typedef struct complex
//    {
//        int real;
//        int imag;
//     }COMPLEX;
//     COMPLEX c1, c2, sum_c, sub_c;
//int option;
//do
//{
//          printf("\n ******** MAIN MENU *********");
//          printf("\n 1. Read the complex numbers");
//          printf("\n 2. Display the complex numbers");
//          printf("\n 3. Add the complex numbers");
//          printf("\n 4. Subtract the complex numbers");
//          printf("\n 5. EXIT");
//          printf("\n Enter your option : ");
//          scanf("%d", &option);
//          switch(option)
// {
//          case 1:
//                    printf("\n Enter the real and imaginary parts of the first complex number : ");
//                    scanf("%d %d", &c1.real, &c1.imag);
//                    printf("\n Enter the real and imaginary parts of the second complex number : ");
//                    scanf("%d %d", &c2.real, &c2.imag);
//                    break;
//          case 2:
//                    printf("\n The first complex number is : %d+%di",
//                    c1.real,c1.imag);
//                    printf("\n The second complex number is : %d+%di",
//                    c2.real,c2.imag);
//                    break;
//          case 3:
//                    sum_c.real = c1.real + c2.real;
//                    sum_c.imag = c1.imag + c2.imag;
//                    printf("\n The sum of two complex numbers is : %d+%di",sum_c.real, sum_c.imag);
//                    break;
//          case 4:
//                    sub_c.real = c1.real - c2.real;
//                    sub_c.imag = c1.imag - c2.imag;
//                    printf("\n The difference between two complex numbers is :%d+%di", sub_c.real, sub_c.imag);
//                    break;
//                            }
//                            }while(option != 5);
//                                return 0;
//}
// 3.
//#include <stdio.h>
//int main()
//{
//     struct DOB
//{
// int day;
// int month;
// int year;
//};
//struct student
//{
// int roll_no;
//          char name[100];
//          float fees;
//          struct DOB date;
//};
//struct student stud1;
//     printf("\n Enter the roll number : ");
//     scanf("%d", &stud1.roll_no);
//     printf("\n Enter the name : ");
//     scanf("%s", stud1.name);
//     printf("\n Enter the fees : ");
//     scanf("%f", &stud1.fees);
//     printf("\n Enter the DOB : ");
//     scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);
//     printf("\n ********STUDENT'S DETAILS *******");
//     printf("\n ROLL No. = %d", stud1.roll_no);
//     printf("\n NAME = %s", stud1.name);
//     printf("\n FEES = %f", stud1.fees);
//     printf("\n DOB = %d – %d – %d", stud1.date.day, stud1.date.month, stud1.date.year);
//     return 0;
//}
// 4.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//struct student
//{
// int roll_no;
//          char name[80];
// int fees;
//          char DOB[80];
//};
//     struct student stud[50];
//int n, i, num, new_rolno;
//int new_fees;
//     char new_DOB[80], new_name[80];
//     printf("\n Enter the number of students : ");
//     scanf("%d", &n);
//     for(i=0;i<n;i++)
//{
//          printf("\n Enter the roll number : ");
//          scanf("%d", &stud[i].roll_no);
//          printf("\n Enter the name : ");
//          gets(stud[i].name);
//          printf("\n Enter the fees : ");
//          scanf("%d",&stud[i].fees);
//          printf("\n Enter the DOB : ");
//          gets(stud[i].DOB);
//}
//     for(i=0;i<n;i++)
//{
//          printf("\n ********DETAILS OF STUDENT %d*******", i+1);
//          printf("\n ROLL No. = %d", stud[i].roll_no);
//          printf("\n NAME = %s", stud[i].name);
//          printf("\n FEES = %d", stud[i].fees);
//          printf("\n DOB = %s", stud[i].DOB);
//}
//     printf("\n Enter the student number whose record has to be edited : ");
//     scanf("%d", &num);
//     num= num-1;
//     printf("\n Enter the new roll number : ");
//     scanf("%d", &new_rolno);
//    printf("\n Enter the new name : ");
//     gets(new_name);
//     printf("\n Enter the new fees : ");
//     scanf("%d", &new_fees);
//     printf("\n Enter the new DOB : ");
//     gets(new_DOB);
//     stud[num].roll_no = new_rolno;
//     strcpy(stud[num].name, new_name);
//     stud[num].fees = new_fees;
//     strcpy (stud[num].DOB, new_DOB);
//     for(i=0;i<n;i++)
//{
//          printf("\n ********DETAILS OF STUDENT %d*******", i+1);
//          printf("\n ROLL No. = %d", stud[i].roll_no);
//          printf("\n NAME = %s", stud[i].name);
//          printf("\n FEES = %d", stud[i].fees);
//          printf("\n DOB = %s", stud[i].DOB);
//}
//     return 0;
//}
// 5.
//#include <stdio.h>
//typedef struct distance
//{
//     int kms;
//int meters;
//}DISTANCE;
//DISTANCE add_distance (DISTANCE, DISTANCE);
//DISTANCE subtract_distance (DISTANCE, DISTANCE);
//DISTANCE d1, d2, d3, d4;
//int main()
//{
//int option;
//do
//{
//          printf("\n ******** MAIN MENU *********");
//          printf("\n 1. Read the distances ");
//          printf("\n 2. Display the distances");
//          printf("\n 3. Add the distances");
//          printf("\n 4. Subtract the distances");
//          printf("\n 5. EXIT");
//          printf("\n Enter your option : ");
//          scanf("%d", &option);
//          switch(option)
// {
//               case 1:
//                    printf("\n Enter the first distance  in kms and meters: ");
//                    scanf("%d %d", &d1.kms, &d1.meters);
//                    printf("\n Enter the second distance  in kms and meters: ");
//                    scanf("%d %d", &d2.kms, &d2.meters);
//                    break;
//               case 2:
//                    printf("\n The first distance is : %d kms %d meters", d1.kms, d1.meters);
//                    printf("\n The second distance is : %d kms %d meters", d2.kms, d2.meters);
//                    break;
//               case 3:
//                    d3 = add_distance(d1, d2);
//                    printf("\n The sum of two distances is : %d kms %d meters", d3.kms, d3.meters);
//                    break;
//               case 4:
//                    d4 = subtract_distance(d1, d2);
//                    printf("\n The difference between two distances is : %d kms %d meters", d4.kms, d4.meters);
//                    break;
//          }
//              }while(option != 5);
//              return 0;
//         }
//         DISTANCE add_distance(DISTANCE d1, DISTANCE d2)
//         {
//              DISTANCE sum;
//         sum.meters = d1.meters + d2.meters;
//              sum.kms = d1.kms + d2.kms;
//              while (sum.meters >= 1000)
//         {
//                  sum.meters = sum.meters % 1000;
//                  sum.kms += 1;
//         }
//         return sum;
//         }
//         DISTANCE subtract_distance(DISTANCE d1, DISTANCE d2)
//         {
//              DISTANCE sub;
//              if(d1.kms > d2.kms)
//         {
//          sub.meters = d1.meters - d2.meters;
//                  sub.kms = d1.kms - d2.kms;
//         }
//         else
//         {
//          sub.meters = d2.meters - d1.meters;
//                  sub.kms = d2.kms - d1.kms;
//         }
//              if(sub.meters < 0)
//         {
//             sub.kms = sub.kms - 1;
//             sub.meters = sub.meters + 1000;
//         }
//         return sub;
//}
// 6.
//#include <stdio.h>
//struct student
//{
//int r_no;
//     char name[20];
//     char course[20];
//int fees;
//};
//int main()
//{
//     struct student stud1, *ptr_stud1;
//     ptr_stud1 = &stud1;
//     printf("\n Enter the details of the student :");
//     printf("\n Enter the Roll Number =");
//     scanf("%d", &ptr_stud1 -> r_no);
//     printf("\n Enter the Name = " );
//     gets(ptr_stud1 -> name);
//     printf("\n Enter the Course = ");
//      gets(ptr_stud1 -> course);
//     printf("\n Enter the Fees = ");
//     scanf("%d", &ptr_stud1 -> fees);
//     printf("\n DETAILS OF THE STUDENT");
//     printf("\n ROLL NUMBER = %d", ptr_stud1 -> r_no);
//     printf("\n NAME = %s", ptr_stud1 -> name);
//     printf("\n COURSE = %s", ptr_stud1 -> course);
//     printf("\n FEES = %d", ptr_stud1 -> fees);
//     return 0;
//}
// 7.
//#include <stdio.h>
//struct student
//{
//int r_no;
//     char name[20];
//     char course[20];
//int fees;
//};
//struct student *ptr_stud[10];
//int main()
//{
//int i, n;
//     printf("\n Enter the number of students : ");
//     scanf("%d", &n);
//     for(i=0;i<n;i++)
//{
//     ptr_stud[i] = (struct student *)malloc(sizeof(struct student));
//     printf("\n Enter the data for student %d ", i+1);
//     printf("\n ROLL NO.: ");
//     scanf("%d", &ptr_stud[i]->r_no);
//     printf("\n NAME: ");
//     gets(ptr_stud[i]->name);
//     printf("\n COURSE: ");
//     gets(ptr_stud[i]->course);
//     printf("\n FEES: ");
//     scanf("%d", &ptr_stud[i]->fees);
//}
//printf("\n DETAILS OF STUDENTS");
//for(i=0;i<n;i++)
//{
//     printf("\n ROLL NO. = %d", ptr_stud[i]->r_no);
//     printf("\n NAME = %s", ptr_stud[i]->name);
//     printf("\n COURSE = %s", ptr_stud[i]->course);
//     printf("\n FEES = %d", ptr_stud[i]->fees);
//}
//return 0;
//}
// 8.
//#include <stdio.h>
//struct student
//{
//int r_no;
//     char name[20];
//     char course[20];
//int fees;
//};
//void display (struct student *);
//int main()
//{
//     struct student *ptr;
//     ptr = (struct student *)malloc(sizeof(struct student));
//     printf("\n Enter the data for the student ");
//     printf("\n ROLL NO.: ");
//     scanf("%d", &ptr->r_no);
//     printf("\n NAME: ");
//     gets(ptr->name);
//     printf("\n COURSE: ");
//     gets(ptr->course);
//     printf("\n FEES: ");
//     scanf("%d", &ptr->fees);
//     display(ptr);
//         return 0;
//    }
//    void display(struct student *ptr)
//    {
//         printf("\n DETAILS OF STUDENT");
//         printf("\n ROLL NO. = %d", ptr->r_no);
//         printf("\n NAME = %s", ptr->name);
//         printf("\n COURSE = %s ", ptr->course);
//         printf("\n FEES = %d", ptr->fees);
//    }
//
// Programming Exercise
// 1.
//Declare a structure that represents the following
//hierarchical information.
// (a)     Student
//
// (b)     Roll Number
//
// (c)     Name
//
// (i)     First name
//
// (ii)     Middle Name
//
// (iii)     Last Name
//
// (d)     Sex
//
// (e)     Date of Birth
//
// (i)     Day
//
// (ii)     Month
//
// (iii)     Year
//
// (f)     Marks
// (i)    English
//
// (ii)     Mathematics
//
// (iii)     Computer Science
//
//#include <stdio.h>
//
//struct Name {
//    char firstName[10];
//    char middleName[10];
//    char lastName[10];
//};
//
//struct BirthDay {
//    int day;
//    int month;
//    int year;
//};
//
//struct Marks {
//    float english;
//    float math;
//    float cs;
//};
//
//struct student {
//    int rollNum;
//    struct Name name;
//    int sex;
//    struct BirthDay birthDay;
//    struct Marks marks;
//};
//
//void readData(struct student *student1);
//
//void showData(struct student *student1);
//
//
//int main() {
//    struct student student1;
//    readData(&student1);
//    showData(&student1);
//
//    return 0;
//}
//
//void readData(struct student *student1) {
//    printf("Enter student data: ");
//    char temp[100];
//    fgets(temp, 100, stdin);
//    sscanf(temp, "%d %s %s %s %d %d %d %d %f %f %f",
//           &student1->rollNum,
//           student1->name.firstName, student1->name.middleName, student1->name.lastName,
//           &student1->sex, &student1->birthDay.day, &student1->birthDay.month, &student1->birthDay.year,
//           &student1->marks.english, &student1->marks.math, &student1->marks.cs);
//}
//
//void showData(struct student *student1) {
//    printf("Student data: \n");
//    printf("%d %s %s %s %d %d %d %d %f %f %f",
//           student1->rollNum,
//           student1->name.firstName, student1->name.middleName, student1->name.lastName,
//           student1->sex, student1->birthDay.day, student1->birthDay.month, student1->birthDay.year,
//           student1->marks.english, student1->marks.math, student1->marks.cs);
//}
//
//
// 2.
// Define a structure to store the name, an array
//marks[] which stores the marks of three different
//subjects, and a character grade. Write a program
//to display the details of the student whose name
//is entered by the user. Use the structure definition
//of the first question to make an array of students.
//Display the name of the students who have secured
//less than 40% of the aggregate.
//
//#include <stdio.h>
//#include <string.h>
//
//struct Name {
//    char firstName[10];
//    char middleName[10];
//    char lastName[10];
//};
//
//struct BirthDay {
//    int day;
//    int month;
//    int year;
//};
//
//struct Marks {
//    float english;
//    float math;
//    float cs;
//};
//
//struct student {
//    int rollNum;
//    struct Name name;
//    int sex;
//    struct BirthDay birthDay;
//    struct Marks marks;
//};
//
//void readData(struct student *student1);
//
//void showData(struct student *student1);
//
//void getSbInfo(struct Name someBody, int n, struct student students[n]);
//
//int sameName(struct Name someBody, struct student *student1);
//
//// test data
//// 10 F1 M1 L1 0 1 6 1997 100 100 90
//// 11 F2 M2 L2 1 2 6 1997 100 100 99
//int main() {
//    int n;
//    n = 2;
//    struct student students[n];
//    for (int i = 0; i < n; ++i) {
//        readData(&students[i]);
//    }
//    struct Name someBody;
//    printf("Enter the full name: ");
//    char temp[30];
//    fgets(temp, 30, stdin);
//    sscanf(temp, "%s %s %s", someBody.firstName, someBody.middleName, someBody.lastName);
//    getSbInfo(someBody, n, students);
//
//    return 0;
//}
//
//void readData(struct student *student1) {
//    printf("Enter student data: ");
//    char temp[100];
//    fgets(temp, 100, stdin);
//    sscanf(temp, "%d %s %s %s %d %d %d %d %f %f %f",
//           &student1->rollNum,
//           student1->name.firstName, student1->name.middleName, student1->name.lastName,
//           &student1->sex, &student1->birthDay.day, &student1->birthDay.month, &student1->birthDay.year,
//           &student1->marks.english, &student1->marks.math, &student1->marks.cs);
//}
//
//void showData(struct student *student1) {
//    printf("Student data: \n");
//    printf("%d %s %s %s %d %d %d %d %.2f %.2f %.2f",
//           student1->rollNum,
//           student1->name.firstName, student1->name.middleName, student1->name.lastName,
//           student1->sex, student1->birthDay.day, student1->birthDay.month, student1->birthDay.year,
//           student1->marks.english, student1->marks.math, student1->marks.cs);
//}
//
//
//void getSbInfo(struct Name someBody, int n, struct student students[n]) {
//    for (int j = 0; j < n; ++j) {
//        if (sameName(someBody, &students[j])) {
//            showData(&students[j]);
//            break;
//        }
//    }
//}
//
//int sameName(struct Name someBody, struct student *student1) {
//    if (strcmp(someBody.firstName, student1->name.firstName) != 0) return 0;
//    if (strcmp(someBody.middleName, student1->name.middleName) != 0) return 0;
//    if (strcmp(someBody.lastName, student1->name.lastName) != 0) return 0;
//
//    return 1;
//}
//
//3.
//Modify Question 2 to print each student’s average
//marks and the class average (that includes average
//of all the student’s marks).
//
//#include <stdio.h>
//#include <string.h>
//
//struct Name {
//    char firstName[10];
//    char middleName[10];
//    char lastName[10];
//};
//
//struct BirthDay {
//    int day;
//    int month;
//    int year;
//};
//
//struct Marks {
//    float english;
//    float math;
//    float cs;
//};
//
//struct student {
//    int rollNum;
//    struct Name name;
//    int sex;
//    struct BirthDay birthDay;
//    struct Marks marks;
//};
//
//void readData(struct student *student1);
//
//void showData(struct student *student1);
//
//float getStudAvgMark(struct student *student1);
//
//float getClassAvgMark(int n, struct student students[n]);
//
//// test data
//// 10 F1 M1 L1 0 1 6 1997 100 100 90
//// 11 F2 M2 L2 1 2 6 1997 100 100 99
//int main() {
//    int n;
//    n = 2;
//    struct student students[n];
//    for (int i = 0; i < n; ++i) {
//        readData(&students[i]);
//    }
//
//    float avg1;
//    avg1 = getStudAvgMark(&students[0]);
//    printf("Avg Marks of the first one: %.2f\n", avg1);
//
//    float avg11;
//    avg11 = getStudAvgMark(&students[1]);
//    printf("Avg Marks of the snd one: %.2f\n", avg11);
//
//    float avg2;
//    avg2 = getClassAvgMark(n, students);
//    printf("Avg Marks of the class: %.2f", avg2);
//
//    return 0;
//}
//
//void readData(struct student *student1) {
//    printf("Enter student data: ");
//    char temp[100];
//    fgets(temp, 100, stdin);
//    sscanf(temp, "%d %s %s %s %d %d %d %d %f %f %f",
//           &student1->rollNum,
//           student1->name.firstName, student1->name.middleName, student1->name.lastName,
//           &student1->sex, &student1->birthDay.day, &student1->birthDay.month, &student1->birthDay.year,
//           &student1->marks.english, &student1->marks.math, &student1->marks.cs);
//}
//
//void showData(struct student *student1) {
//    printf("Student data: \n");
//    printf("%d %s %s %s %d %d %d %d %.2f %.2f %.2f",
//           student1->rollNum,
//           student1->name.firstName, student1->name.middleName, student1->name.lastName,
//           student1->sex, student1->birthDay.day, student1->birthDay.month, student1->birthDay.year,
//           student1->marks.english, student1->marks.math, student1->marks.cs);
//}
//
//
//float getStudAvgMark(struct student *student1) {
//    float avg = 0;
//    avg = avg + student1->marks.english +
//          student1->marks.math +
//          student1->marks.cs;
//    return avg / 3;
//}
//
//float getClassAvgMark(int n, struct student students[n]) {
//    float avg = 0;
//    for (int i = 0; i < n; ++i) {
//        avg += getStudAvgMark(&students[i]);
//    }
//    return avg / n;
//}
//
//
//4.
//
// Make an array of students as illustrated in Question 1
//and write a program to display the details of the
//student with the given Date of Birth.
//
//#include <stdio.h>
//#include <string.h>
//
//struct Name {
//    char firstName[10];
//    char middleName[10];
//    char lastName[10];
//};
//
//struct BirthDay {
//    int day;
//    int month;
//    int year;
//};
//
//struct Marks {
//    float english;
//    float math;
//    float cs;
//};
//
//struct student {
//    int rollNum;
//    struct Name name;
//    int sex;
//    struct BirthDay birthDay;
//    struct Marks marks;
//};
//
//void readData(struct student *student1);
//
//void showData(struct student *student1);
//
//int sameBirth(struct BirthDay birthDay, struct student student1);
//
//void getBirthData(struct BirthDay birthDay, int n, struct student students[n]);
//
//
//// test data
//// 10 F1 M1 L1 0 1 6 1997 100 100 90
//// 11 F2 M2 L2 1 2 6 1997 100 100 99
//int main() {
//    int n;
//    n = 2;
//    struct student students[n];
//    for (int i = 0; i < n; ++i) {
//        readData(&students[i]);
//    }
//
//    struct BirthDay birthDay;
//    char temp[30];
//    printf("Enter birth data(day mon year): ");
//    fgets(temp, 30, stdin);
//    sscanf(temp, "%d %d %d", &birthDay.day, &birthDay.month, &birthDay.year);
//    getBirthData(birthDay, n, students);
//
//    return 0;
//}
//
//void readData(struct student *student1) {
//    printf("Enter student data: ");
//    char temp[100];
//    fgets(temp, 100, stdin);
//    sscanf(temp, "%d %s %s %s %d %d %d %d %f %f %f",
//           &student1->rollNum,
//           student1->name.firstName, student1->name.middleName, student1->name.lastName,
//           &student1->sex, &student1->birthDay.day, &student1->birthDay.month, &student1->birthDay.year,
//           &student1->marks.english, &student1->marks.math, &student1->marks.cs);
//}
//
//void showData(struct student *student1) {
//    printf("Student data: \n");
//    printf("%d %s %s %s %d %d %d %d %.2f %.2f %.2f",
//           student1->rollNum,
//           student1->name.firstName, student1->name.middleName, student1->name.lastName,
//           student1->sex, student1->birthDay.day, student1->birthDay.month, student1->birthDay.year,
//           student1->marks.english, student1->marks.math, student1->marks.cs);
//}
//
//int sameBirth(struct BirthDay birthDay, struct student student1) {
//    if (birthDay.day != student1.birthDay.day || birthDay.month != student1.birthDay.month
//        || birthDay.year != student1.birthDay.year)
//        return 0;
//    return 1;
//}
//
//void getBirthData(struct BirthDay birthDay, int n, struct student students[n]) {
//    for (int i = 0; i < n; ++i) {
//        if (sameBirth(birthDay, students[i]))
//            showData(&students[i]);
//    }
//}
//
//
//
//
//6.
// Write a program to calculate the distance between
//the given points (6,3) and (2,2).
//
//#include <stdio.h>
//#include <math.h>
//
//typedef struct point {
//    int x;
//    int y;
//} POINT;
//
//double getDistance(POINT p1, POINT p2);
//
//int main() {
//    POINT p1 = {6, 3};
//    POINT p2 = {2, 2};
//    double distance;
//    distance = getDistance(p1, p2);
//    printf("The distance between p1 and p2: %f", distance);
//
//    return 0;
//}
//
//double getDistance(POINT p1, POINT p2) {
//    double distance;
//    distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
//    return distance;
//}
//8.
//Write a program to add and subtract height 6'2" and 5'4".
//
//#include <stdio.h>
//
//typedef struct ft {
//    int f;
//    int s;
//} FT;
//
//FT subFt(FT ft1, FT ft2);
//
//FT addFt(FT ft1, FT ft2);
//
//void showFt(FT ft);
//
//int main() {
//    FT ft1 = {6, 2};
//    FT ft2 = {5, 4};
//    FT ft3;
//    ft3 = subFt(ft1, ft2);
//    showFt(ft3);
//
//    ft3 = addFt(ft1, ft2);
//    showFt(ft3);
//
//    return 0;
//}
//
//FT subFt(FT ft1, FT ft2) {
//    FT ft;
//    if (ft1.f > ft2.f) {
//        ft.f = ft1.f - ft2.f;
//        ft.s = ft1.s - ft2.s;
//    } else {
//        ft.f = ft2.f - ft1.f;
//        ft.s = ft2.s - ft1.s;
//    }
//    if (ft.s < 0) {
//        ft.f -= 1;
//        ft.s += 12;
//    }
//    return ft;
//}
//
//FT addFt(FT ft1, FT ft2) {
//    FT ft;
//    ft.f = ft1.f + ft2.f;
//    ft.s = ft1.s + ft2.s;
//    if (ft.s >= 12) {
//        ft.f += 1;
//        ft.s -= 12;
//    }
//    return ft;
//}
//
//void showFt(FT ft) {
//    printf("%d'%d''\n", ft.f, ft.s);
//}
//
//
//
//9.
//Write a program to add and subtract 10hrs 20mins
//50sec and 5hrs 30min 40sec.
//
//#include <stdio.h>
//
//typedef struct time {
//    int hour;
//    int minute;
//    int sec;
//} TIME;
//
//TIME addTime(TIME t1, TIME t2);
//
//TIME subTime(TIME t1, TIME t2);
//
//void showTime(TIME t);
//
//int main() {
//    TIME t1 = {10, 20, 50};
//    TIME t2 = {5, 30, 40};
//    TIME t3;
//    t3 = addTime(t1, t2);
//    showTime(t3);
//
//    t3 = subTime(t1, t2);
//    showTime(t3);
//
//    return 0;
//}
//
//TIME addTime(TIME t1, TIME t2) {
//    TIME t;
//    t.sec = t1.sec + t2.sec;
//    t.minute = t1.minute + t2.minute;
//    t.hour = t1.hour + t2.hour;
//    if (t.sec >= 60) {
//        t.sec -= 60;
//        t.minute += 1;
//    }
//    if (t.minute >= 60) {
//        t.minute -= 60;
//        t.hour += 1;
//    }
//    return t;
//}
//
//TIME subTime(TIME t1, TIME t2) {
//    TIME t;
//    if (t1.hour * 3600 + t1.minute * 60 + t1.sec
//        > t2.hour * 3600 + t2.minute * 60 + t2.sec) {
//        t.sec = t1.sec - t2.sec;
//        t.minute = t1.minute - t2.minute;
//        t.hour = t1.hour - t2.hour;
//    } else {
//        t.sec = t2.sec - t1.sec;
//        t.minute = t2.minute - t1.minute;
//        t.hour = t2.hour - t1.hour;
//    }
//    if (t.sec < 0) {
//        t.sec += 60;
//        t.minute -= 1;
//    }
//    if (t.minute < 0) {
//        t.minute += 60;
//        t.hour -= 1;
//    }
//    return t;
//}
//
//void showTime(TIME t) {
//    printf("%dh%dm%ds\n", t.hour, t.minute, t.sec);
//}
//
//
//
//
//
//
