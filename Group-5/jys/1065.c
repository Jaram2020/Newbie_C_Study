#include <stdio.h>

int main()
{
    int num, i, res, cnt, t;
    int a[3]={};
    scanf("%d", &num);
    for ( i = 1; i <=num ; i++){
        if (i < 100) res = i;
        else if (i == 1000) break;
        else {
            cnt =0; t = i;
            while (t > 0){
                a[cnt] = t % 10;
                t /= 10; cnt++;
            }
            if (a[0] - a[1] == a[1] - a[2]) res++;
        }
    }printf("%d", res);
    return 0;
}