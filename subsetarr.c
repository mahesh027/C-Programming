#include<stdio.h>
int subarray(int *arr1,int *arr2,int n,int m)
{int i,j,count=0;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
        if(arr1[j]==arr2[i])
        {  count++;
           break;
        }
    }
  }
  if(count==m)
  {
    return 1;
  }
  return 0;
}
int main()
{
    int arr1[100],arr2[100],n,m,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }

    if(subarray(arr1,arr2,n,m))
     printf("arr2[] is subset of arr1[]");
    else
     printf("arr2[] is not subset of arr1[]");
}