#include <stdio.h>

int main(){
	int x; //���� ���� 
	
	scanf("%d",&x); //���� �Է� 
	
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
