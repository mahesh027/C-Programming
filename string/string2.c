//remove character from 1st string present in the 2nd string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void remove_char(char *str1,char *str2,int len1,int len2)
{
    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(str1[i]==str2[j])
            {   
                for(int k=i;k<len1;k++)
                {  
                    str1[k]=str1[k+1];
                }
               
                len1--;
                str1[len1]='\0';
                i--;
            }
        }
     }
     printf("str1: %s\n",str1);
     printf("str2: %s\n",str2);
}

int main()
{
    char str1[100],str2[100],count=0,i=0,j=0;
    scanf("%s",str1);
    scanf("%s",str2);
    int len1,len2;
    len1=strlen(str1);
    len2=strlen(str2);
    remove_char(str1,str2,len1,len2);
}