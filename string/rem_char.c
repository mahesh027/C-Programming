//remove characters except alphabets
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isalphabet(char c)
{
    c=tolower(c);
    if(c>='a' && c<='z')
    return 1;
    
    return 0;
}
int main() {
    char str[100];
    int len,count=0,i=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len=strlen(str)-1;
    str[len]='\0';
    for(i=0;str[i]!='\0';i++)
    {
        if(isalphabet(str[i]))
        {
            str[count]=str[i];
            count++;
        }
    }
    str[count]='\0';
    printf("%s\n",str);
}
