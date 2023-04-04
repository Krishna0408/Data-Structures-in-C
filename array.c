#include <stdio.h>
int main() {
  int a[10];
  printf("Enter numbers: ");
  for(int i=0;i<2;++i)
  {
     scanf("%d", &a[i]);
  }
  printf("numbers: ");
  printf("[");
  for(int i=0;i<2;++i)
  {
     printf("%d ", a[i]);
  }
  printf("]");
  return 0;
}
