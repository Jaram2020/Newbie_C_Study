#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    unsigned int tmp=1;
    char anal[10];
    char res[10]={};
    for(int i =0; i<3 ; i++){    
       scanf("%d", &num);
       tmp = tmp * num;    
       }
    sprintf(anal, "%d", tmp);

    for(int j=0; j < strlen(anal); j++){
         res[anal[j] - 48]++;
     }

    for(int k=0; k< 10; k++){
         printf("%d\n", res[k]);
    }
    return 0;
}