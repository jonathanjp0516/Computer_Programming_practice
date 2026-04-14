#include<stdio.h>
#include<math.h>
#include <stdbool.h>

float dist(float x1, float y1, float x2, float y2){
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

float heron_f(float a, float b, float c){
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    float xa, ya, xb, yb, xc, yc;

    scanf("%f %f %f %f %f %f", &xa, &ya, &xb, &yb, &xc, &yc);

    float AB = dist(xa, ya, xb, yb);
    float BC = dist(xb, yb, xc, yc);
    float AC = dist(xa, ya, xc, yc);
    printf("\n邊長 AB = %.2f\n", AB);
    printf("邊長 BC = %.2f\n", BC);
    printf("邊長 AC = %.2f\n", AC);

    printf("三角形 ABC 面積 = %.2f\n", heron_f(AB, BC, AC));

    float MAX = AB;
    if (BC > MAX) {
        MAX = BC;
    }
    if (AC > MAX) {
        MAX = AC;
    }

    float max_sq_twice = 2 * pow(MAX, 2);
    float sum_sq = pow(AB, 2) + pow(BC, 2) + pow(AC, 2);
    
    float epsilon = 1e-4; 

    if (max_sq_twice - sum_sq > epsilon) {
        printf("鈍角三角形\n");
    } 
    else if (fabs(max_sq_twice - sum_sq) <= epsilon) {
        printf("直角三角形\n");
    } 
    else {
        printf("銳角三角形\n");
    }

    return 0;
}