#include <stdio.h>

int strlength(char str[], int i)
{
    if (str[i] == '\0')
    {
        return 0;
    }
    return (1 + strlength(str, i + 1));
}

int main()
{
    char str[30];
    int count;
    printf("Enter a string: ");
    scanf("%s", str);
    count = strlength(str, 0);
    printf("\nThe number of characters in in the string are %d", count);
    return 0;
}
