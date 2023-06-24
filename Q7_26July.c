#include <stdio.h>
#include <string.h>

int main()
{
    char str[30], c;
    int i, length, count=0;
    
    printf("Enter the string: ");
    gets(str);
    
    length = strlen(str);
    
    printf("Enter a character:");
    scanf("%s", &c);
    
    for(i=0; str[i]; ++i)
    {
        if(str[i]==c)
        {
            count++;
        }    
    }
    
    printf("The letter %c occurs %d times", c, count);

    return 0;
}