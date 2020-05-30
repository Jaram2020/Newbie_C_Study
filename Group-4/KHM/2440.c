#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		for(c=0;a-c>b-1;c++){
			printf("*");
		}
	printf("\n");
	}
}
