#include<stdio.h>

int main(){
int n,i,q,m,a;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d%d",&q,&m,&a);
if(q*m==a){
    printf("\nYes");
}
else{
    printf("\n NO");
}
}
}
