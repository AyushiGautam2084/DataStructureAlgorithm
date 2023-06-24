#include <stdio.h>

int main()
{
    int arr1[3][3],arr2[3][3];
    int i,j,k,x,y,a,b,c,d;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter values for the array1:");
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("The given matrix:\n");
    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            printf("%d\t",arr1[c][d]);
        }
        printf("\n");
    }
    printf("Arranging the rows in increasing order...\n");
    for(i= 0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            for(k=(j+1);k<3;++k)
            {
                if(arr1[i][j]>arr1[i][k])
                {
                    a=arr1[i][j];
                    arr1[i][j]=arr1[i][k];
                    arr1[i][k]=a;
                }
            }
        }
    }


    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            printf("%d\t",arr1[c][d]);
        }
        printf("\n");
    }

    printf("Arranging the columns in decresing order...\n");

    for(j=0;j<3;++j)
    {
        for(i=0;i<3;++i)
        {
            for(k=i+1;k<3;++k)
            {
                if(arr1[i][j]<arr1[k][j])
                {
                    b=arr1[i][j];
                    arr1[i][j]=arr1[k][j];
                    arr1[k][j]=b;
                }
            }
        }
    }

    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            printf("%d\t",arr1[c][d]);
        }
        printf("\n");
    }

    return 0;
}