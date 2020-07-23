#include <stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int i,j;
	for(i=num; i>=1; i--){
		for(j=num; j>i; j--){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
