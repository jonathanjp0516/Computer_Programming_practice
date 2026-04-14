//GCD
<<<<<<< HEAD
#include<stdio.h>
#include <stdbool.h>
=======
#include <stdio.h>
>>>>>>> 6fe1da09995df18b13cfcbf9cb5265747af5bec9

int gcd_func(const int a, const int b) {
    if (b == 0) {
        return a;
    }
    return gcd_func(b, a % b);
}

int main() {
    int a, b;
    while (1) {
        if (scanf("%d %d", &a, &b) != 2) break;
        printf("%d\n", gcd_func(a, b));
    }
    return 0;
}