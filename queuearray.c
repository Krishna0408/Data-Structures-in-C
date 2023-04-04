#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int n,i,queue[SIZE],option=0,ele,front=-1,rear=-1;
int main()
{
    int option;
    while(1)
    {
        printf("\n\n**QUEUE ARRAY**\n\n");
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

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    if(rear==SIZE-1)
    {
        printf("queue is full");
    }
    else if(front ==-1 && rear ==-1)
    {

        front=rear=0;
        printf("enter ele: ");
        scanf("%d",&ele);
        queue[rear]=ele;
    }
    else{
    rear++;
    printf("\nenter elements:");
    scanf("%d",&ele);
queue[rear]=ele;
    }
    }
  }

void dequeue()
{

 if(front==-1 && rear==-1)
 {
   printf("\nqueue is empty");
 }
 else if(front == rear)
 {
     front=rear=-1;
 }
 else{
     printf("\n %d is deleted ",queue[front]);
     front++;
 }
 }

 void peek()
 {
     if(front==-1 && rear==-1)

     {
         printf("\nqueue is empty");
     }
     else{
        printf("front element is %d",queue[front]);
         }
 }
 void display()
 {

    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
}


}