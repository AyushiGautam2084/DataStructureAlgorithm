#include <stdio.h>

int sum(int n) 
{ 
    int i;
    if (n == 0) 
        return 0; 
    i = n % 10; 
    return i + sum(n / 10); 
} 
 
int main() 
{ 
    int n,i; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
     
    i = sum(n); 
    printf("Sum of digits is %d", i); 
    return 0; 
} 
 
