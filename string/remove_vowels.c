#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isvowel(char c)
{
    c=tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    return 1;
    
    return 0;
}

void rem_vowel(char *str,int n)
{   int i,shift=0;
    for(i=0;i<n;i++)
    {
        if(isvowel(str[i]))
          shift++;
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

    rem_vowel(str,len);

    printf("String without vowels: %s\n", str);

    return 0;
}
