#include <stdio.h>

int main() {
    // 宣告兩個陣列 A、B 可以容納 80 個字
    char A[80];
    char B[80];
    int i;

    scanf("%79s", A); // %79s 可以防止輸入超過陣列大小導致程式崩潰

    // 用一個 for 迴圈把 A 字串 copy 到 B 陣列裡
    // 迴圈條件：當 A[i] 不是字串結束符號 '\0' 時就繼續複製
    for (i = 0; A[i] != '\0'; i++) {
        B[i] = A[i];
    }
    
    B[i] = '\0';

    // print B 字串
    printf("複製後的 B 字串為: %s\n", B);

    return 0;
}