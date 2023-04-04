#include<stdio.h>
int main(){
int n,a,b,c,rem,res=0;
int arr[]={6,2,5,5,4,5,6,3,7,6};
scanf("%d",&n);
while(n--)
{
    scanf("%d%d",&a,&b);
    c=a+b;
    while(c!=0){
        rem=c%10;
        res+=arr[rem];
        c/=10;
    }
    printf("%d\n",res);
}
}
