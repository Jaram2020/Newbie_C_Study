#include <stdio.h>

int num, i, res, cnt, t;
int a[3]={};

int logic(int num){
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
    }
    return res;
}

int main()
{
    scanf("%d", &num);
    printf("%d", logic(num));
    return 0;
}