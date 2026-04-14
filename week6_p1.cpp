//recursive x^y

#include <stdio.h>

typedef enum {
    SUCCESS = 0,
    ERR_DEVIDE_BY_ZERO = -1,
    ERR_UNDEFINED = -2
} powStat;

float power_helper(float x, int y) {
    if (y == 0) {
        return 1.0f;
    }
    if (y > 0) {
        return x * power_helper(x, y - 1);
    }
    return 1.0f / power_helper(x, -y);
}

powStat my_pow(const float x, const float y, float *result) {
    if (x == 0.0f && y < 0.0f) return ERR_DEVIDE_BY_ZERO;
    if (x == 0.0f && y == 0.0f) return ERR_UNDEFINED;
    
    *result = power_helper(x, (int)y);
    
    return SUCCESS;
}

int main() {
    float x,y,result, ans = 0.0f;

    powStat status;

    while(1){
        scanf("%f %f",&x,&y);
        status = my_pow(x, y, &result);
        if (status == SUCCESS) {
            ans = result;
        }
        printf("%g ^ %g = %g\n",x,y,ans);
    }
    return 0;
}