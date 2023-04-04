#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head,*temp;

void display(){
     temp=head;
     while (temp!=NULL)
     {
        printf("%d ",temp->data);
        temp=temp->next;
     }  
}
void fun(){
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data %2 !=0){
                printf("\n");
            }
        else if(temp->data % 2 ==0 ){
            printf("%d ",temp->data);
        }
        temp=temp->next;

    }
    // display();
}
int main(){
int n;
scanf("%d",&n);
head =NULL;
for(int i=0;i<n;i++){
    struct node* newnode;
    newnode=(struct node *) malloc(sizeof(newnode));
    // printf("Enter Data :");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
}
//display();
fun();
}