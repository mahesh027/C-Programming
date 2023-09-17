#include<stdio.h>
#include<string.h>
#include<ctype.h>
int ispalindrome(char *str,int len)
{   int i;
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
         return 0;
    }
         return 1;
}
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    str[len-1]='\0';
    if(ispalindrome(str,len-1))
     printf("Palindrome");
    else
     printf("Not palindrome");
}