#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
} *head=NULL, *temp=NULL, *tail=NULL, *top=NULL;

int del(int mid) {
    temp = head;
    int i = 1;
    while (i < mid) {
        temp = temp->next;
        i++;
    }
    temp->next = temp->next->next;
    display();
    return 0;
}

void display() {
    temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n;
    printf("enter the size ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (top == NULL) {
            top = newnode;
        }
        else {
            newnode->next = top;
            top = newnode;
        }
    }
    int mid = n / 2;
    del(mid);
    display();
    return 0;
}
