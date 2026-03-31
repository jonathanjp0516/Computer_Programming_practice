#include<stdio.h>

int main(){
    double ans = 0,mult = 1;
    for(int i=1; i<=10; i++){
        mult *= i;
        ans += 1.0/mult;
    }
    printf("%lf",ans);
}