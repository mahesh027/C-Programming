//count vowels,consonants,spaces in string
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
int main() {
    char str[100];
    int len,i,vowel=0,cons=0,space=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len=strlen(str)-1;
    str[len]='\0';

for(i=0;i<len;i++)
{
    if(isvowel(str[i]))
        vowel++;
    else if(str[i]==' ')
       space++;
     else
       cons++;
    
}
printf("Vowels: %d\nConsonants: %d\nWhite spaces: %d\n",vowel,cons,space);
}