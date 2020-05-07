#include <stdio.h>

int main (void){
    int num1;
    scanf("%d", &num1);
    for (int i = 0; i < num1; i++){

        for (int j = 0; j < i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}