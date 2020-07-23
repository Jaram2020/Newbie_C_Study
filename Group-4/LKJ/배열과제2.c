#include <stdio.h>
int main(){
	int a,b,c;
	int arr[10];
	int tmp,i;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int num = a * b * c;
	for (i=0; i<10; i++){
		arr[i] = 0;
	}
	
	while(num>0){
		tmp = num % 10;
		num = num / 10;
		arr[tmp] += 1;
	}
	
	for(i=0; i<=9; i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
