//九九乘法表
#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d*%d=%d", i, j, i*j);
            if (j<9) {
                printf(",");
            }
        }
        printf("\n");
    }
}