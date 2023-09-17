#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    int word=1;
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    str[len]='\0';
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            word++;
        }
    }
    printf("count:%d",word);
}
