#include <stdio.h>

int main(void){
    int A,B,C;
    scanf("%d%d%d", &A,&B,&C);
    int mult = A * B * C;
    int arr[10] = {0};
    while (mult > 0){
        switch (mult%10){
        case 0:
            arr[0] += 1;
            break;
        case 1:
            arr[1] += 1;
            break;
        case 2:
            arr[2] += 1;
            break;
        case 3:
            arr[3] += 1;
            break;
        case 4:
            arr[4] += 1;
            break;
        case 5:
            arr[5] += 1;
            break;
        case 6:
            arr[6] += 1;
            break;
        case 7:
            arr[7] += 1;
            break;
        case 8:
            arr[8] += 1;
            break;
        case 9:
            arr[9] += 1;
            break;
        }
        mult /= 10;
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }
}