//can all number of an array be made equal...
#include<stdio.h>
int possible(int *arr,int n)
{   int i;
    for(i=0;i<n;i++)
    {
        while(arr[i]%2==0)
         arr[i]/=2;
         while(arr[i]%3==0)
         arr[i]/=3;
         if(arr[i]!=arr[0])
         return 0;
    }
    return 1;
}
int main()
{
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  if(possible(arr,n))
    printf("yes");
  else
  printf("No");
  
}
