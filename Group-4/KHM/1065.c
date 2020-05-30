#include <stdio.h>
#include <math.h>

int main(){
    int poo,prod,n,abc,i,temp;
    int array[3]={};
    scanf("%d",&abc);
    n=100;
    
    if (abc<100){
        printf("%d",abc);
    }
    
    if (abc==100){
        printf("99");
    }
    
    if (abc>100){
        prod+=99;
        while (n!=abc+1){
        	temp=n;
            for (i=0;i<3;i++){
                poo=pow(10,2-i);
                array[i]=temp/poo;
                temp=temp-(temp/poo)*poo;
            }
            
            if (array[0]-array[1]==array[1]-array[2]){
                prod+=1;
            }
            n+=1;
        }
        printf("%d",prod);
    }
    return 0;
}
