#include <stdio.h>

int main(){
	int A,B;
	scanf("%d %d",&A,&B);
	if (A>=B){
		if(A==B)printf("==");
		else printf(">");
	}
	else printf("<");
	
}
