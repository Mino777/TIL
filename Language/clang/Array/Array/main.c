//
//  main.c
//  Array
//
//  Created by 조민호 on 2020/04/04.
//  Copyright © 2020 조민호. All rights reserved.
//
// programming example 1
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//        int i, n, arr[20];
//        //clrscr();
//        printf("\n Enter the number of elements in the array : ");
//        scanf("%d", &n);
//        for(i=0;i<n;i++)
//        {
//            printf("\n arr[%d] = ", i);
//            scanf("%d",&arr[i]);
//        }
//        printf("\n The array elements are ");
//        for(i=0;i<n;i++)
//            printf("\t %d", arr[i]);
//        return 0;
//}

// programming example 2
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//        int i, n, arr[20], sum =0;
//        float mean = 0.0;
//        //clrscr();
//        printf("\n Enter the number of elements in the array : ");
//        scanf("%d", &n);
//        for(i=0;i<n;i++)
//        {
//            printf("\n arr[%d] = ", i);
//            scanf("%d",&arr[i]);
//        }
//        for(i=0;i<n;i++)
//            sum += arr[i];
//        mean = (float)sum/n;
//        printf("\n The sum of the array elements = %d", sum);
//        printf("\n The mean of the array elements = %.2f", mean);
//        return 0;
//}

//// programming example 3
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//        int i, n, arr[20], small, pos;
//        //clrscr();
//        printf("\n Enter the number of elements in the array : ");
//        scanf("%d", &n);
//        printf("\n Enter the elements : ");
//        for(i=0;i<n;i++)
//            scanf("%d",&arr[i]);
//        small = arr[0];
//        pos =0;
//        for(i=1;i<n;i++)
//        {
//            if(arr[i]<small)
//            {
//                    small = arr[i];
//                    pos = i;
//            }
//        }
//        printf("\n The smallest element is : %d", small);
//        printf("\n The position of the smallest element in the array is : %d", pos);
//        return 0;
//}

// programming example 4
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//        int i, n, arr[20], large, second_large;
//        //clrscr();
//        printf("\n Enter the number of elements in the array : ");
//        scanf("%d", &n);
//        printf("\n Enter the elements");
//        for(i=0;i<n;i++)
//            scanf("%d",&arr[i]);
//        large = arr[0];
//        for(i=1;i<n;i++)
//        {
//            if(arr[i]>large)
//                    large = arr[i];
//        }
//        second_large = arr[1];
//        for(i=0;i<n;i++)
//        {
//            if(arr[i] != large)
//            {
//                if(arr[i]>second_large)
//                    second_large = arr[i];
//            }
//        }
//        printf("\n The numbers you entered are : ");
//        for(i=0;i<n;i++)
//            printf("\t %d", arr[i]);
//        printf("\n The largest of these numbers is : %d",large);
//        printf("\n The second largest of these numbers is : %d",second_large);
//        return 0;
//}

// programming example 5
//#include <stdio.h>
////#include <conio.h>
//#include <math.h>
//int main()
//{
//    int number=0, digit[10], numofdigits,i;
//    //clrscr();
//    printf("\n Enter the number of digits : ");
//    scanf("%d", &numofdigits);
//    for(i=0;i<numofdigits;i++)
//    {
//        printf("\n Enter the digit at position %d", i+1);
//        scanf("%d", &digit[i]);
//    }
//    i=0;
//    while(i<numofdigits)
//    {
//        number = number + digit[i] * pow(10,i);
//        i++;
//    }
//    printf("\n The number is : %d", number);
//    return 0;
//}

//// programming example 6
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int array[10], i, n, j, flag =0;
//    //clrscr();
//    printf("\n Enter the size of the array : ");
//    scanf("%d", &n);
//    for(i=0;i<n;i++)
//    {
//        printf("\n array[%d] = ", i);
//        scanf("%d", &array[i]);
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=i+1;j<n;j++)
//            {
//                if(array[i] == array[j] && i!=j)
//                {
//                    flag =1;
//                    printf("\n Duplicate numbers found at locations %d and %d", i, j);
//                }
//            }
//    }
//    if(flag==0)
//        printf("\n No Duplicates Found");
//    return 0;
//}

