#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int n){
    int temp;
    for(int i=0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){
    int a[50],n;
    printf("Enter the size of stack : ");
    scanf("%d",&n);
    int top=-1;
    for(int i=0;i<n;i++){
        top++;
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
