 #include <stdio.h>
int main() {
  int a[10],sum;
  printf("Enter numbers: ");
  for(int i=1;i<3;++i)
  {
     scanf("%d", &a[i]);
  }
  printf("sum: ");
  for(int i=1;i<3;++i)
  {
     sum = sum*a[i];
  }
 printf("%d ", sum);
 printf("Average : %d",sum/3);
  return 0;
}
