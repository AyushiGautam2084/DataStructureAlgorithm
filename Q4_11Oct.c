#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[3][3],arr2[3][3],arr3[3][3],count=0,i,j;
    printf("Enter elements for matrix 1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter elements for matrix 2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Printing the given matrix 1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Printing the given matrix 2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\nPrinting after adding...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }


    return 0;
}