#include <stdio.h>

int convert(int i)
{
    if (i == 0)
        return 0;
    else
        return (i % 2 + 10 * convert(i / 2));
}
 
// Driver code
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The binary equivalent is %d", convert(n));
    return 0;
}