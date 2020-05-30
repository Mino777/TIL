//
//  main.c
//  String
//
//  Created by 조민호 on 2020/04/11.
//  Copyright © 2020 조민호. All rights reserved.
//

// Programming Example
// 1.
//#include <stdio.h>
//int main()
//{
//    char str[100], i = 0, length;
//    printf("\n Enter the string : ");
//    gets(str);
//    while(str[i] != '\0')
//        i++;
//    length = i;
//    printf("\n The length of the string is : %d", length);
//    return 0;
//}

// 2.
//#include <stdio.h>
//int main()
//{
//    char str[100], upper_str[100];
//    int i=0;
//    printf("\n Enter the string :");
//    gets(str);
//    while(str[i] != '\0')
//    {
//        if(str[i]>='a' && str[i]<='z')
//            upper_str[i] = str[i] - 32;
//        else
//            upper_str[i] = str[i];
//        i++;
//    }
//    upper_str[i] = '\0';
//    printf("\n The string converted into upper case is : ");
//    puts(upper_str);
//    return 0;
//}

// 3.
//#include <stdio.h>
//int main()
//{
//    char Dest_Str[100], Source_Str[50];
//    int i=0, j=0;
//    printf("\n Enter the source string : ");
//    gets(Source_Str);
//    printf("\n Enter the destination string : ");
//    gets(Dest_Str);
//    while(Dest_Str[i] != '\0')
//        i++;
//        while(Source_Str[j] != '\0')
//        {
//            Dest_Str[i] = Source_Str[j];
//            i++;
//            j++;
//        }
//    Dest_Str[i] = '\0';
//    printf("\n After appending, the destination string is : ");
//    puts(Dest_Str);
//    return 0;
//}

// 4.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str1[50], str2[50];
//    int i=0, len1=0, len2=0, same=0;
//    printf("\n Enter the first string : ");
//    gets(str1);
//    printf("\n Enter the second string : ");
//    gets(str2);
//    len1 = strlen(str1);
//    len2 = strlen(str2);
//    if(len1 == len2)
//    {
//        while(i<len1)
//        {
//            if(str1[i] == str2[i])
//                i++;
//            else break;
//        }
//            if(i==len1)
//     {
//         same=1;
//    printf("\n The two strings are equal");
//     }
//    }
//    if(len1!=len2)
//        printf("\n The two strings are not equal");
//        if(same == 0)
//        {
//            if(str1[i]>str2[i])
//                printf("\n String 1 is greater than string 2");
//            else if(str1[i]<str2[i])
//                printf("\n String 2 is greater than string 1");
//        }
//    return 0;
//}

// 5.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[100], reverse_str[100], temp;
//    int i=0, j=0;
//    printf("\n Enter the string : ");
//    gets(str);
//    j=strlen(str)-1;
//    while(i<j)
//    {
//        temp = str[j];
//        str[j] = str[i];
//        str[i] = temp;
//        i++;
//        j--;
//    }
//    printf("\n The reversed string is : ");
//    puts(str);
//    return 0;
//}

// 6.
//#include <stdio.h>
//int main()
//{
//    char str[100], substr[100];
//    int i=0, j=0, n, m;
//    printf("\n Enter the main string : ");
//    gets(str);
//    printf("\n Enter the position from which to start the substring: ");
//    scanf("%d", &m);
//    printf("\n Enter the length of the substring: ");
//    scanf("%d", &n);
//    i=m;
//    while(str[i] != '\0' && n>0)
//    {
//        substr[j] = str[i];
//        i++;
//        j++;
//        n--;
//    }
//    substr[j] = '\0';
//    printf("\n The substring is : ");
//    puts(substr);
//    return 0;
//}

