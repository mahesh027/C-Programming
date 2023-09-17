#include<stdio.h>
int main()
{
    int arr[100],n,i,key,flag=0,index;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {   flag=1;
            index=i;
            break;
        }
    }
    if(flag==0)
    {
        printf("no key found");
    }
    else
    {
        printf("key found at index =%d",index);
    }
}