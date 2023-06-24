#include<stdio.h>
#include<string.h>

int main()
{
    char str[30];
    int length, i=0;
    
    printf("Enter the String: ");
    scanf("%s",str);
    
    length = strlen(str);
    
    printf("printing the given string with alternate letters...\n");
    
    for(i=0; i<length; i=i+2)
    {
        printf("%c",str[i]);
    }
    return 0;
}