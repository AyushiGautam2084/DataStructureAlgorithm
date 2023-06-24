#include <stdio.h>
#include <string.h>

void changePOS(char *s1, char *s2)
{
    char tmp;
    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}
void perm(char *s, int x, int y)
{
   int i;
   if (x == y)
     printf("%s  ", s);
   else
   {
       for (i = x; i <= y; i++)
       {
          changePOS((s+x), (s+i));
          perm(s, x+1, y);
          changePOS((s+x), (s+i)); 
       }
   }
}
 
int main()
{  
    char str1[100];
    int l;
   
   printf("Enter a string:");
   scanf("%s",str1);
   l = strlen(str1);
   printf("The permutations of the string are:\n");
   perm(str1, 0, l-1);
   
    return 0;
}
