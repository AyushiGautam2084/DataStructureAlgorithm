#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3],count=0,i,j;
    printf("Enter elements for matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing the given matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>((3*3)/2))
    {
        printf("Its a sparse matrix");
    }
    else
    {
        printf("It is not a sparse matrix");
    }

    return 0;
}