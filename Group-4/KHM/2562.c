#include <stdio.h>

int main(){
	int a,i,prod=0,c=0;
	int arr[10];
	for(i=0;i<9;i++){
		scanf("%d",&arr[i]);
	}
	for(a=0;a<9;a++){
		if(prod<arr[a]){
			prod=arr[a];
			c=a+1;		
		}
	} 
	printf("%d\n%d",prod,c);
}
