#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
}*head=NULL,*temp,*newnode,*nextnode,*tail;

void create(){
    int n;
    printf("Enter Size :");
    scanf("%d",&n);
    printf("Enter %d Data : ",n);
    for(int i=0;i<n;i++){
    newnode=(struct node*) malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
        tail=NULL;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
        tail=newnode;
    }
    }
}

void reverse()
{
    tail=head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    while (tail != head) {
        printf("%d ", tail->data);
        tail = tail->prev;
    }
    printf("%d\n", tail->data);
}


int main(){
create();
//sort();
reverse();
}