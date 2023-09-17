//rotate the array to right by k steps...
#include<stdio.h>
void rotatearr(int *arr,int start,int end)
{
    int temp;
    while(start<end)
    {
      temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;
    }
}

int main()
{
    int arr[100],n,k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("no.of steps to rotate:");
    scanf("%d",&k);
    k=k%n;
    rotatearr(arr,0,n-1);  //for left rotation or circular rotaton by k positions
    rotatearr(arr,0,k-1); //rotatearr(arr,0.n-k-1)
    rotatearr(arr,k,n-1);//rotatearr(arr,n-k,n-1)

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}