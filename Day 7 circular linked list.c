#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*tail;

void main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    //display();
    //skip();
}




struct Node* insert(struct Node* last, int data)
{
	if (last == NULL)
		return addToEmpty(last, data);

	struct Node* temp
		= (struct Node*)malloc(sizeof(struct Node));

	temp->data = data;

	temp->next = last->next;
	last->next = temp;

	return last;
}
