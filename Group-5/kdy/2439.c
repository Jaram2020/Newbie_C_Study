#include <stdio.h>

int main()

{
  int N;
  int i=0;
  scanf("%d",&N);
  while(i!=N){
    for (int j=N-i-1;j!=0;j--){
      printf(" ");
    }
    for (int j=i+1;j!=0;j--){
      printf("*");
    }
    printf("\n");
    i++;
  }
  
    

  return 0;
}