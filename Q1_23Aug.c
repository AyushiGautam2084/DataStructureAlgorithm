#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}*stnode;

void makenode(int i);
void showlist();

int main()
{
    int i;
    printf("Enter the number of nodes for the linked list:");
    scanf("%d",&i);
    makenode(i);
    showlist();

    return 0;
}

void makenode(int i)
{
    struct node *fnnode, *temp;
    int data,n;
    stnode=(struct node*)malloc(sizeof(struct node));
    if (stnode==NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("Input data for node:");
        scanf("%d",&data);
            stnode -> data=data;
            stnode -> link=NULL;
                temp>stnode;
        for(n=0;n<i-1;n++)
        {
            fnnode = (struct node*)malloc(sizeof (struct node));
            if(fnnode==NULL)
            {
                printf("Overflow");
            }
            else
            {
                printf("Input data for node:");
                scanf("%d",&data);
                    fnnode -> data = data;
                    fnnode -> link = NULL;
            }
        }
    }
}

void showlist()
{
    struct node *temp1;
    if(stnode==NULL)
    {
        printf("The list is empty.");
    }
    else
    {
        temp1=stnode;
        while(temp1!=NULL)
        {
            printf("The data is %d",temp1 -> data);
            temp1 = temp1 -> link;
        }
    }
}