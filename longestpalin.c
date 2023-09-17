#include<stdio.h>
int ispalindrome(int num)
{  int rev=0,temp;
    temp=num;
    if(num<0)
    {
        return 0;
    }
    while(num>0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    if(temp==rev)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int arr[100],n,i,palin,largest=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
     { 
        if(ispalindrome(arr[i]))
        {
          if(largest==-1||largest<arr[i])
           {
            largest=arr[i];
           }
        }
     }
    printf("largest palindrome==%d",largest);
}