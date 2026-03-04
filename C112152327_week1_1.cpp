#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b,c;
    scanf_s("%f %f %f",&a,&b,&c);
    float check_eq = b * b - 4 * a * c; //b^2-4ac
    if (check_eq < 0) {
        printf("Not Valid");
        return 0;
    }
    if (check_eq == 0) {
        const float ans = -b / (2 * a);
        printf("X=%.0f",ans);
    }else {
        const float ans1 = (-b + sqrt(check_eq)) / (2 * a);
        const float ans2 = (-b - sqrt(check_eq)) / (2 * a);
        printf("X=%.0f or %.0f",ans1,ans2);
    }
}