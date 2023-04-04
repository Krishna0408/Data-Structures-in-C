#include <stdio.h>
int main(){
int a[10],i,n,max1,max2;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter the Array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max1=max2=a[0];
for(i=0; i<n; i++)
{
if(a[i] > max1)
{
    max2 = max1;
    max1 = a[i];
}

}
printf("Second largest = %d", max2);
return 0;
}
