#include<stdio.h>
#include<stdlib.h>
 
struct node{
   int data;
   struct node *next;
}*head=NULL,*temp,*tail=NULL;
 
void rotate(int a){
  printf("hello");
   
  struct node* curr=head;
  int b=1;
   
  while(curr->next!=head){
    b++;
    curr=curr->next;
  }
  struct node *tail1=curr;
   
  for(int i=1;i<b-a+1;i++){
    tail1=tail1->next;
  }
  struct node *head1=tail1->next;
  tail1->next=head;
  head=head1;
  tail=tail1;
}
 
 void display(){
   temp=head;
   while(temp!=NULL){
     printf("%d ",temp->data);
     temp=temp->next;
   }
 }
 
 int main(){
   int n,a;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
     struct node *newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(head==NULL){
       head=newnode;
       tail=newnode;
     }
     else{
       tail->next=newnode;
       tail=newnode;
     }
   }
   
   tail->next=head;
   scanf("%d",&a);
   printf("%d",a);
   rotate(a);
   display();
 }