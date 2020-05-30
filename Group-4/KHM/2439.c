#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		for(c=0;a-c>b;c++){
			printf(" ");
		}
		for(c=0;b>c;c++){
			printf("*");
		}
	printf("\n");
	}
}
