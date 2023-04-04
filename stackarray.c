#include <stdio.h>
int stack[10],n,i,option=0,top=-1,val;
int main()
{

    while(1)
    {
        printf("\n\n**STACK USING ARRAY**\n\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("enter your choice(1,2,3,4): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
void push()
{

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    printf("\nenter elements:");
    scanf("%d",&val);
    top=top+1;
    stack[top]=val;
    }
}
void pop()
{

 if(top==-1)
 {
   printf("\nstack is empty");
 }
 else
 {
     printf("\n %d is deleted ",stack[top]);
     top=top-1;

 }
}
 void peek()
 {

     if(top==-1)
{
         printf("\nstack is empty");
     }
     else{
        printf("top element is %d",stack[top]);
     }
 }
 void display()
 {

    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top==-1)
    {
        printf("stack is empty");
    }
 }