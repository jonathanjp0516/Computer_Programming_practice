// 矩陣乘法
#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr_A[3][2] = {{1,2},{3,4},{5,6}};
    int arr_B[2][3] = {{1,2,3},{4,5,6}};
    int arr_ans[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int k = 0; k < 3; k++) {
            int temp = *(&arr_A[0][0] + i * 3 + k); 
            for (int j = 0; j < 2; j++) {
                *(&arr_ans[0][0] + i * 2 + j) += temp * (*(&arr_B[0][0] + k * 2 + j));
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(&arr_ans[0][0] + i * 2 + j)); 
        }
        printf("\n");
    }
}