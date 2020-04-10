#include <stdio.h>

int main()
{
    int num=0;
    int max=0;
    int max_num=0;
    int cnt=1;
    
    while(cnt <= 9){
        scanf("%d", &num);
        if(max < num){
            max = num;
            max_num = cnt;
        }
        cnt++;
    }

    printf("%d\n", max);
    printf("%d", max_num);

    return 0;
}