// programming example 7
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int i, n, num, pos, arr[10];
//    //clrscr();
//    printf("\n Enter the number of elements in the array : ");
//    scanf("%d", &n);
//    for(i=0;i<n;i++)
//    {
//        printf("\n arr[%d] = ", i);
//        scanf("%d", &arr[i]);
//    }
//    printf("\n Enter the number to be inserted : ");
//    scanf("%d", &num);
//    printf("\n Enter the position at which the number has to be added :");
//    scanf("%d", &pos);
//    for(i=n-1;i>=pos;i--)
//        arr[i+1] = arr[i];
//    arr[pos] = num;
//    n = n+1;
//    printf("\n The array after insertion of %d is : ", num);
//    for(i=0;i<n;i++)
//        printf("\n arr[%d] = %d", i, arr[i]);
//    //getch();
//    return 0;
//}

//// programming example 8
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int i, n, j, num, arr[10];
//    //clrscr();
//    printf("\n Enter the number of elements in the array : ");
//    scanf("%d", &n);
//    for(i=0;i<n;i++)
//    {
//        printf("\n arr[%d] = ", i);
//        scanf("%d", &arr[i]);
//    }
//    printf("\n Enter the number to be inserted : ");
//    scanf("%d", &num);
//    for(i=0;i<n;i++)
//    {
//        if(arr[i] > num)
//            {
//                for(j = n-1; j>=i; j--)
//                    arr[j+1] = arr[j];
//                arr[i] = num;
//                break;
//            }
//    }
//    n = n+1;
//    printf("\n The array after insertion of %d is : ", num);
//    for(i=0;i<n;i++)
//        printf("\n arr[%d] = %d", i, arr[i]);
//    //getch();
//    return 0;
//}

// programmin example 9
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int i, n, pos, arr[10];
//    //clrscr();
//    printf("\n Enter the number of elements in the array : ");
//    scanf("%d", &n);
//    for(i=0;i<n;i++)
//    {
//        printf("\n arr[%d] = ", i);
//        scanf("%d", &arr[i]);
//    }
//    printf("\nEnter the position from which the number has to be deleted : ");
//    scanf("%d", &pos);
//    for(i=pos; i<n-1;i++)
//        arr[i] = arr[i+1];
//    n--;
//    printf("\n The array after deletion is : ");
//    for(i=0;i<n;i++)
//        printf("\n arr[%d] = %d", i, arr[i]);
//    //getch();
//    return 0;
//}

// programming example 10
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int i, n, j, num, arr[10];
//    //clrscr();
//    printf("\n Enter the number of elements in the array : ");
//    scanf("%d", &n);
//    for(i=0;i<n;i++)
//    {
//        printf("\n arr[%d] = ", i);
//        scanf("%d", &arr[i]);
//    }
//    printf("\n Enter the number to be deleted : ");
//    scanf("%d", &num);
//    for(i=0;i<n;i++)
//    {
//        if(arr[i] == num)
//        {
//            for(j=i; j<n-1;j++)
//                arr[j] = arr[j+1];
//        }
//    }
//    n = n-1;
//    printf("\n The array after deletion is : ");
//    for(i=0;i<n;i++)
//        printf("\n arr[%d] = %d", i, arr[i]);
//    //getch();
//    return 0;
//}

// ex 11
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int arr1[10], arr2[10], arr3[20];
//    int i, n1, n2, m, index=0;
//    //clrscr();
//    printf("\n Enter the number of elements in array1 : ");
//    scanf("%d", &n1);
//    printf("\n\n Enter the elements of the first array");
//    for(i=0;i<n1;i++)
//    {
//        printf("\n arr1[%d] = ", i);
//        scanf("%d", &arr1[i]);
//    }
//    printf("\n Enter the number of elements in array2 : ");
//    scanf("%d", &n2);
//    printf("\n\n Enter the elements of the second array");
//    for(i=0;i<n2;i++)
//    {
//        printf("\n arr2[%d] = ", i);
//        scanf("%d", &arr2[i]);
//    }
//    m = n1+n2;
//    for(i=0;i<n1;i++)
//    {
//        arr3[index] = arr1[i];
//        index++;
//    }
//    for(i=0;i<n2;i++)
//    {
//        arr3[index] = arr2[i];
//        index++;
//    }
//    printf("\n\n The merged array is");
//    for(i=0;i<m;i++)
//        printf("\n arr[%d] = %d", i, arr3[i]);
////    getch();
//    return 0;
//}

