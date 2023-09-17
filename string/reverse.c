#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverse(char *str,int n)
{   int temp,i;
    for(i=0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
}
int main()
{
    char str[100];
    int len;
    fgets(str,sizeof(str),stdin);
    len=strlen(str)-1;
    str[len]='\0';
     reverse(str,len);
    printf("reverse: %s\n",str);

}