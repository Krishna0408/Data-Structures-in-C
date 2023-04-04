#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front,*head,*rear,*temp;
void create (){
    int n;
    printf("Enter Size :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        if(front == NULL){
            front=newnode;
            rear=newnode;
            rear->next=NULL;
        }
        else{
            rear->next=newnode;
            rear=newnode;
            rear->next=NULL;
        }
    }
}

void display()
{
    temp=front;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void enqueue(){
     struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter element to enqueue :");
        scanf("%d",&newnode->data);
        rear->next=newnode;
        rear=newnode;
        rear->next=NULL;
        display();
}

void dequeue(){
    front =front ->next;
    display();
}

int main(){
    int choice;
    while(1){
        printf("\n1.create()\n2.Enqueue()\n3.dequeue()\n4.display()");
        printf("\nEnetr your choice :");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            enqueue();
            break;
        case 3:
            dequeue();
            break;
        case 4:
            display();
            break;
        default:
            break;
        }
    }
    
}