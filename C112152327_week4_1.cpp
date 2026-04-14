//brute force GCD
#include<stdio.h>
#include <stdbool.h>

int gcd_brute_force_func(const int a, const int b){
    if(a == 0 || b == 0) return (a > b) ? a : b;//zero exception
    int min = (a < b) ? a : b;//find the smaller one

    for(int i = min; i > 0; i--){
        if(a % i == 0 && b % i == 0) return i;
    }
    return 1;
}

int main(){
    int a, b;
    while(true){
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd_brute_force_func(a, b));
    }
    
    return 0;
}