#include <stdio.h>
#include <stdlib.h>

int len = 5, count =-1;
void push(int st[], int val)
{
    if(len==-1)
    {
        printf("STACK OVERFLOW!");
    }
    else
    {
        count++;
        st[count]=val;
    }
}
void reverse(int st[])
{
    int i, st1[len];
    if(count==-1)
    {
        printf("Empty stack");
    }
    else
    {
        for(i=0;i<len;i++)
        {
            printf("%d",st[i]);
            printf("\n");
        }
    }
}

void display(int st[])
{
    int i;
    if(count==-1)
    {
        printf("Empty stack");
    }
    else
    {
        for(i=count;i>=0;i--)
        {
            printf("%d",st[i]);
            printf("\n");
        }
    }
}


int main()
{
    int i,j,k,st[len];
    printf("Entering values in stack...\n");
    push(st,1);
    push(st,2);
    push(st,4);
    push(st,5);
    push(st,8);
    printf("Printing the stack...\n");
    display(st);
    printf("Printing the stack in reverse...\n");
    reverse(st);
    return 0;
}

