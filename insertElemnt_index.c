#include <stdio.h>
int insertSorted(int arr[],int n, int key,int position)
{
    for(int i=n-1; i>=position; i--){
    arr[i+1]=arr[i];}
    arr[position]=key;
    return n+1;
}

int main()
{
    int arr[20]={12,16,20,50,70};
    int n=5;
    int i,key=18;
    int position=2;
    printf("\n Before Insertion: ");
     for(i=0;i<n;i++)
        printf(" %d ",arr[i]);

    n=insertSorted(arr,n,key,position);
    printf("\n After Insertion: ");
    for(i=0;i<n;i++)
        printf(" %d ",arr[i]);
        return 0;
}
