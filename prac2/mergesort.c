#include<stdio.h>
#include "head.h"
int main()
{
    int arr[] = {32, 45, 67, 2, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
 
    printf("Given array: \n");
    printArray(arr, len);
    
    // calling merge sort
    mergeSort(arr, 0, len - 1);
 
    printf("\nSorted array: \n");
    printArray(arr, len);
    return 0;
}
