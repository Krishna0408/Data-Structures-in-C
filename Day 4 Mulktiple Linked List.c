#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head,*tail,*new,*temp,*temp1,*head1,*tail1;
void create(int n);
void create1(int m);
void insert();
void display();
void add();
int main()
{
    int n,value,m,result;
    printf("Enter nodes: ");
    scanf("%d",&n);

    create(n);
    printf("Enter nodes: ");
    scanf("%d",&m);
    create1(m);

printf("the nodes are:");
add();
}
void display()
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void create(int n){
    int i,value;
    for(i=0;i<n;i++)
    {
    new =(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        tail=new;
    }
    else
    {
        tail->next=new;
        tail= new;
    }
}
}
void create1(int m){
    int i,value;
    for (i=0;i<m;i++)
    {
    new =(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;

    if(head1==NULL)
    {
        head1=new;
        tail1=new;

    }
    else
    {
        tail1->next=new;
        tail1= new;
    }
}
}
void add()
{
    int count=0;
    int js;
    temp=head;
    temp1=head1;
    while(temp!=NULL&&temp1!=NULL)
    {
        js=temp->data+temp1->data;
        printf("%d->",js);
        temp=temp->next;
        temp1=temp1->next;
    }
}
