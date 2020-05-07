#include <stdio.h>

int main (void){
    int arr[9];
    for (int i = 0; i < 9; i++){
        scanf("%d",&arr[i]);
    }
    int max = 0,ind;
    for (int i = 0; i < 9; i++){
        if (max >= arr[i]){
            max = max;
            
        }
        else{
            max = arr[i];
            ind = i;
        }
    }
    printf("%d\n%d\n", max, ind+1);
}