// ex 12
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int arr1[10], arr2[10], arr3[20];
//    int i, n1, n2, m, index=0;
//    int index_first = 0, index_second = 0;
//    //clrscr();
//    printf("\n Enter the number of elements in array1 : ");
//    scanf("%d", &n1);
//    printf("\n\n Enter the elements of the first array");
//    for(i=0;i<n1;i++)
//    {
//        printf("\n arr1[%d] = ", i);
//        scanf("%d", &arr1[i]);
//    }
//    printf("\n Enter the number of elements in array2 : ");
//    scanf("%d", &n2);
//    printf("\n\n Enter the elements of the second array");
//    for(i=0;i<n2;i++)
//    {
//        printf("\n arr2[%d] = ", i);
//        scanf("%d", &arr2[i]);
//    }
//    m = n1+n2;
//    while(index_first < n1 && index_second < n2)
//    {
//        if(arr1[index_first]<arr2[index_second])
//        {
//            arr3[index] = arr1[index_first];
//            index_first++;
//        }
//        else
//        {
//        arr3[index] = arr2[index_second];
//        index_second++;
//        }
//        index++;
//    }
//    // if elements of the first array are over and the second array has some elements
//    if(index_first == n1)
//    {
//        while(index_second<n2)
//        {
//            arr3[index] = arr2[index_second];
//            index_second++;
//            index++;
//        }
//    }
//    // if elements of the second array are over and the first array has some elements
//    else if(index_second == n2)
//    {
//        while(index_first<n1)
//        {
//            arr3[index] = arr1[index_first];
//            index_first++;
//            index++;
//        }
//    }
//    printf("\n\n The merged array is");
//    for(i=0;i<m;i++)
//        printf("\n arr[%d] = %d", i, arr3[i]);
//    //getch();
//    return 0;
//}

// ex 13
//#include <stdio.h>
////#include <conio.h>
//void read_array(int arr[], int n);
//int find_small(int arr[], int n);
//int main()
//{
//    int num[10], n, smallest;
//    //clrscr();
//    printf("\n Enter the size of the array : ");
//    scanf("%d", &n);
//    read_array(num, n);
//    smallest = find_small(num, n);
//    printf("\n The smallest number in the array is = %d", smallest);
//    //getch();
//    return 0;
//}
//void read_array(int arr[10], int n)
//{
//    int i;
//    for(i=0;i<n;i++)
//    {
//        printf("\n arr[%d] = ", i);
//        scanf("%d", &arr[i]);
//    }
//}
//int find_small(int arr[10], int n)
//{
//    int i = 0, small = arr[0];
//    for(i=1;i<n;i++)
//    {
//        if(arr[i] < small)
//            small = arr[i];
//    }
//    return small;
//}

// ex 14
//#include <stdio.h>
////#include <conio.h>
//void read_array(int my_array[], int);
//void display_array(int my_array[], int);
//void interchange(int arr[], int);
//int find_biggest_pos(int my_array[10], int n);
//int find_smallest_pos(int my_array[10], int n);
//int main()
//{
//    int arr[10], n;
//    //clrscr();
//    printf("\n Enter the size of the array : ");
//    scanf("%d", &n);
//    read_array(arr, n);
//    interchange(arr, n);
//    printf("\n The new array is: ");
//    display_array(arr,n);
//    //getch();
//    return 0;
//}
//void read_array(int my_array[10], int n)
//{
//    int i;
//    for(i=0;i<n;i++)
//    {
//        printf("\n arr[%d] = ", i);
//        scanf("%d", &my_array[i]);
//    }
//}
//void display_array(int my_array[10], int n)
//{
//    int i;
//    for(i=0;i<n;i++)
//        printf("\n arr[%d] = %d", i, my_array[i]);
//}
//void interchange(int my_array[10], int n)
//{
//    int temp, big_pos, small_pos;
//    big_pos = find_biggest_pos(my_array, n);
//    small_pos = find_smallest_pos(my_array,n);
//    temp = my_array[big_pos];
//    my_array[big_pos] = my_array[small_pos];
//    my_array[small_pos] = temp;
//}
//int find_biggest_pos(int my_array[10], int n)
//{
//    int i, large = my_array[0], pos=0;
//    for(i=1;i<n;i++)
//    {
//        if (my_array[i] > large)
//        {
//            large = my_array[i];
//            pos=i;
//        }
//    }
//    return pos;
//}
//int find_smallest_pos (int my_array[10], int n)
//{
//    int i, small = my_array[0], pos=0;
//    for(i=1;i<n;i++)
//    {
//        if (my_array[i] < small)
//            {
//                small = my_array[i];
//                pos=i;
//            }
//    }
//    return pos;
//}

