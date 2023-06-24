#include <stdio.h>

int main()
{
    int a,i,j,temp,x;
    int arr[30];
    printf("Enter size of the array:");
    scanf("%d",&x);
    for(a=0;a<x;a++)
    {
        printf("Enter values for the array(0s or 1s):");
        scanf("%d",&arr[a]);
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<=x-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else
            {
                continue;
            }
        }
    }

    for(a=0;a<x;a++)
    {
        printf("%d  ",arr[a]);
    }

    return 0;
  
}



