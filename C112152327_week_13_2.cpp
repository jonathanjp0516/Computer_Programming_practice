#include <stdio.h>
#include <stdlib.h>

void strrev(char* a) {
    char b[80];
    int len = 0;
    int i;

    // 1. 先計算字串 a 的長度
    while(a[len] != '\0') {
        len++;
    }

    // 2. 先將 a 字串 copy 至 b 字串
    for(i = 0; i < len; i++) {
        b[i] = a[i];
    }
    
    for(i = 0; i < len; i++) {
        a[i] = b[len - 1 - i];
    }
    
    a[len] = '\0'; 
}

int main(){
    char a[80];

    scanf("%s", a);
    strrev(a);
    printf("%s\n", a);
    
    return 0;
}

