#include <stdio.h>

int one(int x){
  int count[1000];
  int d,b;
  int n=0;

  if (x>=100){
    int i=0;
    while(x>0){
      b=x%10;
      x=x/10;
      count[i]=b;
      i++;
    }
    for(int j=2; j<i;j++){
      d=count[1]-count[0];
        if (count[j]==count[j-1]+d)
          n=n+1;
          if (n==i-2) return 1;
    else  return 0;
    }
  }
  else if(x<100)  return 1;

}

  

int main(){
  int x;
  int count=0,s=0;


  scanf("%d", &x);

for (int j=1; j<x+1; j++)
  s+=one(j);

printf("%d",s);



  return 0;
}