// ex 15
//#include <stdio.h>
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9};
//    int *ptr1, *ptr2;
//    ptr1 = arr;
//    ptr2 = &arr[8];
//    while(ptr1<=ptr2)
//    {
//        printf("%d", *ptr1);
//        ptr1++;
//    }
//    return 0;
//}

// ex 16
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int arr[2][2] = {12, 34, 56,32};
//    int i, j;
//    for(i=0;i<2;i++)
//    {
//        printf("\n");
//        for(j=0;j<2;j++)
//            printf("%d\t", arr[i][j]);
//    }
//    return 0;
//}

// ex 17
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int arr[7][7]={0};
//    int row=2, col, i, j;
//    arr[0][0] = arr[1][0] = arr[1][1] = 1;
//    while(row <= 7)
//    {
//        arr[row][0] = 1;
//        for(col = 1; col <= row; col++)
//            arr[row][col] = arr[row-1][col-1] + arr[row-1][col];
//            row++;
//    }
//    for(i=0; i<7; i++)
//    {
//        printf("\n");
//        for(j=0; j<=i; j++)
//            printf("\t %d", arr[i][j]);
//    }
//    //getch();
//    return 0;
//}

// ex 18
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//int sales[5][3], i, j, total_sales=0;
////INPUT DATA
//printf("\n ENTER THE DATA");
//printf("\n *****************");
//for(i=0; i<5; i++)
//{
//    printf("\n Enter the sales of 3 items sold by salesman %d: ", i+1);
//    for(j=0; j<3; j++)
//        scanf("%d", &sales[i][j]);
//}
//// PRINT TOTAL SALES BY EACH SALESMAN
//for(i=0; i<5; i++)
//{
//    total_sales = 0;
//    for(j=0; j<3; j++)
//        total_sales += sales[i][j];
//    printf("\n Total Sales By Salesman %d = %d", i+1, total_sales);
//}
//// TOTAL SALES OF EACH ITEM
//for(i=0; i<3; i++)// for each item
//{
//    total_sales=0;
//    for(j=0; j<5; j++)// for each salesman
//        total_sales += sales[j][i];
//    printf("\n Total sales of item %d = %d", i+1, total_sales);
//}
////getch();
//return 0;
//}

// ex 19
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int marks[5][3], i, j, max_marks;
//    for(i=0; i<5; i++)
//    {
//        printf("\n Enter the marks obtained by student %d",i+1);
//        for(j=0; j<3; j++)
//        {
//            printf("\n marks[%d][%d] = ", i, j);
//            scanf("%d", &marks[i][j]);
//        }
//    }
//    for(j=0; j<3; j++)
//    {
//        max_marks = -999;
//        for(i=0; i<5; i++)
//        {
//            if(marks[i][j]>max_marks)
//                max_marks = marks[i][j];
//        }
//        printf("\n The highest marks obtained in the subject %d = %d", j+1, max_marks);
//    }
//    //getch();
//    return 0;
//}

// ex 20
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int i, j, mat[3][3];
//    //clrscr();
//    printf("\n Enter the elements of the matrix ");
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            scanf("%d",&mat[i][j]);
//        }
//    }
//    printf("\n The elements of the matrix are ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n");
//        for(j=0;j<3;j++)
//            printf("\t %d",mat[i][j]);
//    }
//        return 0;
//}

