#include <stdio.h>
#include <stdlib.h>

float bmi_calc(const float h, const float w) {
    return w / (h * h);
}

int main() {
    float height, weight, bmi;
    /* C89 不支援 true，直接用 1 */
    while (1) {
        /* 如果 scanf 沒讀到東西就結束 */
        if (scanf("%f %f", &height, &weight) != 2) break;

        bmi = bmi_calc(height / 100.0f, weight);

        if (bmi >= 35) {
            printf("重度肥胖\n");
        } else if (bmi >= 30) {
            printf("中度肥胖\n");
        } else if (bmi >= 27) {
            printf("輕度肥胖\n");
        } else if (bmi >= 24) {
            printf("過重\n");
        } else if (bmi >= 18.5) {
            printf("適中\n");
        } else {
            printf("過輕\n");
        }
    }
    return 0;
}