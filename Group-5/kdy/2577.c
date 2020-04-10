#include <stdio.h>

int square(int x, int n)
{
  int sq=1;
  for(int i=0; i<n; i++){
    sq=sq*x;
  }
  return sq;
}


int main()

{


  
  int i=0;
  int count[10]={0};
  int a,b,c,total;

  scanf("%d %d %d",&a,&b,&c);
  
  total=a*b*c;
  while(total/square(10,i)>=1){
    i++;
  }
  for (int j=i;j>0;j--){
    b=total/square(10,j-1);
    for (int s=0; s<10;s++){
      if (s==b) count[s]++;
    }
    total=total-b*square(10,j-1);
  }
  for(int j=0; j<10;j++){
    printf("%d\n", count[j]);
  }

  return 0;
}