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
    int arr[]={56,77,88,99,25,45,18,35,65};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=18;
    int position= findelement(arr,n,key);

     if(position == -1)
    {
        printf("element not found");
    }else{
        printf("element found %d",position+1);
    }
    return 0;
}