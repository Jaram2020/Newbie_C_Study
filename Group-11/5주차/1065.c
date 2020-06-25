#include <stdio.h>
void fun(int n, int *num){

    int arr[3];

    for (int i = 0; i < 3; i++){
        arr[i] = n % 10;
        n = n / 10;
    }

    if (arr[0] + arr[2] == arr[1] * 2)
        *num += 1;
    else
        return;
}

int main(void){
    int n;
    scanf("%d", &n);
    if (n<100)
        printf("%d\n",n);
    else if (n == 1000)
        printf("144\n");
    else{
        int num = 99;
        for (int i = 100; i < n+1; i++){
            fun(i,&num);
               
        }
        printf ("%d\n", num);
    }
}

