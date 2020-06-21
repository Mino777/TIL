//
//  main.c
//  SearchingAndSort
//
//  Created by 조민호 on 2020/06/21.
//  Copyright © 2020 조민호. All rights reserved.
//

// insertion sort
//#include <stdio.h>
//#include <stdbool.h>
//
//#define MAX 8    //defining size of our array
//
//int intArray[MAX] = {77, 49, 25, 12, 9, 33, 56, 81};
//
//void printline(int count) {
//  int i;
//
//  for(i = 0;i < count-1;i++) {
//     printf("=");
//  }
//
//  printf("=\n");
//}
//
//void display() {
//  int i;
//  printf("[");
//
//  // navigate through all items
//  for(i = 0;i < MAX;i++) {
//     printf("%d ",intArray[i]);
//  }
//
//  printf("]\n");
//}
//
//void insertionSort() {
//
//  int valueToInsert;
//  int holePosition;
//  int i;
//
//  // loop through all numbers
//  for(i = 1; i < MAX; i++) {
//
//     // select a value to be inserted.
//     valueToInsert = intArray[i];
//
//     // select the hole position where number is to be inserted
//     holePosition = i;
//
//     // check if previous no. is larger than value to be inserted
//     while (holePosition > 0 && intArray[holePosition-1] > valueToInsert) {
//        intArray[holePosition] = intArray[holePosition-1];
//        holePosition--;
//        printf(" item moved : %d\n" , intArray[holePosition]);
//     }
//
//     if(holePosition != i) {
//        printf(" item inserted : %d, at position : %d\n" , valueToInsert,holePosition);
//        // insert the number at current hole
//        intArray[holePosition] = valueToInsert;
//     }
//
//     printf("Iteration %d#:",i);
//     display();
//
//  }
//}
//
//void main() {
//  printf("Input Array: ");
//  display();
//  printline(50);
//  insertionSort();
//  printf("Output Array: ");
//  display();
//  printline(50);
//}

// quick sort
//# include <stdio.h>
//
//// to swap two numbers
//void swap(int* a, int* b)
//{
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//
//int partition (int arr[], int low, int high)
//{
//    int pivot = arr[high];  // selecting last element as pivot
//    int i = (low - 1);  // index of smaller element
//
//    for (int j = low; j <= high- 1; j++)
//    {
//        // If the current element is smaller than or equal to pivot
//        if (arr[j] <= pivot)
//        {
//            i++;    // increment index of smaller element
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}
///*
//    a[] is the array, p is starting index, that is 0,
//    and r is the last index of array.
//*/
//void quicksort(int a[], int p, int r)
//{
//    if(p < r)
//    {
//        int q;
//        q = partition(a, p, r);
//        quicksort(a, p, q-1);
//        quicksort(a, q+1, r);
//    }
//}
//
//
//// function to print the array
//void printArray(int a[], int size)
//{
//    int i;
//    for (i=0; i < size; i++)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int arr[] = {77, 49, 25, 12, 9, 33, 56, 81};
//    int n = sizeof(arr)/sizeof(arr[0]);
//
//    // call quickSort function
//    quicksort(arr, 0, n-1);
//
//    printf("Sorted array: \n");
//    printArray(arr, n);
//    return 0;
//}

// quick sort
//#include <stdio.h>
//
//int cnt=1;
//int partition(int a[], int size, int begin, int end)
//{
//    int left = begin;
//    int right = end;
//    int pivot = (begin+end)/2;
//    printf("%2d 단계(pivot=%2d) : ", cnt++, a[pivot]);
//    while(left<right)
//    {
//        while(a[left]<a[pivot] && left<right)
//        {
//            left++;
//        }
//        while(a[right]>=a[pivot] && left<right)
//        {
//            right--;
//        }
//        int tmp = a[left];
//        a[left] = a[right];
//        a[right] = tmp;
//        if(left == pivot)
//        {
//            for(int i=0; i<size; i++)
//            {
//                printf("%3d ", a[i]);
//            }
//            printf("\n");
//            return right;
//        }
//    }
//    int tmp = a[pivot];
//    a[pivot] = a[right];
//    a[right] = tmp;
//    for(int i=0; i<size; i++)
//    {
//        printf("%3d ", a[i]);
//    }
//    printf("\n");
//    return right;
//}
//void quickSort(int a[], int size, int begin, int end)
//{
//    if(begin<end)
//    {
//        int p;
//        p = partition(a, size, begin, end);
//        quickSort(a, size, begin, p-1);
//        quickSort(a, size, p+1, end);
//    }
//}
//
//int main(void)
//{
//    int arr[9] = {42, 34, 75, 23, 21, 18, 90, 67, 78};
//    int size = 9;
//    printf("정렬 전 : ");
//    for(int i=0; i<size; i++)
//    {
//        printf("%3d ", arr[i]);
//    }
//    printf("\n");
//
//    quickSort(arr, size, 0, size-1);
//
//    return 0;
//}

#include <stdio.h>
 
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int here, int size) {
    int left = here * 2 + 1;
    int right = here * 2 + 2;
    int max=here;
    if (left < size&&arr[left]>arr[max])
        max = left;
    if (right < size&&arr[right]>arr[max])
        max = right;
 
    if (max != here) {
        swap(&arr[here], &arr[max]);
        heapify(arr, max, size);
    }
}
 
void buildHeap(int arr[], int size) {
    int i,j;
    for (i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, i, size);
        for (j = 0; j < size; j++)
            printf("%d ", arr[j]);
        printf("\n\n");
    }
}
 
void heapSort(int arr[],int size) {
    int treeSize;
    buildHeap(arr, size);
    for (treeSize = size - 1; treeSize >= 0; treeSize--) {
        swap(&arr[0], &arr[treeSize]);
        heapify(arr, 0,treeSize);
    }
}
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[] = { 42, 34, 75, 23, 21, 18, 90, 67, 78 };
    int size = sizeof(arr) / sizeof(int);
     
    heapSort(arr, size);
    printArray(arr, size);
}
