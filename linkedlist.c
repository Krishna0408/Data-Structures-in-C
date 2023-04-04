#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
}*head,*temp;

void insertfirst(){
    struct node *newnode;
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("Enter Node at front : ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

void insertend(){
    struct node *newnode;
    newnode=(struct node*) malloc(sizeof(struct node));
    newnode->next=NULL;
    temp=head;
    printf("Enter Node at end : ");
    scanf("%d",&newnode->data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void insertmiddle(){
    int count=0;
    struct node *newnode, *current;
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("Enter new Node at middle : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    current=head;
    while (current!=NULL) {
        count++;
        current=current->next;
    }
    int middle=(count % 2 == 0) ? (count/2) : (count/2 + 1);
    current=head;
    for (int i=1;i<middle-1;i++) {
        current=current->next;
    }
    newnode->next=current->next;
    current->next=newnode;
}

void display(){
     temp=head;
     while (temp!=NULL)
     {
        printf("%d ",temp->data);
        temp=temp->next;
     }  
}

//deletion at front
void deleteAtFront()
{
temp=head;
head=head->next;

  display();
}


//deletion at end
void deleteAtEnd()
{
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    //printf("%d", temp->data);
    temp->next=NULL;
    display();
}

//deletion at middle
void deleteAtMiddle()
{
    int i,pos;
    scanf("%d",&pos);
    temp=head;
    for(i=0;i<pos-1;i++)
    temp=temp->next;
    temp->next=temp->next->next;
    display();
}

int main() {
    int choice=1;
    head=NULL;
    while(choice)
    {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the Data : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Enter the choice : ");
    scanf("%d",&choice);
    }
// insertfirst();
// insertmiddle();
// insertend();
 deleteAtFront();
// deleteAtMiddle();
//deleteAtEnd();
//display();
}

