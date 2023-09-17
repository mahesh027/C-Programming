//number can be expressed as a sum of 2 prime
#include<stdio.h>
int isprime(int num)
{  int i;
    if(num<2)
     return 0;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return num;
}

int main()
{
    int num,i,j=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
     for(j=i;j<=num;j++)      //instead of nested loop ith and (num-i)th number can be checked
     {  if(isprime(i) && isprime(j))
        if(num==(i+j))
        {
            printf("%d = %d + %d\n",num,i,j);
        }
     }
    }

}