#include <stdio.h>
int findelement(int arr[],int n,int key)
{
for(int i=0;i<n;i++)
if(arr[i]==key)
return i;

return -1;
}
int main()
{
    int arr[]={4,5,3,2,7,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    int position= findelement(arr,n,key);

     if(position == -1)
    {
        printf("element not found");
    }else{
        printf("elemnt not found %d",position+1);
    }
    return 0;
}