// ex 21
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int i, j, mat[3][3], transposed_mat[3][3];
//    //clrscr();
//    printf("\n Enter the elements of the matrix ");
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            scanf("%d", &mat[i][j]);
//        }
//    }
//    printf("\n The elements of the matrix are ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n");
//        for(j=0;j<3;j++)
//            printf("\t %d", mat[i][j]);
//    }
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//            transposed_mat[i][j] = mat[j][i];
//    }
//    printf("\n The elements of the transposed matrix are ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n");
//        for(j=0;j<3;j++)
//            printf("\t %d",transposed_mat[i][j]);
//    }
//    return 0;
//}

// ex 22
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int i, j;
//    int rows1, cols1, rows2, cols2, rows_sum, cols_sum;
//    int mat1[5][5], mat2[5][5], sum[5][5];
//    //clrscr();
//    printf("\n Enter the number of rows in the first matrix : ");
//    scanf("%d",&rows1);
//    printf("\n Enter the number of columns in the first matrix : ");
//    scanf("%d",&cols1);
//    printf("\n Enter the number of rows in the second matrix : ");
//    scanf("%d",&rows2);
//    printf("\n Enter the number of columns in the second matrix : ");
//    scanf("%d",&cols2);
//    if(rows1 != rows2 || cols1 != cols2)
//    {
//        printf("\n Number of rows and columns of both matrices must be equal");
//        //getch();
//        //exit();
//    }
//    rows_sum = rows1;
//    cols_sum = cols1;
//    printf("\n Enter the elements of the first matrix ");
//    for(i=0;i<rows1;i++)
//    {
//        for(j=0;j<cols1;j++)
//        {
//            scanf("%d",&mat1[i][j]);
//        }
//    }
//    printf("\n Enter the elements of the second matrix ");
//    for(i=0;i<rows2;i++)
//    {
//        for(j=0;j<cols2;j++)
//        {
//            scanf("%d",&mat2[i][j]);
//        }
//    }
//    for(i=0;i<rows_sum;i++)
//    {
//        for(j=0;j<cols_sum;j++)
//            sum[i][j] = mat1[i][j] + mat2[i][j];
//    }
//    printf("\n The elements of the resultant matrix are ");
//    for(i=0;i<rows_sum;i++)
//    {
//        printf("\n");
//        for(j=0;j<cols_sum;j++)
//            printf("\t %d", sum[i][j]);
//    }
//    return 0;
//}

// ex 23
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int i, j, k;
//    int rows1, cols1, rows2, cols2, res_rows, res_cols;
//    int mat1[5][5], mat2[5][5], res[5][5];
//    //clrscr();
//    printf("\n Enter the number of rows in the first matrix : ");
//    scanf("%d",&rows1);
//    printf("\n Enter the number of columns in the first matrix : ");
//    scanf("%d",&cols1);
//    printf("\n Enter the number of rows in the second matrix : ");
//    scanf("%d",&rows2);
//    printf("\n Enter the number of columns in the second matrix : ");
//    scanf("%d",&cols2);
//    if(cols1 != rows2)
//    {
//        printf("\n The number of columns in the first matrix must be equal to the number of rows in the second matrix");
//        //getch();
//        //exit();
//    }
//    res_rows = rows1;
//    res_cols = cols2;
//    printf("\n Enter the elements of the first matrix ");
//    for(i=0;i<rows1;i++)
//    {
//        for(j=0;j<cols1;j++)
//        {
//            scanf("%d",&mat1[i][j]);
//        }
//    }
//    printf("\n Enter the elements of the second matrix ");
//    for(i=0;i<rows2;i++)
//    {
//        for(j=0;j<cols2;j++)
//        {
//            scanf("%d",&mat2[i][j]);
//        }
//    }
//    for(i=0;i<res_rows;i++)
//    {
//        for(j=0;j<res_cols;j++)
//        {
//            res[i][j]=0;
//            for(k=0; k<res_cols;k++)
//                res[i][j] += mat1[i][k] * mat2[k][j];
//        }
//    }
//    printf("\n The elements of the product matrix are ");
//    for(i=0;i<res_rows;i++)
//    {
//        printf("\n");
//        for(j=0;j<res_cols;j++)
//            printf("\t %d",res[i][j]);
//    }
//    return 0;
//}

