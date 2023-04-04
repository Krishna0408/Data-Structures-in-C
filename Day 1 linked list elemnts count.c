#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*tail;

int count = 0;

void insert(int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

void count_num()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("Count: %d\n",count);
}
void main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);

    count_num();
    if(count % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
