#include<stdio.h>
void display(int *arr,int n)
{   int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void reverse(int *arr,int start,int end)
{    int temp;
    if(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        reverse(arr,start+1,end-1);
    }
    
}
int main()
{
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n-1);
    display(arr,n);
}