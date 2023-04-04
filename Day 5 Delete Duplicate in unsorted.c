#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *head,*next;
}*head,*tail,*temp,*new,*index;

void create(int n){
    int i,value;
    for (i=0;i<n;i++)
    {
    new =(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;

    if(head==NULL)
    {
        head=new;
        tail=new;

    }
    else
    {
        tail->next=new;
        tail= new;
    }
}
}
void sortList() {
        struct node *temp = head, *index = NULL;
        if(head == NULL) {
            return;
        }
        else {
            while(temp != NULL) {
                index = temp->next;

                while(index != NULL) {
                    if(temp->data > index->data) {
                        temp = temp->data;
                        temp->data = index->data;
                        index->data = temp;
                    }
                    index = index->next;
                }
                temp = temp->next;
            }
        }
    }
void compare()
{
struct node* temp = head;
struct node* next;

if(temp==NULL){
    return;
}
while(temp->next != NULL)
{
    if(temp -> data == temp->next->data)
    {
    next = temp->next->next;
    free(temp->next);
    temp->next=next;
    }
    else{
       temp=temp->next;
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
    create(5);
    compare();
    display();
    sortList();
}
