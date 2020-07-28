#include <stdio.h>
int main()
{
  int i,j,k,n;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
    for(j=0;j<n-i;j++)
    printf(" ");
    for(k=0;k<i;k++)
    printf("*");
    printf("\n");
  }
  return 0;
}