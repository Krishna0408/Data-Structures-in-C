#include <stdlib.h>
int main()
{
int n,m,i,j,k=0,l=0;;
printf("Input the number of rows : ");
scanf("%d",&m);
printf("Input the number of columns : ");
scanf("%d",&n);
int arr[m][n];
printf("\nInput the matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("\n\n");
while(k<m && l<n)
{
for(i=l;i<n;i++)
{
printf("%d ",arr[k][i]);
}
k++;
for(i=k;i<m;i++)
{
printf("%d ",arr[i][n-1]);
}
n--;
if(k<m)
{
for(i=n-1;i>=0;i--)
{
printf("%d ",arr[m][i]);
}
m--;
}
if(l<n)
{
for(i=m-1;i>=k;i--)
{
printf("%d ",arr[i][l]);
}
l++;
}
}
return 0;
}
