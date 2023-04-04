#include <stdio.h>
int main(){
  int a[10],i,n,count=1;
  printf("Enter size of array: ");
  scanf("%d",&n);
  printf("Enter the Array elements");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
   if(a[i]<0){
    printf("\n%d",a[i]);
   }printf("\n%d",count++);
   return 0;
}
