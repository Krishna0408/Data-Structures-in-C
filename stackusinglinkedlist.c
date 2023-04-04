  #include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
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

void display()
{
    temp=top;
    while(top != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void push(){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("enter element to push :");
    scanf("%d",&newNode->data);
    newNode->next = top;
    top = newNode;
}

void pop(){ 
        top = top->next; 
    }

int main()
{
    int choice;
    while(1) {
        printf("\n1.create \n2.push\n3.pop\n4.display\n5.exit");
        printf("\nEnter choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                create();
                break;
            case 2:  
                push();
                break;
            case 3:
                pop();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
        }
    }
    return 0;
}
