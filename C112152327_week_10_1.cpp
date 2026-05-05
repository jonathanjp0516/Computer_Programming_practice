#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int A[8];
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for(int i = 0; i < 8; i++){
        A[i] = abs(n % 2); // Store the remainder in the array
        n /= 2; // Divide n by 2
    }
    
    printf("The 8-bit binary representation is: ");
    for(int i = 7; i >= 0; i--){
        printf("%d", A[i]); // Print the binary digits in reverse order
    }
    printf("\n");
    
    return 0;
}