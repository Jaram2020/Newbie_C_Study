#include <stdio.h>
int main(){
	int num;
	int sum = 0;
	scanf("%d",&num);
	if(num<=99){
		printf("%d",num);
	}
	else if(100<=num && num<1000){
		int arr[3],total,tmp,d1,d2,i,j;
		for(i = 100; i<=num; i++){
			total = i;
			for(j=2; j>=0; j--){
				tmp = total % 10;
				total = total /10;
				arr[j]=tmp;
			}
			d1 = arr[0] - arr[1];
			d2 = arr[1] - arr[2];
			if(d1==d2){
				sum +=1;
			}
		}
		printf("%d",sum + 99);
	}
	else if(num == 1000){
		printf("%d",144);
	}
	return 0;
}
