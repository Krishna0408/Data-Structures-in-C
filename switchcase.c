#include<stdio.h>
int stack[100],choice,n,top,x,i;

void push(void);
void pop(void);
void display(void);
int main()
{

printf("Enter the size of the Stack");
scanf("%d",&top);
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
scanf("%d",&choice);
switch(choice){
    case 1:
    {
        push();
        break;
    }
    case 2:
    {
        pop();
        break;
    }
    case 3:
        {
        display();
        break;
        }
    case 4:
        {
            return 0;
            break;
        }
}
}
while(choice!=4);
    return 0;

void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
