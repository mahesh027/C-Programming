#include<stdio.h>
int equilibrium(int *arr,int n)
{   int i=0,j=0;
    for(i=0;i<n;i++)
    {   int rsum=0;
        for(j=i+1;j<n;j++)
        {
            rsum+=arr[j];
        }
        int lsum=0;
        for(j=0;j<i;j++)
        {
            lsum+=arr[j];
        }
        if(lsum==rsum)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int index = equilibrium(arr,n);
   printf("equilibrium index = %d",index);
}