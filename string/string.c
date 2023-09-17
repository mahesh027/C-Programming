#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
   int sum=str[len-1]-'0'+str[len-2]-'0';
    if(sum==3||sum==8)
    {
        printf("\nLucky winnner");
    }
    else
    {
      printf("\nNot a lucky winner");
    }

}