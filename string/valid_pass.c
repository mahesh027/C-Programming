#include<stdio.h>
#include <string.h>
#include <ctype.h>
int valid_pass(char *str,int len)
{   int i,count_num=0,count_sym=0;
    if(len>=8 && (str[0]>='A' && str[0]<='Z'))
   {

    for(int i=0;i<len;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            count_num++;
        }
        if(str[i]=='@'||str[i]=='$'||str[i]=='%'||str[i]=='&')
        {
            count_sym++;
        }
        if(count_num>=1 && count_sym>=1)
        {
            return 1;
        }
    }
}
return 0;
}
int main()
{
    char str[100];
    int count=0;
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    str[len]='\0';
    if(valid_pass(str,len))
    printf("true\n");
    else
    printf("false\n");
  
}