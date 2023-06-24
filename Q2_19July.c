#include <stdio.h>

int main()
{
    int a,i,x;
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
        printf("%d\n",arr[x-1-i]);
    }
    
    return 0;
}

