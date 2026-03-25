//find prime
#include<stdio.h>

bool isPrime(const int num){
    for(int i=2;i<=num;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num = 0;
    scanf("%d",&num);
    
}