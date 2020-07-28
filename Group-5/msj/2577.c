#include<stdio.h>
int main()
{
  int a,b,c;
  int total;
  int arr[10]={0};
  int i;
  int r;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  total = a*b*c;
  while(total >0)
  {
    r = total%10;
    total = total/10;
    arr[r]=arr[r]+1;
  }
  for(i=0; i<10; i++)
    printf("%d\n",arr[i]);
    return 0;
}