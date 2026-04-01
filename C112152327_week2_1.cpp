//bmi calculator
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

float bmi_calc(const float h,const float w){
    float bmi = w/(h*h);
    return bmi;
}

int main(){
    float height, weight, bmi;
    while (true) {
        scanf("%f %f",&height , &weight);

        bmi = bmi_calc(height/100,weight);

        if(bmi>=35){
            printf("重度肥胖\n");
        }else if(bmi>=30){
            printf("中度肥胖\n");
        }else if(bmi>=27){
            printf("輕度肥胖\n");
        }else if(bmi>=24){
            printf("過重\n");
        }else if(bmi>=18.5){
            printf("適中\n");
        }else if(bmi<18.5){
            printf("過輕\n");
        }
    }
    return 0;
}