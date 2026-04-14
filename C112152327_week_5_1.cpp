//find prime
#include <stdio.h>

/* C89 沒 bool，用 int 回傳 1 或 0 */
int prime(const int num) {
    int i;
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    
    for (i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int i;
    for (i = 0; i <= 100; i++) {
        if (prime(i)) {
            printf("%d,", i);
        }
    }
<<<<<<< HEAD
=======
    printf("\n");
>>>>>>> 6fe1da09995df18b13cfcbf9cb5265747af5bec9
    return 0;
}