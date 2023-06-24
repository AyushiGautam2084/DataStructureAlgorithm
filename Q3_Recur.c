#include<stdio.h>  
  
int mini(int *arr, int n, int i)  
{  
    if(n < 0)  
        printf("The smallest element in the array is %d\n", i);  
    else  
    {  
        if(i > *arr)  
            i = *arr;  
  
        mini(++arr, --n, i);  
    }
    return 0;  
}  
  
int main()  
{  
    int arr[5], a;    
    for(a = 0; a < 5; a++)
    { 
        printf("Enter values for the array:"); 
        scanf("%d", &arr[a]);  
    }    
  
    mini(arr, 4, arr[0]);  
  
    return 0;  
}