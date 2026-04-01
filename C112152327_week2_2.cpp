//一元二次方程式
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c;
    float check_eq, ans, ans1, ans2;

    while (1) {
        if (scanf("%f %f %f", &a, &b, &c) != 3) break;
        
        check_eq = b * b - 4 * a * c;
        if (check_eq < 0) {
            printf("無解\n");
        } else if (check_eq == 0) {
            ans = -b / (2 * a);
            printf("重根 X=%.0f\n", ans);
        } else {
            ans1 = (-b + sqrt(check_eq)) / (2 * a);
            ans2 = (-b - sqrt(check_eq)) / (2 * a);
            printf("有兩根 X=%.0f or %.0f\n", ans1, ans2);
        }
    }
    return 0;
}