#include <stdio.h>
#include <stdlib.h>

bool prime(const int num){
    if (num <= 1){
        return false;
    } 
    if (num <= 3){
        return true;
    } 
    if (num % 2 == 0 || num % 3 == 0){
        return false;
    }
    for (int i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    for(int i=0; i<=100; i++){
        if(prime(i)){
            printf("%d,",i);
        }
    }
}