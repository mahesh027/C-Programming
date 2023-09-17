#include<stdio.h>
#include<string.h>
#include<ctype.h>
void sort(char *str,int len)
{ int temp,i=0,j=0;
  for(i=0;i<len;i++)
  {
    for(j=i+1;j<len;j++)
    {
        if(str[i]>str[j])
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
  }
}

int main()
{
    char str[100];
    int count=1,i=0,j=0;
    scanf("%s",str);
    int len=strlen(str);
    sort(str,len);
    for(i=0;i<len;i++)
    {    count=1;
        {  while(str[i]==str[i+1])
          {
            count++;
            i++;
          }
        }
        printf("%c%d\t",str[i],count);
    }
}
