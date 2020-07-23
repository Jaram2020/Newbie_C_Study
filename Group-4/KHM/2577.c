#include <stdio.h>
#include <math.h>

int main(){
	int ace=0,A=0,B=0,C=0,prod=0,a,i=0;
	int arr[10]={};
	int brr[10]={};
	scanf("%d\n%d\n%d",&A,&B,&C);
	prod=A*B*C;
	//printf("%d\n",prod);
	if (prod/100000000>=1){
		i=8;
	}
	else if (prod/10000000>=1){
		i=7;
	}
	else{
		i=6;
	}

	for(a=0;a<=i;a++){
		ace=pow(10,(i-a));
		arr[a]=prod/ace;
		prod-=(prod/ace)*ace;
		printf("%d\n",arr[a]);
	}
	int b,c;
	
	for(b=0;b<=9;b++){
		for(c=0;c<=i;c++){
			if (arr[c]==b){
				brr[b]=brr[b]+1;
			}
		}
	}
	for(i=0;i<=9;i++){
		printf("%d\n",brr[i]);
	}
	return 0;
}
