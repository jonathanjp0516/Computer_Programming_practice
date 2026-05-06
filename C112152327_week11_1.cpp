#include <stdio.h>

#define SIZE 5

int arr_A[SIZE][SIZE] = {
    {0, 0, 0, 0, 1},
    {0, 1, 1, 0, 0},
    {0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0},
    {0, 0, 1, 0, 1}
};

int arr_B[SIZE][SIZE] = {0};

int main() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int sum = 0;

            int row_start = (i - 1 < 0) ? 0 : i - 1;
            int row_end   = (i + 1 >= SIZE) ? SIZE - 1 : i + 1;
            int col_start = (j - 1 < 0) ? 0 : j - 1;
            int col_end   = (j + 1 >= SIZE) ? SIZE - 1 : j + 1;

            for (int r = row_start; r <= row_end; r++) {
                for (int c = col_start; c <= col_end; c++) {
                    sum += *(&arr_A[0][0] + r * SIZE + c);
                }
            }
            
            *(&arr_B[0][0] + i * SIZE + j) = sum;
        }
    }

    printf("計算後的 B 矩陣：\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", *(&arr_B[0][0] + i * SIZE + j));
        }
        printf("\n");
    }

    return 0;
}