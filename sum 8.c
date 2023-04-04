#include<stdio.h>
int main()
{
int a,t,b,count=0,i;
scanf("%d",&t);
while(t--)
{
    scanf("%d %d",&a,&b);
    for(i=5;i<a;i+5)
    {
        count++;
    }
    printf("%d",count);
}
return 0;
}
