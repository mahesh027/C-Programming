//replace array element with its rank(index).

#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],n,i,j=0,temp,index=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { 
      scanf("%d",&arr1[i]);
      arr2[i]=arr1[i];
    }
    for(i=0;i<n-1;i++)
    {
     for(j=i+1;j<n;j++)
     {
        if(arr2[i]>arr2[j])
        {
            temp=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=temp;
        }
     }
    }
     for(i=0;i<n;i++)
     {
        if(arr2[i]==arr2[i+1])
        {
          index=i+1;
        
        for(i=index;i<n-1;i++)
        {
            arr2[i]=arr2[i+1];
        }
     }
     }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {   
                arr1[i]=j+1;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }

    
}
    
    
