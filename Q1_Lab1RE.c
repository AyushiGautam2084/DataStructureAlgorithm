#include <stdio.h>

int main()
{
    int a,n,i,j,temp,x;
    int arr[30];
    printf("Enter size of array:");
    scanf("%d",&x);
    printf("Enter the value of k(for the kth largest number and kth smallest number):");
    scanf("%d",&n);
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
  
    printf("The %dth largest number is %d\n",n,arr[x-n+1]);
    printf("The %dth smallest number is %d",n,arr[n]);

    return 0;
}

