#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node*next;
}*front=NULL,*rear=NULL,*newnode,*temp;
int main()
{
    int option;
    while(1)
    {
        printf("\n\n**CIRCULAR QUEUE**\n\n");
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("enter your choice(1,2,3,4): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        }
        }
        return 0;
}
void enqueue()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter elements:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
    front=rear=newnode;
    }
    else
    {
    rear->next=newnode;
    rear=newnode;
    rear->next=front;
    }

    }
}

void dequeue()
{
    if(front==NULL && rear==NULL)
    {
        printf("\nstack is empty");
    }
    else
    {
        temp = front;
        printf("\n%d is deleted ", front->data);
        if(front == rear)
        {
            front = rear = NULL;
        }
        else
        {
            front = front->next;
            rear->next = front;
        }
        free(temp);
    }
}

 void peek()
 {
     if(front==NULL && rear==NULL)

     {
         printf("\n stack is empty");
     }
     else{
        printf("front element is %d",front->data);
     }
 }
 void display()
 {
     temp=front;
     do
        {
            printf("\n%d",temp->data);
            temp=temp->next;
        }
       while(temp !=front);
 }