#include<stdio.h>

int main(){
int i,n,a,b,c;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d%d",&a,&b,&c);
if((a+b)%2 ==1 || (a+c)%2 ==1 || (c+b)%2 ==1 ){
    printf("\nYes");
}
else{
    printf("\n NO");
}
}
}
