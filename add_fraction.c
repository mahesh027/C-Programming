#include<stdio.h>
int gcd(int a,int b)
{   int gcd,i=0;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int num1,num2,deno1,deno2,numerator,denominator;
    scanf("%d%d%d%d",&num1,&num2,&deno1,&deno2);
    numerator=(num1*deno2)+(num2*deno1);
    denominator=(deno1*deno2);
    int hcf=gcd(numerator,denominator);
    printf("(%d / %d) + (%d / %d ) = (%d / %d )",num1,deno1,num2,deno2,numerator/hcf,denominator/hcf);
    
}