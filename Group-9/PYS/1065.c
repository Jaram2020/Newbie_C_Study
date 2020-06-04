#include <stdio.h>
int Han(int n);
void main(){
    int input, res;
    scanf("%d", &input);
    res = Han(input);
    printf("%d", res);
}
int Han(int n){
    int i, cnt = 0, hund, ten, one;
    if (n < 100)
        return n;
    else{
        for (i = 100; i <= n; i++){
        hund = i/100;
         ten = (i%100)/10;
         one = (i%100)%10;
         if ((hund - ten) == (ten - one))
             cnt++;
        }        
        return (99+cnt);
    }
}