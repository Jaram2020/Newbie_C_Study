#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for(int j=0; j < num; j++){
        for(int i=0; i<=j; i++){
            printf("*");
        }
        if(j != num){
            printf("\n");
        }
    }
    
    return 0;
}