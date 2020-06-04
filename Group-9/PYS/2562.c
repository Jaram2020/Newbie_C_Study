#include <stdio.h>
int main(){
  int num[9];
  for(int i = 0; i < 9; i++){
    scanf("%d", &num[i]);
  }
  
  int test = 0;
  int place = 10;
  for(int i = 0; i < 9; i++){
     if (test < num[i]){
      test = num[i];
      place = i+1;

     }     
  }
  printf("%d\n", test);
  printf("%d\n", place);

    return 0;

}