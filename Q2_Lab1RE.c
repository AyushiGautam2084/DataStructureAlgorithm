#include <stdio.h>

int main()
{
    int a,i,j,temp,n,count=0,x;
    int arr[30]={0};
    printf("Enter size of array:");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        printf("Enter values for the array:");
        scanf("%d",&arr[a]);
    }
    printf("Searching for the largest number...\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i-1;j++)
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

    x=arr[n];

    for(i=1;i<n+1;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
        else
        {
            continue;
        }
    }

    printf("The largest number is %d and it occurs %d times",x,count);

}