#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*temp;

int count=0;

void TakeVal(int data)
{
    struct node* node1 = (struct node*)malloc(sizeof(struct node));
    node1->data = data;
    node1->next = NULL;
    if(head == NULL)
    {
        head = node1;
        temp = head;
        count++;
    } 
    else
    {
        temp->next=node1;
        temp=temp->next;
        count++;
    }
}

void show()
{
    if(head==NULL)
    {
        printf("ERROR!");
    }    
    else
    {
        temp=head;
        while(temp!=NULL) 
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

void end(int n)
{
    int i;
    temp=head;
    for(i=0;i<count-n;i++)
    {
        temp=temp->next;
    }
    printf("\nThe %drd node from the end is : %d" ,n,temp->data);
}

int main()
{
    struct node* head = NULL;
    int a,b,c,d,e,n;
    printf("Enter values for the linked list:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    TakeVal(a);
    TakeVal(b);
    TakeVal(c);
    TakeVal(d);
    TakeVal(e);
    printf("\nThe linked list is: ");
    show();
    printf("\nEnter the mth node from the end:");
    scanf("%d",&n);
    end(n);
    return 0;
}