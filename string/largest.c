//largest word in a given string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void largest(char *str,int len)
{   int count=0,i,largest=-1,index=0;
    for(i=0;i<len;i++)
    {   count=0;
        while(str[i]!=' ' && str[i]!='\0')
        {   
            count++;
            i++;
        }
        if(largest==-1||largest<count)
        {
            largest=count;
            index=i;
        }
    }
    for(i=index-largest;i<=index;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    str[len]='\0';
    largest(str,len);
}