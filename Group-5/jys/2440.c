#include <stdio.h>

int main()
{
    int num, count;
    scanf("%d", &num);
    count = num;
    for(int i=num; i>0; i--){
        for(int j=count; j>0; j--){ 
            printf("*");
        }count--;
        printf("\n");
    }
    return 0;
}