#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	for(int i = a; i > 0 ; i--){
		for(int k = i; k > 0 ; k--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}