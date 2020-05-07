#include <stdio.h>

int main(void){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf(">\n");
    }
    else if (num1 < num2){
        printf("<\n");
    }
    else {
        printf("==\n");
    }
    return 0;
}

for i in range(0,10) <=> for(int i = 0;i<10;i++)