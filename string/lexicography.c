//replace each element with next character in lexicographical order
#include<stdio.h>
#include<string.h>
char lex(char c)
{
    return c+1;
}
int main()
{   int i;
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str)-1;
    str[len]='\0';
    for(i=0;i<len;i++)
    {   if(str[i]!=' ')
        {
         str[i]= lex(str[i]);
        }
    }
    printf("%s\n",str);

}