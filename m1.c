#include <stdio.h>
#include <conio.h>
#include <ctype.h>
char s[30];
int count=-1;
push(char val)
{
    s[++count]=val;
}

char pop()
{
    return(s[count--]);
}

int check(char val)
{
    switch(val)
    {
        case '#': return 0;
        case '(': return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/': return 3;
    }
}

int main()
{
    char in[30],post[30],ch,val;
    int i=0,k=0;
    printf("\nEnter the Infix Expression: ");
    scanf("%s",in);
    push('#');
    while( (ch=in[i++]) != '\0')
    {
        if( ch == '(') 
        {
            push(ch);
        }    
        else if(isalnum(ch)) post[k++]=ch;
        else if( ch == ')')
        {
            while( s[count] != '(')
            post[k++]=pop();
            val=pop();
        }
        else
        {
            while( check(s[count]) >= check(ch) )
            post[k++]=pop();
            push(ch);
        }
    }
    while( s[count] != '#')
    post[k++]=pop();
    post[k]='\0';
    printf("\n\nGiven Infix Expression: %s\nPostfix Expexpression: %s\n",in,post);

    return 0;
}


