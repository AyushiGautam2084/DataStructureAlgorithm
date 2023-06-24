#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head;
struct node *tail;
struct node *createNode(int data)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}
void AtTail(int data)
{
	struct node*temp = createNode(data);
	tail->next = temp;
	tail = temp;
}	
void AtHead(int data)
{
	struct node *temp = createNode(data);
	temp->next = head;
	head = temp;
}
void del_Head()
{
    struct node *temp = head;
    head = temp->next;
    free(temp);
}
void del_Index(int index)
{
    if (index == 0)
    {
        del_Head();
        return;
    }
    struct node *temp1 = head;
    struct node *temp2 = head;
    while (index--)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    free(temp1);
}
void del_duplicate()
{
    struct node *temp = head;
    struct node *temp1 = temp->next;
    int i;
    while(temp!=NULL)
    {
        for(i=0;i<4;i++)
        {
            if(temp->data == temp1->data)
            {
                printf("Found a duplicate element! \n");
                printf("Removing duplicate data...\n");
                del_Index(i);
                break;
            }
            else
            {
                continue;
            }
            temp1=temp->next;
        }
        temp=temp->next;
    }
}
void show()
{
	struct node *temp = head;
	while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}
int main()
{
    int i,a,b,c,d;
    printf("Entering Values...\n");
    struct node *node1 = createNode(1);
    head = node1;
    tail = node1;
    printf("Enter values:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    AtTail(a);
    AtTail(b);
    AtTail(c);
    AtTail(d);
    del_Head();
    show();
    printf("\n");
    printf("Searching for the duplicate...\n");
    del_duplicate();
    printf("The linked list is :");
    show();
    return 0;
}

