#include <stdio.h>
#include <conio.h>

int rev(int num)
{
    int rem;
    static int sum=0;
    if(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        rev(num/10);
    }
    else
        return sum;
    
} 


int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == rev(num))
    {
        printf("Its a palindrome!");
    }
    else
    {
        printf("Its not a palindrom.");
    }
 
    return 0;
}


