#include<stdio.h>
#include<stdlib.h>
# define N 20
int s[N],top = -1;
int pop()
{
	return s[top--];
}
void push(int x)
{
	if(top == N-1)
		printf("Stack is Full");
	else
	{
		top++;
		s[top] = x;
	}
}
void enqueue(int x)
{
	push(x);
}
void print()
{
	int i;
	for(i=0;i<=top;i++)
		printf("\n%d",s[i]);
}
int dequeue()
{
	int data,res;
	if(top == -1)
		printf("Queue is Empty");
	else if(top == 0)
		return pop();
	data = pop();
	res = dequeue();
	push(data);
	return res;
}
int main()
{
	int opt,n,i,data,t;
	do{
		printf("\n1 Insert in Queue\n2 show in Queue \n3 Delete data from the Queue\n4 for Exit\n");
		printf("Enter Your Choice:-");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("\nNumber of elements:");
				scanf("%d",&n);
				printf("\nEnter your elements\n");
				i=0;
				while(i<n){
					scanf("%d",&data);
					enqueue(data);
					i++;
				}
				break;
			case 2:
				print();
				break;
			case 3:
				t = dequeue();
				printf("Dequeued element:%d",t);

				break;
			case 0:
				break;
			default:
				printf("\nWrong Choice");
		}
	}while(opt!=0);
}
