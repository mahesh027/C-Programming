//sum of numbers in a string
//eg: Input:"1xyz23"; Output:24;

#include<stdio.h>
#include <string.h>
#include <ctype.h>
int getdigit(char *str,int len)
{   int sum=0,i=0,num;
    for(i=0;i<len;i++)
    {   num=0;
        while(str[i]>='0' && str[i]<='9')
        {
          num=num*10+(str[i]-'0');
          i++;
        }
        sum=sum+num;
    }
    return sum;
}
int main()
{
    char str[100];
    int len;
    scanf("%s",str);
    len=strlen(str);
  int tot=getdigit(str,len);
  printf("%d\n",tot);

}