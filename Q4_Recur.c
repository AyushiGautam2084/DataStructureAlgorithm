#include <stdio.h>
 
int Sort(int arr[], int len)
{
   int temp,i;
   if (len == 1)
   {
      return 0;
   }
   for (i=0; i<len-1; i++)
   {
      if (arr[i] > arr[i+1])
      {
         temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
      }
   }
   len=len-1;
   Sort(arr, len);
}

int main()
{
   int arr[5] = {0}, length,a;
   for(a = 0; a < 5; a++)
    { 
        printf("Enter values for the array:"); 
        scanf("%d", &arr[a]);  
    }  
   length = sizeof(arr)/sizeof(arr[0]);

   Sort(arr, length);

   printf("The array after sorting...\n");
   for(int i=0;i<length;i++)
   {
      printf("%d\n",arr[i]);
   }

    return 0;
}