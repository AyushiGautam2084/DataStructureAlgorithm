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
void addVal(int data, int index)
{
	if (index == 0)
	{
		AtHead(data);
		return;
	}
	struct node *n = createNode(data);
	struct node *temp = head;
	while (index--)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		AtTail(data);
		return;
	}
	struct node *temp2 = temp->next;
	temp->next = n;
	n->next = temp2;
}
void del_Head()
{
    struct node *temp = head;
    head = temp->next;
    free(temp);
}
void del_Tail()
{
    struct node *temp1 = head;
    struct node *temp2 = head;
    while (temp1->next != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL;
    tail = temp2;
    free(temp1);
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
void count()
{
    struct node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
    i++;
    temp = temp->next;
    }
    printf("%d\n", i);
}
void search(int data)
{
    struct node *temp = head;
    int i = -1;
    while (temp != NULL)
    {
    i++;
    if (temp->data == data)
    {
    break;
    }
    temp = temp->next;
    }
    if (i != -1)
    printf("Element %d is at index %d\n", data, i);
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
    int i,a,b,c,d,k,j,del,athead;
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
    show();
    printf("\n");
    printf("Enter values and its index:");
    scanf("%d %d", &k, &j);
    addVal(k, j);
    show();
    printf("Removing some values...\n");
    del_Head();
    show();
    del_Tail();
    show();
    printf("Enter the index of value to delete:");
    scanf("%d",&del);
    del_Index(del);
    printf("Enter value to insert in start:");
    scanf("%d",&athead);
    AtHead(athead);
    show();
    printf("The number of nodes are...\n");
    count();
    printf("Enter the number to search:");
    scanf("%d", &i);
    printf("Searching for the number...\n");
    search(i);
}