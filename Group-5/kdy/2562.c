#include <stdio.h>

int main()

{
  int a[9];
  int max=0,m=0;
  for(int i=0; i<9; i++){
    scanf("%d", &a[i]);
  }
  max=a[0];
  for(int i=0; i<9;i++){
    if (max<a[i]){
      max=a[i];
      m=i;
    }
  }


  printf("%d", max);
  printf("\n%d",m+1);
  
    

  return 0;
}