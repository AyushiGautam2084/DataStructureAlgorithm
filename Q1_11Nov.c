#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len = 5, count =-1;
void push(char st[], char val)
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

void pop(char st[])
{
    char val;
    if(count==-1)
    {
        printf("STACK UNDERFLOW!");
    }
    else
    {
        val=st[count];
        count--;
        return val;
    }
}

void display(char st[])
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
            printf("%s",st[i]);
            printf("\n");
        }
    }
}

void in_to_post(char st[])
{
    int i;
    for(i=count;i<len;i--)
    {
        if(st[i]==')'||st[i]=='(')
        {
            if(st[i]=='-'||st[i]=='+'||st[i]=='/'||st[i]=='*')
            {
                printf("%s %s",st[i+1],st[i]);
            }
            else
            {
                printf(" %s ",st[i]);
            }
        }
        else
        {
            continue;
        }
    }
}


int main()
{
    int i,j,k;
    char st[len];
    printf("Entering values in stack...\n");
    push(st,'a');
    push(st,'+');
    push(st,'b');
    push(st,'*');
    push(st,'c');
    printf("Infix to Postfix...\n");
    in_to_post(st);
    return 0;
}

