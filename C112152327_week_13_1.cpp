#include <stdlib.h>
#include <stdio.h>

int strlen(char* s)
{
    int c;
    for( c=0 ; s[c]!= '\0' ; c++);
    return c;
}

void strcat(char* a, char* b){
    int len_a = strlen(a); // 取得字串 a 的長度（也就是第一個字串的結尾位置）
    int i = 0;
    
    // 將字串 b 的字元逐一複製到字串 a 的尾端
    while(b[i] != '\0'){
        a[len_a + i] = b[i];
        i++;
    }
    
    a[len_a + i] = '\0';
}

int main(){
    char a[80], b[80];
    scanf("%s%s", a, b);
    strcat(a, b);
    printf("%s", a);
    return 0;
}