#include <stdio.h>
#include <stdbool.h>

typedef enum{
    SUCCESS = 0,
    ERR_DEVIDE_BY_ZERO = -1,
    ERR_UNDEFINED = -2
} powStat;

powStat pow(const float x,const float y, float *result){
    float temp = 1.0;
    if (x == 0 && y < 0) {
        return ERR_DEVIDE_BY_ZERO;
    }
    if (x == 0 && y == 0){
        return ERR_UNDEFINED;
    }
    if(y > 0){
        for (int i = 0; i < y; i++) {
            temp *= x;
        }
        *result = temp;
        return SUCCESS;
    }
    if(y < 0){
        float temp_y = -y;
        for (int i = 0; i < temp_y; i++) {
            temp *= x;
        }
        *result = 1.0 / temp;
        return SUCCESS;
    }
    if(y == 0){
        *result = 1.0;
        return SUCCESS;
    }
    return ERR_UNDEFINED;
}

int main() {
   float result,ans = 0.0;
    for(int i=0; i<=10;i++){
        powStat status =  pow(2,i,&result);
        ans += result;
    }
    printf("%g",ans);
    return 0;
}