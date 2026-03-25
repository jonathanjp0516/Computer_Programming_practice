//Fibonacci
#include <stdio.h>

int fibonacci(const int a){
    if(a == 0){
        return 0;
    }
    if(a == 1){
        return 1;
    }
    return fibonacci(a-1) + fibonacci(a-2);
}

int main(){
    int num = 0;
    while(true){
        scanf("%d",&num);
        for(int i = 0;i < num;i++){
            if(i == num-1){
                printf("%d",fibonacci(i));
            }else{
                printf("%d,",fibonacci(i));
            }
        }
        printf("\n");
    }
    return 0;
}