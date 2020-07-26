#include<stdio.h>
int A(int n);
int main(){
  int input,res;
  scanf("%d",&input);
  res=A(input);
  printf("%d",res);
}
int A(int n){
  int i,num=0,h,t,o;
  if(n<100)
  return n;
  else{
    for(i=100; i<=n; i++){
        h=i/100;
        t=(i%100)/10;
        o=(i%100)%10;
        if((h-t)==(t-o))
        num = num+1;
    }
    return(99+num);
  }
}