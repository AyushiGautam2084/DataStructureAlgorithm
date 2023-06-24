#include <stdio.h>

int main()
{
    int a,i,j,temp,x;
    int arr[30];
    printf("Enter number of elements:");
    scanf("%d",&x);
    for(a=0;a<x;a++)
    {
        printf("Enter values for the array:");
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
    printf("The 2nd smallest value in the given array is %d\n",arr[1]);
    printf("The 2ndlargest value in the given array is %d",arr[x-2]);
    

    return 0;
}
