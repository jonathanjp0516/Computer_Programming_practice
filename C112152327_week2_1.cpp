//一元二次方程式
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b,c; //ax^2+bx+c
    while (true) {
        scanf("%f %f %f",&a,&b,&c);
        float check_eq = b * b - 4 * a * c; //b^2-4ac
        if (check_eq < 0) {
            printf("無解\n");
            return 0;
        }
        if (check_eq == 0) {
            const float ans = -b / (2 * a);
            printf("重根 X=%.0f\n",ans);
        }else {
            const float ans1 = (-b + sqrt(check_eq)) / (2 * a);
            const float ans2 = (-b - sqrt(check_eq)) / (2 * a);
            printf("有兩根 X=%.0f or %.0f\n",ans1,ans2);
        }
    }
}