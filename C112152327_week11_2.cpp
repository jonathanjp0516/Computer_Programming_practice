#include <stdio.h>
#include <math.h>

#define N 2

// 宣告在外部：原矩陣 A
float A[N][N] = {
    {-3,2},
    {5,-4}
};

float Inv[N][N] = {
    {1, 0},
    {0, 1}
};

float *ptrA = &A[0][0];
float *ptrInv = &Inv[0][0];

int main() {
    for (int i = 0; i < N; i++) {
        float pivot = *(ptrA + i * N + i);
        
        if (fabs(pivot) < 1e-5) {
            printf("此矩陣不可逆！\n");
            return -1;
        }

        for (int j = 0; j < N; j++) {
            *(ptrA + i * N + j) /= pivot;
            *(ptrInv + i * N + j) /= pivot;
        }

        for (int k = 0; k < N; k++) {
            if (k != i) {
                float factor = *(ptrA + k * N + i);
                for (int j = 0; j < N; j++) {
                    *(ptrA + k * N + j) -= factor * *(ptrA + i * N + j);
                    *(ptrInv + k * N + j) -= factor * *(ptrInv + i * N + j);
                }
            }
        }
    }

    printf("反矩陣結果：\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%6.2f\t", *(ptrInv + i * N + j));
        }
        printf("\n");
    }

    return 0;
}