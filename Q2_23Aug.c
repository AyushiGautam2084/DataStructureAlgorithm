// C Program to Reverse a Linked List
#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* create_node(int data)
{
    struct node* new_node = (struct node*) malloc (sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Can't allocate memory a for new node");
        return NULL;
    }
    else
    {
        new_node -> data = data;
        new_node -> next = NULL;
        return new_node;
    }
}
int AtHead(int data)
{
    struct node* new_node = create_node(data);
    if (new_node != NULL)
    {
        new_node -> next = head;
        head = new_node;
    }
}
void revlist()
{
    struct node* last = NULL,*this = head, *next = NULL;
    while (this != NULL)
    {
        next = this -> next;
        this ->next = last;
        last = this;
        this = next;
    }
    head = last;
}
void show()
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int a,b,c,d,e;
    printf("Enter values:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    AtHead(a);
    AtHead(b);
    AtHead(c);
    AtHead(d);
    AtHead(e);
    revlist();
    printf("Linked List before reversed:");
    show();
    revlist();
    printf("\nLinked List after reversed:");
    show();
    return 0;
}