//// ex 24
//#include <stdio.h>
////#include <conio.h>
//void read_matrix(int mat[5][5], int);
//void display_matrix(int mat[5][5], int);
//int main()
//{
//    int row;
//    int mat1[5][5];
//    //clrscr();
//    printf("\n Enter the number of rows and columns of the matrix:");
//    scanf("%d", &row);
//    read_matrix(mat1, row);
//    display_matrix(mat1, row);
//    //getch();
//    return 0;
//}
//void read_matrix(int mat[5][5], int r)
//{
//    int i, j;
//    for(i=0; i<r; i++)
//    {
//        for(j=0; j<r; j++)
//        {
//            if(i==j)
//                mat[i][j] = 0;
//            else if(i>j)
//                mat[i][j] = -1;
//            else
//                mat[i][j] = 1;
//        }
//    }
//}
//void display_matrix(int mat[5][5], int r)
//{
//    int i, j;
//    for(i=0; i<r; i++)
//    {
//        printf("\n");
//        for(j=0; j<r; j++)
//            printf("\t %d", mat[i][j]);
//    }
//}

//// ex 25
//#include <stdio.h>
////#include <conio.h>
//void display(int (*)[3]);
//int main()
//{
//    int i, j, mat[3][3];
//    //clrscr();
//    printf("\n Enter the elements of the matrix");
//    for(i=0;i<3;i++)
//    {
//        for(j = 0; j < 3; j++)
//        {
//            scanf("%d", &mat[i][j]);
//        }
//    }
//    display(mat);
//    return 0;
//}
//void display(int (*mat)[3])
//{
//    int i, j;
//    printf("\n The elements of the matrix are");
//    for(i = 0; i < 3; i++)
//    {
//        printf("\n");
//        for(j=0;j<3;j++)
//            printf("\t %d",*(*(mat + i)+j));
//    }
//}

// ex 26
//#include <stdio.h>
////#include <conio.h>
//int main()
//{
//    int array[2][2][2], i, j, k;
//    //clrscr();
//    printf("\n Enter the elements of the matrix");
//    for(i=0;i<2;i++)
//    {
//        for(j=0;j<2;j++)
//        {
//            for(k=0;k<2;k++)
//            {
//                scanf("%d", &array[i][j][k]);
//            }
//        }
//    }
//    printf("\n The matrix is : ");
//    for(i=0;i<2;i++)
//    {
//        printf("\n");
//        for(j=0;j<2;j++)
//        {
//            printf("\n");
//            for(k=0;k<2;k++)
//                printf("\t array[%d][%d][%d] = %d", i, j, k, array[i][j][k]);
//        }
//    }
//    //getch();
//    return 0;
//}

// // ex 27
// #include <stdio.h>
// //#include <conio.h>
// int main()
// {
//     int i,j,k;
//     int arr[2][2][2];
//     int (*parr)[2][2]= arr;
//     //clrscr();
//     printf("\n Enter the elements of a 2 ¥ 2 ¥ 2 array: ");
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             for(k = 0; k < 2; k++)
//                 scanf("%d", &arr[i][j][k]);
//         }
//     }
//     printf("\n The elements of the 2 ¥ 2 ¥ 2 array are: ");
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             for(k = 0; k < 2; k++)
//                 printf("%d", *(*(*(parr+i)+j)+k));
//         }
//     }
//     //getch();
//     return 0;
// }

#include <stdio.h>
#include <ctype.h>
#define MAX 100
float st[MAX];
int top=–1;
void push(float st[], float val);
float pop(float st[]);
float evaluatePostfixExp(char exp[]);
int main()
{
float val;
char exp[100];
clrscr();
printf("\n Enter any postfix expression : ");
gets(exp);
val = evaluatePostfixExp(exp);
printf("\n Value of the postfix expression = %.2f", val);
getch();
return 0;
}
float evaluatePostfixExp(char exp[])
{
int i=0;
float op1, op2, value;
while(exp[i] != '\0')
{
 if(isdigit(exp[i]))
