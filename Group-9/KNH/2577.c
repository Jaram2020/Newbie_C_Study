#include<stdio.h>
int main(){
	
	int a, b, c, d;
	int num[10] = {0,};
	int rest;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
		
	d = a * b * c;
	
	while(d > 0){
		rest = d % 10;
		d = d / 10;
		num[rest]++;
	}
	for(int i =0; i < 10; i++){
		printf("%d\n", num[i]);
	}
	return 0;
}