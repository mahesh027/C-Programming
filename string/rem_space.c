#include<stdio.h>
#include<string.h>
#include<ctype.h>
void rem_spaces(char *str,int n)
{   int i,shift=0;
    for(i=0;i<n;i++)
    {
        if(str[i]==' ')
          {
            shift++;        //str[i+1]=toupper(str[i+1]); use this for camelcase conversion
              
          }          
        else
           str[i-shift] = str[i];
    }
    str[i-shift] = '\0';
}
int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len=strlen(str)-1;
    str[len]='\0';

    rem_spaces(str,len);

    printf("String without spaces: %s\n", str);

    return 0;
}