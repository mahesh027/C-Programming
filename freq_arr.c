#include<stdio.h>
void sort(int *arr,int n)
{   int temp,i=0,j=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            }
        }
    }
}
void count_freq(int *arr,int n)
{   int i,count;
    for(i=0;i<n;i++)
    { count=1;
      while(i<n-1 && arr[i]==arr[i+1])
      {
        i++;
        count++;
      }
     printf("count of %d is %d\n",arr[i],count);
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
    sort(arr,n);
    count_freq(arr,n);
}


