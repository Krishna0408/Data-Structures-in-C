#include<stdio.h>
#include<stdlib.h>

void display(){
    {
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",a[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
}

int main(){
    int a[50],n;
    printf("enter the size of stack :");
    scanf("%d",&n);
    int top=-1;
    for(int i=0;i<n;i++){
        top++;
        scanf("%d",&a[i]);
    }
    display();
}