// 7.
//#include <stdio.h>
//int main() {
//char text[100], str[20], ins_text[100];
//    int i=0, j=0, k=0, pos;
//    printf("\n Enter the main text : ");
//    gets (text);
//    //scanf("%s", text);
//    printf("\n Enter the string to be inserted : ");
//    gets(str);
//    //scanf("%s", str);
//    printf("\n Enter the position at which the string has to be inserted : ");
//    scanf("%d", &pos);
//    while (text[i] != '\0')
//    {
//        if ( i == pos )
//        {
//            while ( str[k] != '\0')
//            {
//                ins_text[j] = str[k]; j++; k++;
//            }
//            break;
//        }
//        ins_text[j] = text[i]; j++; i++;
//    }
//    while (text[i] != '\0')
//    {
//        ins_text[j] = text[i]; j++; i++;
//        ins_text[j] = '\0';
//    }
//    if ( pos == i )
//        printf("\n The new string is : %%s\n", ins_text, str);
//    else
//    {
//        printf("\n The new string is : ");
//        puts(ins_text);
//    }
//    getchar();
//    return 0;
//}

// 8.
//#include <stdio.h>
//int main()
//{
//    char text[200], str[20], new_text[200];
//    int i=0, j=0, found=0, k, n=0, copy_loop=0;
//    printf("\n Enter the main text : ");
//    gets(text);
//    printf("\n Enter the string to be deleted : ");
//    gets(str);
//    while(text[i]!='\0')
//    {
//        j=0, found=0, k=i;
//        while(text[k]==str[j] && str[j]!='\0')
//        {
//            k++;
//            j++;
//        }
//    if(str[j]=='\0')
//        copy_loop=k;
//        new_text[n] = text[copy_loop];
//        i++;
//        copy_loop++;
//        n++;
//    }
//    str[n]='\0';
//    printf("\n The new string is : ");
//    puts(str);
//    getchar();
//    return 0;
//}

//9.
//#include <stdio.h>
//int main()
//{
//char str[200], pat[20], new_str[200], rep_pat[100];
//int i=0, j=0, k, n=0, copy_loop=0, rep_index=0;
//printf("\n Enter the string : ");
//gets(str);
//printf("\n Enter the pattern to be replaced: ");
//gets(pat);
//printf("\n Enter the replacing pattern: ");
//gets(rep_pat);
//while(str[i]!='\0')
//{
//    j=0, k=i;
//    while(str[k]==pat[j] && pat[j]!='\0')
//    {
//        k++;
//        j++;
//    }
//    if(pat[j]=='\0')
//     {
//         copy_loop=k;
//         while(rep_pat[rep_index] !='\0')
//         {
//             new_str[n] = rep_pat[rep_index];
//             rep_index++;
//             n++;
//         }
//    }
//        new_str[n] = str[copy_loop];
//        i++;
//        copy_loop++;
//        n++;
//}
//    new_str[n]='\0';
//    printf("\n The new string is : ");
//    puts(new_str);
//    return 0;
//}

// 10.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char names[5][10], temp[10];
//    int i, n, j;
//    printf("\n Enter the number of students : ");
//    scanf("%d", &n);
//    for(i=0;i<n;i++)
//        {
//            printf("\n Enter the name of student %d : ", i+1);
//            gets(names[i]);
//        }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n-i-1;j++)
//        {
//            if(strcmp(names[j], names[j+1])>0)
//            {
//                strcpy(temp, names[j]);
//                strcpy(names[j], names[j+1]);
//                strcpy(names[j+1], temp);
//            }
//        }
//    }
//    printf("\n Names of the students in alphabetical order are : ");
//    for(i=0;i<n;i++)
//        puts(names[i]);
//    return 0;
//}

// 11.
//#include <stdio.h>
//int main()
//{
//    char str[1000];
//    int i=0, word_count = 1, line_count =1, char_count = 1;
//    printf("\n Enter a ‘*’ to end");
//    printf("\n **************");
//    printf("\n Enter the text : ");
//    scanf("%c", &str[i]);
//    while(str[i] != '*')
//    {
//        i++;
//        scanf("%c", &str[i]);
//    }
//    str[i] = '\0';
//    i=0;
//    while(str[i] != '\0')
//    {
//        if(str[i] == '\n' || i==79)
//            line_count++;
//        if(str[i] == ' ' &&str[i+1] != ' ')
//            word_count++;
//        char_count++;
//        i++;
//    }
//    printf("\n The total count of words is : %d", word_count);
//    printf("\n The total count of lines is : %d", line_count);
//    printf("\n The total count of characters is : %d", char_count);
//    return 0;
//}

