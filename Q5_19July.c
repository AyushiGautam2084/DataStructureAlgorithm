#include <stdio.h>

int main()
{
    int a,i,j,x,c,d,count=0,count1=0;
    int arr[30];
    printf("Enter number of elements:");
    scanf("%d",&x);
    for(a=0;a<x;a++)
    {
        printf("Enter values for the array:");
        scanf("%d",&arr[a]);
    }
    
    printf("To find the number of elements between A and B\n");
    printf("A:");
    scanf("%d",&c);
    printf("B:");
    scanf("%d",&d);
    for(j=0; j<x; j++)
    {
        if(arr[j]==c || arr[j]==d)
        {
            count++;
        }
        if(arr[i]>c && arr[i]<d)
        {
            count1++;
        }

    }    

    printf("The number of elements between A and B are %d", count+count1);
    
    return 0;
}


