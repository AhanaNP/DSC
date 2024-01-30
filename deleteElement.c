#include <stdio.h>
int binarySearch(int arr[],int low,int high,int key);
int deleteElement(int arr[],int n, int key)
{
    int position=binarySearch(arr,0,n-1,key);
    if(position== -1)
    {
    printf("element not found");
    return n;
    }
    int i;
    for (i = position; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 

        return n - 1; 
}
int binarySearch(int arr[], int low, int high, int key) 
{ 
    if (high < low) 
        return -1; 
    int mid = (low + high) / 2; 
    if (key == arr[mid]) 
        return mid; 
    if (key > arr[mid]) 
        return binarySearch(arr, (mid + 1), high, key); 
    return binarySearch(arr, low, (mid - 1), key); 
} 
int main()
{
    int i;
    int arr[]={31,32,33,34,35,36};
    int key=34;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Array before deletion: ");
    for(i=0;i<n;i++){
    printf("%d ",arr[i]);}
    n= deleteElement(arr,n,key);
    printf("\nAfter deletion: ");
    for(i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}