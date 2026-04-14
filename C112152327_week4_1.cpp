<<<<<<< HEAD
//brute force GCD
#include<stdio.h>
#include <stdbool.h>
=======
/*brute force GCD*/
#include <stdio.h>
>>>>>>> 6fe1da09995df18b13cfcbf9cb5265747af5bec9

int gcd_brute_force_func(const int a, const int b) {
    int min, i;
    if (a == 0 || b == 0) return (a > b) ? a : b;
    min = (a < b) ? a : b;

    for (i = min; i > 0; i--) {
        if (a % i == 0 && b % i == 0) return i;
    }
    return 1;
}

int main() {
    int a, b;
    while (1) {
        printf("Enter two numbers: ");
        if (scanf("%d %d", &a, &b) != 2) break;
        printf("%d\n", gcd_brute_force_func(a, b));
    }
    return 0;
}