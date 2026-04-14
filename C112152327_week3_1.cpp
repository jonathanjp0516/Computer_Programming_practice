//九九乘法表
#include <stdio.h>
#include <stdbool.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d*%d=%d", j, i, i*j);
            if (j<9) {
                printf(",");
            }
        }
        printf("\n");
    }
    return 0;
}