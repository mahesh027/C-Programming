//captalize first and last character of each word of a string
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
    {   if(i==0||i==len-1)
         str[i]=toupper(str[i]);
        if(str[i]==' ')
        {
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }
    }
    printf("%s\n",str);
    
}