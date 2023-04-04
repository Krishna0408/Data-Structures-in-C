#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
struct node*prev;
}*head,*tail,*new,*temp,*temp1;
void create(int n);
void display(int n);
int main()
{
    int n,a,b;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    create(n);
    display(n);
    return 0;
}
void create(int n){
    int i,value;
    for (i=0;i<n;i++)
    {
    new =(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
    new->prev=NULL;


    if(head==NULL)
    {
        head=new;
        tail=new;

    }
    else
    {
        new->prev=tail;
        tail->next=new;
        tail= new;
    }
}}



void display(int n)
{
    int flag=0;
    temp=head;
    temp1=tail;
    while(temp!=NULL&&temp1!=NULL)
    {

        if(temp->data==temp1->data)
        {
            printf("%d->",temp1->data);
            flag++;

     }



        temp=temp->next;
        temp1=temp1->prev;



    }
    if(flag==n)
    {
        printf("\nit is palidrom");
    }
    else
        {
            printf("\nnot a palidrom");
        }

}
