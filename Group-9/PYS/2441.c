#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);	
  for(int i = 1; i < n+1; i++){
    for(int j = 0; j <i-1; j++){
      printf("%s", " ");
    }
    for(int j = 0; j < n+1-i; j++){
      printf("%s", "*");
    }
    
    printf("\n");
  }
    
    return 0;
}