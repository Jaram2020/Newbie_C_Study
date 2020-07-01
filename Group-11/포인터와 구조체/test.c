#include <stdio.h>
#include <string.h>

int mystrlen(const char *str){
    int i = 0;
    while (str[i] != '\0'){
        i += 1;
    }
    return i;
}

char *mystrcat(char *dest,const char *src){
    char *original = dest;
    dest = dest + mystrlen(dest);
    while (*src != '\0'){
        *dest = *src;
        dest = dest + 1;
        src = src + 1;
    }
    return original;
}


int main(void){
    char str1[100] = "Hello,";
    char *str2 = "World!";
    printf("%s\n",mystrcat(str1,str2));
}
