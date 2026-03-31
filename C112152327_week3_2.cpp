#include <stdio.h>

int main() {
    int x, y;
    double result = 1.0;

    printf("請輸入整數底數 (x) 與整數指數 (y)，以空白分隔：");
    scanf("%d %d", &x, &y);

    // 判斷 y 的數值來決定計算方式
    if (x == 0 && y < 0) {
        // 處理 0 的負數次方（會產生除以零的數學錯誤）
        printf("錯誤：0 不能有負數次方（分母不可為 0）。\n");
    } 
    else if (y > 0) {
        // 情況一：y 為正數
        for (int i = 0; i < y; i++) {
            result *= x;
        }
        // y 為正數時結果必為整數，用 %.0f 不顯示小數點
        printf("%d 的 %d 次方為：%.0f\n", x, y, result);
    } 
    else if (y < 0) {
        // 情況二：y 為負數
        int temp_y = -y; // 先將負的指數轉為正數，方便跑迴圈
        for (int i = 0; i < temp_y; i++) {
            result *= x;
        }
        result = 1.0 / result; // 算出正數次方後，取倒數
        // 負數次方會有小數，預設印出 6 位小數
        printf("%d 的 %d 次方為：%f\n", x, y, result);
    } 
    else {
        // 情況三：y 為 0
        printf("%d 的 0 次方為：1\n", x);
    }

    return 0;
}