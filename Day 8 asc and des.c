#include<stdio.h>
void ascDec(int a[], int n)
{
  int temp;
  for(int i=0; i < n-1; i++){
      for(int j = i+1;j<n; j++)
        {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
  for (int i = 0; i < n / 2; i++)
         printf("%d ", a[i]);
   for (int j = n - 1; j >= n / 2; j--)
      printf("%d ", a[j]);
}
int main()
{
   int arr[] = {1,90,34,89,7,9};
   int len = sizeof(arr) / sizeof(arr[0]);
   ascDec(arr, len);
   return 0;
}
