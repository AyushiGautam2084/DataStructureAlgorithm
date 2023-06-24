#include <stdio.h>
#include <string.h>

int main()
{
   char str[100];
   int i,length;
   printf("Enter the string: ");
   scanf("%s", str);
   length=strlen(str);
   printf("\nReverse of the string is: ");

   for(i=length-1;i>=0;i--)
   {
      printf("%c",str[i]);
   }
   return 0;
}