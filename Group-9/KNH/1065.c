#include <stdio.h>

int main(){

	int n, hun, ten, one; 

	scanf("%d", &n);

	

	if(n < 100){

		printf("%d", n);

	}

	else{

		int count = 0;

		for(int i = 100; i <= n; i++){

			hun = i / 100;

			ten = (i % 100) / 10;

			one = i % 10;

			if((hun - ten) == (ten - one)){

				count++;

			}

		}

		printf("%d", 99 + count);

	}

	

	return 0;

}