//number which is divisible by sum of its digit
#include<stdio.h>
int sum_digit(int num)
{   int sum=0;
    while(num>0)
    {
        sum=sum+(num%10);
        num/=10;
    }
    return sum;
}
int main()
{
    int num;
    scanf("%d",&num);
    int total=sum_digit(num);
    if(num%total==0)
    printf("%d is harshad's number",num);
    else
    printf("%d is not a harshad number",num);
    
}