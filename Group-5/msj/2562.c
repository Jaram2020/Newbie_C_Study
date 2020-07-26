#include<stdio.h>
int main()
{
  int arr[9]={0};
  int max=0;
  int num;
  int i=0;
  for(i=0; i<9; i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]>max)
    {
    max = arr[i];
    num = i; 
    }
  }
  printf("%d\n%d", max, num+1);
  return 0;
}