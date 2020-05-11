#include <stdio.h>

int main (void){
    int num1;
    scanf("%d", &num1);
    for (int i = 0; i < num1; i++){
        for (int k = 0; k < i; k++){
            printf(" ");
        }
        for (int j = num1; j > i; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}