#include <stdio.h>

int main() {
    int x, y, i, temp_y; /* 迴圈變數 i 必須先宣告 */
    double result = 1.0;

    printf("請輸入整數底數 (x) 與整數指數 (y)，以空白分隔：");
    if (scanf("%d %d", &x, &y) != 2) return 0;

    if (x == 0 && y < 0) {
        printf("錯誤：0 不能有負數次方（分母不可為 0）。\n");
    } 
    else if (y > 0) {
        for (i = 0; i < y; i++) {
            result *= x;
        }
        printf("%d 的 %d 次方為：%.0f\n", x, y, result);
    } 
    else if (y < 0) {
        temp_y = -y;
        for (i = 0; i < temp_y; i++) {
            result *= x;
        }
        result = 1.0 / result;
        printf("%d 的 %d 次方為：%f\n", x, y, result);
    } 
    else {
        printf("%d 的 0 次方為：1\n", x);
    }

    return 0;
}