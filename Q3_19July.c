#include <stdio.h>

int main()
{
    int a,i,j,k,x;
    j=0;
    int arr[30];
    printf("Enter number of elements:");
    scanf("%d",&x);
    for(a=0;a<x;a++)
    {
        printf("Enter values for the array:");
        scanf("%d",&arr[a]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&i);
    while(j<x && i !=arr[j])
    {
        j++;
    }

    if(j<x)
    {
        printf("The element was found at %dth location",j+1);
    }
    else
    {
        printf("Element not present in the array");
    }

    return 0;


}