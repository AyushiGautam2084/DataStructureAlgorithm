#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    int data;
    struct node *last;
};

struct node *head;
struct node *tail;
struct node *createnode(int data)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
    temp->last = NULL;
	return temp;
}
void AtTail(int data)
{
	struct node*temp = createnode(data);
	tail->next = temp;
	tail = temp;
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
    int i,j,k;
    printf("Enter a value:");
    scanf("%d",&i);
    struct node *node1 = createnode(i);
    show();
    printf("Enter other values:");
    scanf("%d %d",&j,&k);
    AtTail(j);
    AtTail(k);
    show();

}