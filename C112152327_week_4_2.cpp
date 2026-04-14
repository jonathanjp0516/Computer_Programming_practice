//GCD
#include<stdio.h>
#include <stdbool.h>

int gcd_func(const int a,const int b){
    int temp_a = a,temp_b = b;
    if(temp_b == 0){
        return temp_a;
    }
    return gcd_func(temp_b,temp_a % temp_b);
}

int main(){
    int a,b;
    while(true){
        scanf("%d %d",&a,&b);
        printf("%d\n",gcd_func(a,b));
    }
    return 0;
}