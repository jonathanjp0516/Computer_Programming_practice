//Fibonacci
#include<stdio.h>

typedef enum {
    SUCCESS = 0,
    ERR_UNDEFINED = -1
} FibStat;

int Fibonacci(const int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

FibStat Fib(const int n,int *result){
    if(n<0){
        printf("ERR_UNDEFINED\n");
        return ERR_UNDEFINED;
    } 
    *result = Fibonacci(n);
    return SUCCESS;
}

int main(){
    int num,result;
    FibStat Fibtmp;
    while(1){
        scanf("%d",&num);
        Fibtmp = Fib(num,&result);
        if(Fibtmp == SUCCESS){
            printf("f(%d) = %d\n",num,result);
        }
    }
    return 0;
}