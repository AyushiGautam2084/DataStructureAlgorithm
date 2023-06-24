	
// Simple C program to print next greater elements
// in a given array
#include<stdio.h>

/* prints element and NGE pair for all elements of
arr[] of size n */
void NGE(int arr[], int n)
{
	int a, i, j;
	for (i=0; i<n; i++)
	{
		a = -1;
		for (j = i+1; j<n; j++)
		{
			if (arr[i] < arr[j])
			{
				a = arr[j];
				break;
			}
		}
		printf("%d -- %d\n", arr[i], a);
	}
}

int main()
{
	int arr[5]= {0},a,n;
    for(a=0;a<5;a++)
    {
        printf("Enter values for the array:");
        scanf("%d",&arr[a]);
    }    
	n = sizeof(arr)/sizeof(arr[0]);
	NGE(arr, n);
	return 0;
}