// 12.
//#include <stdio.h>
//int main()
//{
//    char str[100];
//    int i = 0, j, length = 0;
//    printf("\n Enter the string : ");
//    gets(str);
//    while(str[i] != '\0')
//    {
//        length++ ;
//        i++ ;
//    }
//    i=0;
//    j = length - 1;
//    while(i <= length/2)
//    {
//        if(str[i] == str[j])
//        {
//            i++;
//            j--;
//        }
//        else
//            break;
//    }
//    if(i>=j)
//    printf("\n PALINDROME");
//    else
//    printf("\n NOT A PALINDROME");
//    return 0;
//}

// 13.
//#include <stdio.h>
//int main()
//{
//    char str[100],
//    copy_str[100];
//    char *pstr, *pcopy_str;
//    int size=0; pstr = str;
//    pcopy_str = copy_str;
//    printf("\n Enter the string : ");
//    gets(str);
//    while (*pstr != '\0')
//    {
//        *pcopy_str = *pstr;
//        pstr++, pcopy_str++;
//        size++;
//    }
//    *pcopy_str = '\0';
//    pcopy_str -= size;
//    printf("\n The copied text is : ");
//    while (*pcopy_str != '\0')
//    {
//        printf("%c", *pcopy_str);
//        pcopy_str++;
//    }
//    printf("\n");
//    return 0;
//}

// 14.
//#include <stdio.h>
//int main()
//{
//    char str1[100], str2[100], copy_str[200];
//    char *pstr1, *pstr2, *pcopy_str;
//    pstr1 = str1;
//    pstr2 = str2;
//    pcopy_str = copy_str;
//    printf("\n Enter the first string : ");
//    gets(str1);
//    printf("\n Enter the second string : ");
//    gets(str2);
//    while(*pstr1 != '\0')
//    {
//        *pcopy_str = *pstr1;
//        pcopy_str++;
//        pstr1++;
//    }
//    while(*pstr2 != '\0')
//    {
//        *pcopy_str = *pstr2;
//        pcopy_str++;
//        pstr2++;
//    }
//    *pcopy_str = '\0';
//    printf("\n The concatenated text is : ");
//    while(*pcopy_str != '\0')
//    {
//        printf("%c", *pcopy_str);
//        pcopy_str++;
//    }
//    return 0;
//}

