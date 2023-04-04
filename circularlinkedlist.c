#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insertfirst();
void insertmid();
void insertend();
void deleteAtFront();
void deleteAtEnd();
void deleteAtMiddle();
void count();
void search();

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void create(){
    int n;
    printf("Enter Size :");
    scanf("%d",&n);
    printf("Enter %d Data : ",n);
    for(int i=0;i<n;i++){
        struct node *newnode = (struct node*) malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode; 
            tail = newnode;
        }
    }
    tail->next = head;
}

void insertfirst(){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter Node at front : ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
    tail->next = head;
    display();
}

void insertend(){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter data at end: ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    tail->next = newnode;
    tail = newnode;
    display();
}

void insertmid() {
    int count = 0;
    struct node *newnode, *current;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter new Node at middle : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    current = head;
    while (current != tail) {
        count++;
        current = current->next;
    }
    int middle = (count % 2 == 0) ? (count/2) : (count/2 + 1);
    current = head;
    for (int i=1;i<middle;i++) {
        current = current->next;
    }
    newnode->next = current->next;
    current->next = newnode;
    display();
}

void deleteAtFront(){
    struct node *temp = head;
    head = head->next;
    tail->next = head;
    display();
}

void deleteAtEnd(){
    struct node *temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    temp->next = head;
    tail = temp;
    display();
}

void deleteAtMiddle() {
    int i,pos;
    scanf("%d",&pos);
    struct node *temp = head;
    for(i=1;i<=pos-1;i++)
        temp=temp->next;
    temp->next=temp->next->next;
    display();
}

void display(){
    struct node *temp = head;
    do{
        printf("%d-> ",temp->data);
        temp = temp->next;      
    }while(temp != head);
}

int main(){
    create();
    // insertfirst();
    // insertend();
    // insertmid();
    // deleteAtFront();
    // deleteAtEnd();
    deleteAtMiddle();
    // display();
}
