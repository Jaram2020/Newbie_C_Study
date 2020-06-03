#include<stdio.h>
int main(){
	
	int max = 1;	
	int b[9], index;
	
	for(int i = 0; i < 9; i++){
		scanf("%d", &b[i]);
		if(b[i] > max){
			max = b[i];
			index = i;
		}
	}
	
	printf("%d\n%d", max, index+1);

	return 0;
}