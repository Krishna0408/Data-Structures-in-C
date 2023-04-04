#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *head,*next;
}*head,*tail,*temp;

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
void compare()
{
struct node* temp = head;
struct node* next;

if(temp==NULL){
    return;
}
while(temp -> next != NULL)
{
    if(temp -> data == temp -> next -> data)
    {
    next = temp -> next -> next;
    free(temp->next);
    temp -> next = next;
    }
    else{
    temp = temp -> next;
    }
}
}
void display()
{
    temp=head;
    while (temp!=NULL)
    {
       printf("%d ->", temp->data);
       temp = temp->next;
    }
}

void main()
{
    insert(1);
    insert(2);
    insert(2);
    insert(2);
    insert(3);
    insert(3);
    insert(5);
    insert(6);
    insert(8);
    compare();
    display();
}
