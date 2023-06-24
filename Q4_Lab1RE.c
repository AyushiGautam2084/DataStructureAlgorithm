#include <stdio.h>
#include <stdlib.h>

int swapMat(int arr[3][3])
{
    int l,r,i,temp;
    l=0;
    r=2;
    while(l<r)
    {
        for(i=0;i<3;i++)
        {
            temp = arr[i][l];
            arr[i][l] = arr[i][r];
            arr[i][r] = temp;
        }
        l++;
        r--;
    }
}

int main()
{
    int rows, cols;
    int arr[3][3],i,j,n,m;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter values for the array:");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe array before swapping:\n");
    for(n=0;n<3;n++)
    {
        for(m=0;m<3;m++)
        {
            printf("%d\t",arr[n][m]);
        }
        printf("\n");
    }

    swapMat(arr);

    printf("\nThe array after swapping:\n");
    for(n=0;n<3;n++)
    {
        for(m=0;m<3;m++)
        {
            printf("%d\t",arr[n][m]);
        }
        printf("\n");
    }

    return 0;
}