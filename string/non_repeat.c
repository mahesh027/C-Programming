//nonrepeating character in a string
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
void non_repeat(char *str,int len)
{


    for(int i=0;i<len;i++)
    {  for(int j=i+1;j<len;j++)
        
       { if(str[i]==str[j])
        {
          
          
          break;
        }
        else
        {
          printf("%c,",str[i]);
        }
    }
}
}
int main()
{
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    
    non_repeat(str,len);
    
}