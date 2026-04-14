#include <stdio.h>

typedef enum {
    SUCCESS = 0,
    ERR_DEVIDE_BY_ZERO = -1,
    ERR_UNDEFINED = -2
} powStat;

/* 重新命名為 my_pow 避免與 math.h 衝突 */
powStat my_pow(const float x, const float y, float *result) {
    float temp = 1.0;
    int i, temp_y;

    if (x == 0 && y < 0) return ERR_DEVIDE_BY_ZERO;
    if (x == 0 && y == 0) return ERR_UNDEFINED;
    
    if (y > 0) {
        for (i = 0; i < (int)y; i++) {
            temp *= x;
        }
        *result = temp;
        return SUCCESS;
    }
    if (y < 0) {
        temp_y = (int)-y;
        for (i = 0; i < temp_y; i++) {
            temp *= x;
        }
        *result = 1.0f / temp;
        return SUCCESS;
    }
    if (y == 0) {
        *result = 1.0f;
        return SUCCESS;
    }
    return ERR_UNDEFINED;
}

int main() {
    float result, ans = 0.0f;
    int i;
    powStat status;

    for (i = 0; i <= 10; i++) {
        status = my_pow(2.0f, (float)i, &result);
        if (status == SUCCESS) {
            ans += result;
        }
    }

    printf("%g\n", ans);
    return 0;
}