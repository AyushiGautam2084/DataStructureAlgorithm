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
void searchANDdel(int data)
{
    struct node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            break;
        }
        temp = temp->next;
        i++;
    }
    if (i != -1 && i != 4)
    {
        printf("Element %d is at index %d\n", data, i);
        del_Index(i);
        AtHead(data);
    }    
    else
    {
        printf("Element not found\n");
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
    struct node *node1 = createNode('\0');
    head = node1;
    tail = node1;
    printf("Enter values:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    AtTail(a);
    AtTail(b);
    AtTail(c);
    AtTail(d);
    del_Head();
    printf("The linked list is:\n");
    show();
    printf("\n");
    printf("Enter the number to search:");
    scanf("%d", &i);
    printf("Searching for the number...\n");
    searchANDdel(i);
    printf("Deleting and adding at head...\n");
    printf("The linked list is:\n");
    show();

    return 0;
}