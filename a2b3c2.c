#include<stdio.h>
#include<stdlib.h>
void display();
void insert();






struct node
{
char *data;
struct node * next,*previous;

}*head,*temp,*newnode,*nextnode,*tail;

int main()
{
int option;
while(1)
{
printf("1.insertion\n");
printf("2.display\n");

printf("enter your choice(1,2,3,4,5,6,7,8,9,10,11):");
scanf("%d",&option);

switch(option)
{
  case 1:{insert();break;}
  case 2:{display();break;}
}

}
}
void insert()
{
   int choice=1;

   while(choice==1)
   {
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter the data");
       scanf("%s",&newnode->data);
       newnode->next=0;
       newnode->previous=0;
       if(head==0&&tail==0)
       {
           head=tail=newnode;
       }
       else
       {
           temp=tail;
           while(temp->next!=0)
           {
               temp=temp->next;
           }
           temp->next=newnode;
           newnode->previous=temp;
           tail=newnode;
       }
       printf("enter the choice");
       scanf("%d",&choice);
   }
}
   void display()
{
    int count=0;

    temp=head;

    while(temp->next!=0)
    {

        count=temp->next->data;
        temp=temp->next->next;
    }
        for(int i=0;i<=count;i++)
        {
                   printf("%c",temp->data);

        }
    }