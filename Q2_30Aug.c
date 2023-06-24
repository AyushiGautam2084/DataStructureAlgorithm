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
void count(int data)
{
    struct node *temp = head;
    int count=0;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            count++;
        }
        temp = temp->next;
    }
    printf("The number %d appears %d times\n",data, count);
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
    printf("Enter the number to search:");
    scanf("%d", &i);
    show();
    count(i);
    return 0;
}

