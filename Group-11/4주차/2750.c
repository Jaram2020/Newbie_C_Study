#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0;i < num;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < num; i++){
        for (int j = i+1; j < num; j++){
            if(arr[i] > arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < num;i++){
        printf("%d\n", arr[i]);
    }
}