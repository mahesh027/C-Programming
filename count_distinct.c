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
int count_distinct(int *arr,int n)
{   int count=0,i=0;
  for(i=0;i<n;i++)
   {
     while(i<n-1 && arr[i]==arr[i+1])
     {
        i++;
     }
     count++;
   }
   return count;
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
int result=count_distinct(arr,n);
printf("%d",result);
}