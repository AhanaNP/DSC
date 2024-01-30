#include <stdio.h>
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[], int n)
{
    int i,j,size;
    for(i=0;i<n-1;i++)
    {
        //array size
        size=i;
        for(j=i+1;j<n;j++)
        if(arr[j]<arr[size])
        size=j;

    if(size !=i)
    swap(&arr[size],&arr{i});
    }
}

void printArray(int arr[], int size2) 
{ 
    int i; 
    for (i=0; i < size2; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
 
int main() 
{ 
    int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 
} 