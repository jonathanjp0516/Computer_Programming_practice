#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr_A[3][3] = {{-8,23,-12},{23,-4,35},{-9,54,38}};
    int arr_ans[3][3] = {0};
    int sum = 0;

    for(int i=0;i<9;i++){
        sum += *(&arr_A[0][0] + i);
    }

    float avg = sum / 9;
    printf("avg:%f\n",avg);

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            if(*(&arr_A[0][0] + i * 3 + k) >= avg){
                *(&arr_ans[0][0] + i * 3 + k) = 1;
            }else{
                *(&arr_ans[0][0] + i * 3 + k) = 0;
            }
            printf("%d ", *(&arr_ans[0][0] + i * 2 + k));
        }
        printf("\n");
    }
}