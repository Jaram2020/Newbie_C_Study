#include <stdio.h>

int main(void){
    int num1;
    scanf("%d", &num1);
    if (90 <= num1 && num1 <= 100){
        printf("A\n");
    }
    else if (80 <= num1 && num1 < 90){
        printf("B\n");
    }
    else if (70 <= num1 && num1 < 80){
        printf("C\n");
    }
    else if (60 <= num1 && num1 < 70){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
    return 0;
}

