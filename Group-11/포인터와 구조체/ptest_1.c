#include <stdio.h>

int main(){
    char strings[3][10] = {"Hello", "World", "Doodle"};
    char *p_str[3];

    for (int i = 0; i < 3; i++){
        printf("%s\n", &strings[i][0]);
    }
}