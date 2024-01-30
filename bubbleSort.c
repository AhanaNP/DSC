#include<stdbool.h>
#include <stdio.h>
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[], int n)
{
    int i,j;
    bool swapped;
    for(i=0; i<n-1; i++)
    {
        swapped=false;
        for(j=0;j<n-i-1; j++){
            if(arr[j]>arr[j +1]){
                swap(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
        if(swap==false)
        break;
    }
}
void printArray(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    printf("%d ",arr[i]);
}

int main()
{
    int arr[]={32,43,23,45.75,84};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array is:\n");
    printArray(arr, n);
    return 0;

}