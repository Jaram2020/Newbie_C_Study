#include <stdio.h>

int main()
{
    int num, count;
    
    scanf("%d", &num);
    count = num;
    for(int j=0; j<num; j++){        
        for(int i=0; i<num; i++){
            if(i< count - 1){
                printf(" ");
            }else{
                printf("*");
            }
        }count--;
        printf("\n");
    }
    
    
    return 0;
}