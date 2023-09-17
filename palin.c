#include<stdio.h>
int reverse(int num)
{   int rev1=0;
    while(num>0)
    {
     rev1=rev1*10 + (num%10);
     num=num/10;
    }
    return rev1;
}
int ispalindrome(int n)
{
  if(reverse(n)==n)
  {
    return 1;
  }
  return 0;
}
int main()
{ 
    int num,sum;
    scanf("%d",&num);
    int rev=reverse(num);
    sum=rev+num;
    while(!ispalindrome(sum))
    {
        rev=reverse(sum);
        sum=sum+rev;
    }
    printf("palindrome number=%d",sum);
}