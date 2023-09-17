#include<stdio.h>
int getdigit(int num)
{   int rem,rev=0;
    while(num>0)
    {
        rem=num%10;
        if(rem==2||rem==3||rem==5||rem==7)
        {
            num=num/10;
            rev=rev*10+rem;
        }
        else
        {
          return 0;
        }
    }
    return 1;
}

int main()
{
    int n,i,j,count=0,number;
    scanf("%d",&n);
    for(i=1;;i++)
    {  if(getdigit(i))
       { number=i;
         count++;
       }
       if(count==n)
       {
         break;
       }

    }
    printf("%dth number made of prime number is %d",count,number);

}