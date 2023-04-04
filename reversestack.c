#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*head,*temp,*tail,*top;


void create()
{
    int n;
    printf("enter the size ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(top==NULL)
    {
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
    }
}

void reverse() {
    struct node *current = top;
    struct node *prev = NULL;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    top = prev;
}

void display()
{
    temp=top;
    while(top != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
create();
reverse();
display();
}