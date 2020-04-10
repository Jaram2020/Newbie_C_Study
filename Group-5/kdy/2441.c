#include <stdio.h>

int main()

{
  int N;


  scanf("%d",&N);
  int i=N;
  while(i!=0){
    for (int j=N-i;j!=0;j--){
      printf(" ");
    }
    for (int j=i;j!=0;j--){
      printf("*");
    }
    printf("\n");
    i--;
  }
  
    

  return 0;
}