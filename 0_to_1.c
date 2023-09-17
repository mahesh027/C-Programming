//replace all 0's with 1 in a integer
#include<stdio.h>
int getdigit(int num)
{   int rem,rev=0;
    while(num>0)
    {
        rem=num%10;
        if(rem==0)
         rem=1;
         num=num/10;
         rev=rev*10+rem;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    n=1;
  int res = getdigit(n);
  int result=getdigit(res);
  printf("result=%d",result);
}