#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*tail;

int count_node = 0;

void insert(int value)
{
    struct node *new_node  = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
        count_node++;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
        count_node++;
    }
}
void minmaxmin()
{

}

void display()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Elements in the linked list:\n");
        struct node *temp = head;
        while(temp != NULL)
        {
            printf("%d ->",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();
}

