//convert each lowercase to uppercase and vice-versa
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    str[len]='\0';
    for(int i=0;i<len;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("%s\n",str);
}