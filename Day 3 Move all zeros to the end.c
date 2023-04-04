#include<stdio.h>
#include<stdlib.h>
int main()
{
int size,arr[100],i,j,last,count=0;
scanf("%d",&size);
int n = size;
last = size;
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]==0){
    for(j=i;j<n;j++){
        arr[j]=arr[j+1];
    }
    arr[last-1]=0;
    last--;
    n--;
}


}
for(j=0;j<size;j++){
 printf("%d ",arr[j]);
}
}
