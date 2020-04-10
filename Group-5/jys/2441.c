#include <stdio.h>

int main()
{
    int num, count;
    
    scanf("%d", &num);
    count = 0;
    for(int j=0; j<num; j++){        
        for(int i=0; i<num; i++){
            if(i < count){
                printf(" ");
            }else{
                printf("*");
            }
        }count++;
        if(j != num){
            printf("\n");
        }
    }
    
    
    return 0;
}