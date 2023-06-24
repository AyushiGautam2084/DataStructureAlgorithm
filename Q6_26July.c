#include <stdio.h>

int main() 
{
    
   char str1[30];
   char str2[30];
   int i;
   
   printf("Enter first string: ");
   scanf("%s",str1);
   
   printf("Enter second string: ");
   scanf("%s",str2);
   
   for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
   {
       printf("%c%c",str1[i],str2[i]);
   }
   
   
   
    return 0;
}