//sort array with 0,1,2 only without any algorithm
#include<stdio.h>
int main()
{
    int arr[100],n,i;
    int count_0=0,count_1=0,count_2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++)
   {
    if(arr[i]==0)
     count_0++;
    
    else if(arr[i]==1)
     count_1++;
    else if(arr[i]==2)
     count_2++;
   }
   i=0;
   while(count_0>0)
   {
    arr[i++]=0;
    count_0--;
   }
   while(count_1>0)
   {
    arr[i++]=1;
    count_1--;
   }
   while(count_2>0)
   {
    arr[i++]=2;
    count_2--;
   }
   for(i=0;i<n;i++)
   {
    printf("%d\t",arr[i]);
   }
}