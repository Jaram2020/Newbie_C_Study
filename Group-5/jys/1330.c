#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num1 == num2){
        printf("==");
    }else{
        printf("%s", num1 > num2 ? ">" : "<");
    }
    
    return 0;
}