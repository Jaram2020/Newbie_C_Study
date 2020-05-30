#include <stdio.h>

int main(){
	int x; //변수 선언 
	
	scanf("%d",&x); //변수 입력 
	
	if (x>=90){
		printf("A");
	}
	else if(x>=80){
		printf("B");
	}
	else if(x>=70){
		printf("C");
	}
	else if(x>=60){
		printf("D");
	}
	else{
		printf("F");
	}
}