// Programming Exercise
//===== 1&2 =====
//1. Write a program in which a string is passed as an argument to a function.
//2. Write a program in C to concatenate first n characters of a string with another string.
//#include <stdio.h>
//#include <string.h>
//void concatNchar(int n, char str1[], char str2[], char str3[]);
//
//int main(){
//    int n = 3;
//    char str1[] = "Yes, you are";
//    char str2[] = " or Not";
//    char str3[15];
//    concatNchar(n, str1, str2, str3);
//    printf("After concate: %s\n", str3);
//    return 0;
//}
//
//void concatNchar(int n, char str1[], char str2[], char str3[]){
//    int i = 0;
//    while (n>0){
//        str3[i] = str1[i];
//        i++;
//        n--;
//    }
//    int j = 0;
//    while (str2[j] != '\0'){
//        str3[i] = str2[j];
//        i++;
//        j++;
//    }
//    str3[i] = '\0';
//}
//===== 3 =====
//Write a program in C that compares first n characters of one string with first n characters of another string.
//#include <stdio.h>
//#include <string.h>
//
//void compareN(int n, char str1[], char str2[], int result[n]);
//void showArray(int n, int array[n]);
//
//int main(){
//    int n = 5;
//    char str1[] = "Hello";
//    char str2[] = "World";
//    int result[n];
//    compareN(n, str1, str2, result);
//    showArray(n, result);
//    return 0;
//}
//
//void compareN(int n, char str1[], char str2[], int result[n]){
//    for (int i = 0; i < n; ++i) {
//        if(str1[i] > str2[i])
//            result[i] = 1;
//        else if(str1[i] == str2[i])
//            result[i] = 0;
//        else
//            result[i] = -1;
//    }
//}
//
//void showArray(int n, int array[n]){
//    for (int i = 0; i < n; ++i) {
//        printf("%d ", array[i]);
//    }
//}
//
//
//===== 4 =====
//Write a program in C that removes leading and trailing spaces from a string.
//
//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//void removeSpace(char str[], char newstr[]);
//
//int main(){
//    char str[] = "  Hello World  ";
//    char newstr[15];
//    removeSpace(str, newstr);
//    printf("After processed: %s", newstr);
//
//    return 0;
//}
//
//void removeSpace(char str[], char newstr[]){
//    int i = 0, j = 0;
//    while(isspace(str[i])) i++;
//    int end  = (int)strlen(str) - 1;
//    while (isspace(str[end]) && end > i) end--;
//    for (int k = i; k < end+1; ++k) {
//        newstr[j] = str[k];
//        j++;
//    }
//    newstr[j] = '\0';
//}
//
//
//===== 5 =====
//Write a program in C that replaces a given character with another character in a string.
//#include <stdio.h>
//
//void replaceChar(char str[], char old, char new);
//
//int main(){
//    char str[] = "Hello";
//    char old, new;
//    old = 'H';
//    new = 'h';
//    printf("Before replacement: %s\n", str);
//    replaceChar(str, old, new);
//    printf("After replace %c with %c: %s", old, new, str);
//}
//
//void replaceChar(char str[], char old, char new){
//    int i = 0;
//    while(str[i] != '\0'){
//        if(str[i] == old)
//            str[i] = new;
//        i++;
//    }
//}
//
//
//===== 6 =====
//Write a program to count the number of digits, upper case characters, lower case characters, and special characters in a given string.
//
//#include <stdio.h>
//
//// Isxxx --> 1:yes; 0-->no;
//int isDigits(char c);
//int isUpper(char c);
//int isLower(char c);
//int isSpecial(char c);
//void countCases(char str[]);
//
//int main(){
//    char str[] = "Hello10@_@01World";
//    countCases(str);
//
//    return 0;
//}
//
//int isDigits(char c){
//    if(c >= 48 && c <= 57) return 1;
//    else return 0;
//}
//
//int isUpper(char c){
//    if(c >= 65 && c <= 90) return 1;
//    else return 0;
//}
//int isLower(char c){
//    if(c >= 97 && c <= 122) return 1;
//    else return 0;
//}
//
//int isSpecial(char c){
//    if(c >= 32 && c <= 47) return 1;
//    else return 0;
//}
//
//void countCases(char str[]){
//    int i=0, digit_num=0, upper_num=0, lower_num=0, special_num=0;
//    while (str[i] != '\0'){
//        if(isDigits(str[i])) digit_num++;
//        if(isUpper(str[i])) upper_num++;
//        if(isLower(str[i])) lower_num++;
//        if(isSpecial(str[i])) special_num++;
//        i++;
//    }
//    printf("%s with %d digits, %d Upper case letter, %d Lower case letter and %d special character.",
//            str, digit_num, upper_num, lower_num, special_num);
//}
//
//
//
//===== 7 =====
//Write a program to count the total number of occurrences of a given character in the string.
//
//#include <stdio.h>
//
//int countChar(char str[], char c);
//
//int main(){
//    int num;
//    char str[] = "HelloWorld";
//    char c = 'l';
//    num = countChar(str, c);
//    printf("There are %d %c in %s", num, c, str);
//    return 0;
//}
//
//int countChar(char str[], char c){
//    int i=0, num=0;
//    while (str[i] != '\0'){
//        if(str[i] == c) num++;
//        i++;
//    }
//    return num;
//}
//
//
//===== 8&9 =====
//8  Write a program to accept a text. Count and display the number of times the word ‘the’ appears in the text.
//9  Write a program to count the total number of occurrences of a word in the text.
//
//#include <stdio.h>
//
//int countPattern(char str[], char pattern[]);
//
//int main(){
//    char str[] = "Hahahaha, I'm fine.Haha.";
//    char pattern[] = "ha";
//    int num;
//    num = countPattern(str, pattern);
//    printf("There are %d %s in %s", num, pattern, str);
//
//    return 0;
//}
//
//int countPattern(char str[], char pattern[]){
//    int num = 0;
//    int i=0;
//    int j, found;
//    while (str[i] != '\0'){
//        j = 0;
//        if(str[i] == pattern[j]){
//            found = 1;
//            while (pattern[j] != '\0'){
//                if(pattern[j] == str[i+j])
//                    j++;
//                else
//                {
//                    found = 0;
//                    break;
//                }
//            }
//            if(found) num++;
//        }
//        i++;
//    }
//    return num;
//}
//
//===== 10 =====
//Write a program to find the last instance of occurrence of a sub-string within a string.
//
//#include <stdio.h>
//
//int countPattern(char str[], char pattern[], int poses[]);
//void showArray(int n, int array[]);
//
//int main(){
//    char str[] = "Hahahaha, I'm fine.Haha.";
//    char pattern[] = "ha";
//    int num;
//    int poses[20];
//    num = countPattern(str, pattern, poses);
//    printf("There are %d %s in %s\n", num, pattern, str);
//    printf("And the positions of the pattern are as fellows: ");
//    showArray(num, poses);
//    return 0;
//}
//
//int countPattern(char str[], char pattern[], int poses[]){
//    int num = 0;
//    int i=0;
//    int j, found;
//    while (str[i] != '\0'){
//        j = 0;
//        if(str[i] == pattern[j]){
//            found = 1;
//            while (pattern[j] != '\0'){
//                if(pattern[j] == str[i+j])
//                    j++;
//                else
//                {
//                    found = 0;
//                    break;
//                }
//            }
//            if(found)
//            {
//                poses[num] = i;
//                num++;
//            }
//        }
//        i++;
//    }
//    return num;
//}
//
//void showArray(int n, int array[]){
//    for (int i = 0; i < n; ++i) {
//        printf("%d ", array[i]);
//    }
//}
//
//
//===== 11 =====
//Write a program to input an array of strings. Then,
//reverse the string in the format shown below.
// "HAPPY BIRTHDAY TO YOU" should be displayed
//as "YOU TO BIRTHDAY HAPPY"
//
//#include <stdio.h>
//#include <string.h>
//
//void readStrings(int row, int col, char str[row][col]);
//
//void showStrings(int row, int col, char str[row][col]);
//
//int findAfterSpacePos(int *poses, char *str);
//
//void reverseStrings(int row, int col, char str[row][col]);
//
//
//int main() {
//    int row, col;
//    row = 2;
//    col = 30;
//    char str[row][col];
//    readStrings(row, col, str);
//    showStrings(row, col, str);
//
//    reverseStrings(row, col, str);
//    showStrings(row, col, str);
//
//    return 0;
//}
//
//void readStrings(int row, int col, char str[row][col]) {
//    for (int i = 0; i < row; i++) {
//        printf("Enter String %d: ", i + 1);
//        fgets(str[i], col, stdin);
//        str[i][strcspn(str[i], "\n")] = 0;
//    }
//}
//
//
//void showStrings(int row, int col, char str[row][col]) {
//    for (int i = 0; i < row; ++i) {
//        printf("String %d: %s", i + 1, str[i]);
//        printf("\n");
//    }
//}
//
//
//int findAfterSpacePos(int *poses, char *str) {
//    int i = 0, j = 0;
//    poses[j] = 0;
//    j += 1;
//    while (str[i] != '\0') {
//        if (str[i] == ' ') {
//            poses[j] = i + 1;
//            j++;
//        }
//        i++;
//    }
//    return j;
//}
//
//void reverseStrings(int row, int col, char str[row][col]) {
//    int pos, poses[col], spaceNum;
//    char temp[col];
//    int new_index;
//    for (int i = 0; i < row; ++i) {
//        new_index = 0;
//        strcpy(temp, str[i]);
//        spaceNum = findAfterSpacePos(poses, temp);
//        for (int j = spaceNum - 1; j >= 0; --j) {
//            pos = poses[j];
//            while (temp[pos] != '\0' && temp[pos] != ' ') {
//                str[i][new_index] = temp[pos];
//                new_index++;
//                pos++;
//            }
//            str[i][new_index] = ' ';
//            new_index++;
//        }
//        str[i][new_index-1] = '\0';
//    }
//}
//
//
//
//===== 12 =====
//Write a program to append a given string in the following format.
// "GOOD MORNING MORNING GOOD"
//#include <stdio.h>
//#include <string.h>
//
//void readStrings(int row, int col, char str[row][col]);
//
//void showStrings(int row, int col, char str[row][col]);
//
//int findAfterSpacePos(int *poses, char *str);
//
//void addReverseStrings(int row, int col, char str[row][col]);
//
//
//int main() {
//    int row, col;
//    row = 2;
//    col = 100;
//    char str[row][col];
//    readStrings(row, col, str);
//    showStrings(row, col, str);
//
//    addReverseStrings(row, col, str);
//    showStrings(row, col, str);
//
//    return 0;
//}
//
//void readStrings(int row, int col, char str[row][col]) {
//    for (int i = 0; i < row; i++) {
//        printf("Enter String %d: ", i + 1);
//        fgets(str[i], col, stdin);
//        str[i][strcspn(str[i], "\n")] = 0;
//    }
//}
//
//
//void showStrings(int row, int col, char str[row][col]) {
//    for (int i = 0; i < row; ++i) {
//        printf("String %d: %s", i + 1, str[i]);
//        printf("\n");
//    }
//}
//
//
//int findAfterSpacePos(int *poses, char *str) {
//    int i = 0, j = 0;
//    poses[j] = 0;
//    j += 1;
//    while (str[i] != '\0') {
//        if (str[i] == ' ') {
//            poses[j] = i + 1;
//            j++;
//        }
//        i++;
//    }
//    return j;
//}
//
//void addReverseStrings(int row, int col, char str[row][col]) {
//    int pos, poses[col], spaceNum;
//    char temp[col];
//    int new_index;
//    for (int i = 0; i < row; ++i) {
//        int len = (int)strlen(str[i]);
//        new_index = len+1;
//        strcpy(temp, str[i]);
//        str[i][len] = ' ';
//        spaceNum = findAfterSpacePos(poses, temp);
//        for (int j = spaceNum - 1; j >= 0; --j) {
//            pos = poses[j];
//            while (temp[pos] != '\0' && temp[pos] != ' ') {
//                str[i][new_index] = temp[pos];
//                new_index++;
//                pos++;
//            }
//            str[i][new_index] = ' ';
//            new_index++;
//        }
//        str[i][new_index-1] = '\0';
//    }
//}
//
//
//===== 15 =====
//Write a program to convert the given string "GOODMORNING" to "good morning".
//#include <stdio.h>
//
//void toLower(char str[]);
//
//int main() {
//    char str[] = "GOOD MORNING";
//    toLower(str);
//    printf("After processed: %s", str);
//
//    return 0;
//}
//
//void toLower(char str[]) {
//    int bwtween = 'a' - 'A';
//    int i = 0;
//    while (str[i] != 0) {
//        if (str[i] >= 65 && str[i] <= 90)
//            str[i] += bwtween;
//        i++;
//    }
//}
//
//
//===== 16 =====
//Write a program to concatenate two given
//strings "Good Morning" and "World". Display the
//resultant string.
//
//#include <stdio.h>
//
//void concatString(char str1[], char str2[], char str[]);
//
//int main() {
//    char str1[] = "Hello World";
//    char str2[] = "Good Morning";
//    char str[50];
//    concatString(str1, str2, str);
//    printf("%s + %s = %s", str1, str2, str);
//
//    return 0;
//}
//
//void concatString(char str1[], char str2[], char str[]) {
//    int i = 0, j = 0;
//    while (str1[i] != 0) {
//        str[j] = str1[i];
//        i++;
//        j++;
//    }
//    i = 0;
//    // here we can add something as separator
//    str[j] = ' ';
//    j++;
//
//    while (str2[i] != 0) {
//        str[j] = str2[i];
//        i++;
//        j++;
//    }
//    str[j] = '\0';
//}
//
//
//===== 17 =====
//Write a program to check whether the two given
//strings "Good Morning" and "Good Morning" are
//same.
//
//#include <stdio.h>
//#include <string.h>
//
//int isSameStr(char str1[], char str2[]);
//
//int main(){
//    char str1[] = "good";
//    char str2[] = "good";
//    int result;
//    result = isSameStr(str1, str2);
//    printf("%s ? %s: %d", str1, str2, result);
//
//    return 0;
//}
//
//int isSameStr(char str1[], char str2[]){
//    int len1, len2;
//    len1 = (int)strlen(str1);
//    len2 = (int)strlen(str2);
//    if(len1!=len2) return 0;
//
//    int result = 1, i = 0;
//    while (str1[i] != 0){
//        if(str1[i] != str2[i]){
//            result = 0;
//            break;
//        }
//        i++;
//    }
//    return result;
//}
//
//
//===== 18 =====
//Write a program to convert the given string "hello
//world" to "dlrow olleh".
//
//#include <stdio.h>
//#include <string.h>
//
//void reverseStr(char str[]);
//
//int main(){
//    char str[] = "hello world";
//    reverseStr(str);
//    printf("%s", str);
//    return 0;
//}
//
//void reverseStr(char str[]){
//    int i = 0;
//    int len = (int)strlen(str);
//    char temp[len+1];
//    strcpy(temp, str);
//    while (temp[i] != 0){
//        str[i] = temp[len-i-1];
//        i++;
//    }
//    str[i] = '\0';
//}
//
//
//===== 19 =====
//Write a program to extract the string "od Mo" from
//the given string "Good Morning".
//
//#include <stdio.h>
//#include <string.h>
//
//void deletePattern(char str[], char pattern[]);
//
//int main() {
//    char str[] = "Good Morning Good Morning";
//    char pattern[] = "od Mo";
//    deletePattern(str, pattern);
//    printf("After delete %s: %s", pattern, str);
//
//    return 0;
//}
//
//void deletePattern(char str[], char pattern[]) {
//    int i = 0;
//    int j, found, k = 0;
//    char temp[strlen(str)];
//    while (str[i] != 0) {
//        j = 0;
//        found = 0;
//        if (str[i] == pattern[j]) {
//            found = 1;
//            while (pattern[j] != 0) {
//                if (pattern[j] != str[j + i]) {
//                    found = 0;
//                    break;
//                }
//                j++;
//            }
//        }
//        if (found)  // if found then pass...
//            i += j;
//        else{
//            temp[k] = str[i];
//            i += 1;
//            k++;
//        }
//    }
//    temp[k] = '\0';
//    strcpy(str, temp);
//}
//
//
//
//===== 20&23 =====
//
//20. Write a program to insert "University" in the
//given string "Oxford Press" so that the string
//should read as "Oxford University Press".
//
//23. Write a program to rewrite the string "Good
//Morning" to "Good Evening".
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//char *str_replace(char *orig, char *rep, char *with) {
//    char *result;
//    char *ins;
//    char *tmp;
//    int len_rep;
//    int len_with;
//    int len_front;
//    int count;
//
//    // sanity checks and initialization
//    if (!orig || !rep)
//        return NULL;
//    len_rep = strlen(rep);
//    if (len_rep == 0)
//        return NULL;     if (!with)
//        with = "";
//    len_with = strlen(with);
//
//    ins = orig;
//    for (count = 0; tmp = strstr(ins, rep); ++count) {
//        ins = tmp + len_rep;
//    }
//
//    tmp = result = malloc(strlen(orig) + (len_with - len_rep) * count + 1);
//
//    if (!result)
//        return NULL;
//
//    while (count--) {
//        ins = strstr(orig, rep);
//        len_front = ins - orig;
//        tmp = strncpy(tmp, orig, len_front) + len_front;
//        tmp = strcpy(tmp, with) + len_with;
//        orig += len_front + len_rep; // move to next "end of rep"
//    }
//    strcpy(tmp, orig);
//    return result;
//}
//
//int main() {
//    char orig[] = "hello, Good Morning, hello";
//    char oldPattern[] = "Good Morning";
//    char newPattern[] = "Good Evening~";
//
//    char *result;
//    result = str_replace(orig, oldPattern, newPattern);
//    printf("ss1:'%s', After replace '%s' with '%s': '%s'", orig, oldPattern, newPattern, result);
//
//    free(result);
//    return 0;
//}
//
//
//
//===== 21 =====
//
//Write a program to read a text, delete all the semicolons it has, and finally replace all '.' with a ',' .
//
//#include <stdio.h>
//#include <string.h>
//
//void deletSemi(char str[]);
//void replacedot(char str[]);
//
//int main(){
//    char str[] = "H;ello. W;orld";
//    deletSemi(str);
//    replacedot(str);
//    printf("After Processed: %s", str);
//    return 0;
//}
//
//void deletSemi(char str[]){
//    int i = 0, j = 0;
//    char temp[strlen(str)+1];
//    while (str[i] != 0){
//        if(str[i] != ';'){
//            temp[j] = str[i];
//            j++;
//        }
//        i++;
//    }
//    temp[j] = '\0';
//    strcpy(str, temp);
//}
//
//void replacedot(char str[]){
//    int i = 0;
//    while (str[i] != 0){
//        if(str[i] == '.')
//            str[i] = ',';
//        i++;
//    }
//}
//
//
//
//===== 22 =====
//
//Write a program to copy the last n characters of a
//character array in another character array. Also,
//convert the lower case letters into upper case
//letters while copying.
//
//#include <stdio.h>
//#include <string.h>
//
//void copyAndConvert(char str1[], char str2[], int n);
//
//int main(){
//    char str1[] = "Hello, World";
//    int n = 5;
//    char str2[n+1];
//    copyAndConvert(str1, str2, n);
//    printf("After Processed: %s", str2);
//    return 0;
//}
//
//void copyAndConvert(char str1[], char str2[], int n){
//    int i = (int)strlen(str1)-n;
//    int j = 0;
//    while (str1[i] != 0){
//        if(str1[i] >= 97 && str1[i] <= 122)
//            str2[j] = str1[i] - 32;
//        else
//            str2[j] = str1[i];
//        j++;
//        i++;
//    }
//}
//
//
//
//===== 24 =====
//Write a program to read and display names of
//employees in a department.
//#include <stdio.h>
//
//void readStrings(int row, int col, char str[row][col]);
//
//void readStringsByPointer(int row, int col, char ***str);
//
//void showStrings(int row, int col, char str[row][col]);
//
//void showStringsByPointer(int row, int col, char **str);
//
//int main() {
//    int row = 2;
//    int col = 10;
//    printf("***S[][]***\n");
//    char str[row][col];
//    readStrings(row, col, str);
//    showStrings(row, col, str);
//
//    printf("***Pointerd***\n");
//    char **pstr;
//    readStringsByPointer(row, col, &pstr);
//    showStringsByPointer(row, col, pstr);
//    return 0;
//}
//
//void readStrings(int row, int col, char str[row][col]) {
//    for (int i = 0; i < row; ++i) {
//        printf("Enter name of %d: ", i + 1);
//        fgets(str[i], col, stdin);
//    }
//}
//
//
//void allocateMem(int row, int col, char ***str) {
//    *str = malloc(row);
//    for (int i = 0; i < row; ++i) {
//        (*str)[i] = malloc(col + 1);
//    }
//}
//
//void readStringsByPointer(int row, int col, char ***str) {
//    allocateMem(row, col, str);
//    for (int i = 0; i < row; ++i) {
//        printf("Enter name of %d: ", i + 1);
//        fgets((*str)[i], col, stdin);
//    }
//}
//
//void showStrings(int row, int col, char str[row][col]) {
//    for (int i = 0; i < row; ++i) {
//        printf("The name of %d: %s", i + 1, str[i]);
//    }
//}
//
//void showStringsByPointer(int row, int col, char **str) {
//    for (int i = 0; i < row; ++i) {
//        printf("The name of %d: %s", i + 1, str[i]);
//    }
//}
//
//
//===== 25 =====
//Write a program to read a line until a newline is
//entered.
//
//#include <stdio.h>
//
//int main(){
//    char str[10];
//    printf("Enter a string: ");
//    fgets(str, 10, stdin);
//    printf("Read: %s", str);
//    return 0;
//}
//
//===== 26 =====
//Write a program to read a short story. Rewrite
//the story by printing the line number before the
//starting of each line.
//
#include <stdio.h>

void readStrings(char str[]);
void showStrings(char str[]);

int main(){
    char str[100];
    readStrings(str);
    showStrings(str);

    return 0;
}

void readStrings(char str[]){
    printf("Enter String: ");
    fgets(str, 100, stdin);
}

void showStrings(char str[]){
    int i = 0, j = 0;
    printf("Line%d: ", j+1);
    while (str[i] != 0){
        printf("%c", str[i]);
        if(str[i] == '.' && str[i+1] != '\n'){
            printf("\nLine%d:", j+1);
            j++;
        }
        i++;
    }
}

