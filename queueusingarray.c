#include<stdio.h>

int main()
{   
    int queue[50];
    int front=0;
    int rear=-1;
    int ch;
    while(1)
    {
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                if(rear==-1)
                {
                    rear++;
                    printf("\nEnter the element:");
                    scanf("%d",&queue[rear]);
                }
                else
                {
                    rear++;
                    printf("\nEnter the element:");
                    scanf("%d",&queue[rear]);
                }
            }break;
            case 2:
            {
                printf("\nThe Deleted Element is:%d",queue[front]);
                front++;
            }break;
            case 3:
            {
                printf("\nThe Peek element is:%d",queue[front]);
            }break;
            case 4:
            {
                for(int i=front;i<=rear;i++)
                {
                    printf("%d ",queue[i]);
                }
            }
        }
    }
}