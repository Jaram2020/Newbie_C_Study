#include <stdio.h>

int main()

{
  int x;
  scanf("%d",&x);
  if (90<=x&&x<=100)printf("A");
  else if(80<=x&&x<=89)printf("B");
  else if(70<=x&&x<=79)printf("C");
  else if(60<=x&&x<=69)printf("D");
  else{
    printf("F");
  }

  
    

  return 0;
}