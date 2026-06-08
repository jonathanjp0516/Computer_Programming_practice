#include <stdio.h>
#include <stdlib.h>

// 宣告一個函式名為 AND
int* AND(int* a, int* b);

int main() {
    int *a, *b, *c;
    int i;

    a = (int*)malloc(8 * sizeof(int));
    b = (int*)malloc(8 * sizeof(int));

    if (a == NULL || b == NULL) {
        printf("記憶體配置失敗\n");
        return 1;
    }

    // 輸入8個0或1的整數至 a
    for(i = 0 ; i < 8 ; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0 ; i < 8 ; i++) {
        scanf("%d", &b[i]);
    }

    c = AND(a, b);

    printf("c = ");
    for(i = 0 ; i < 8 ; i++) {
        printf("%d", c[i]);
    }
    printf("\n");

    free(a);
    free(b);
    free(c);

    return 0;
}

int* AND(int* a, int* b) {
    int i;
    int* c = (int*)malloc(8 * sizeof(int));

    if (c == NULL) {
        printf("記憶體配置失敗\n");
        exit(1);
    }

    for(i = 0; i < 8; i++) {
        c[i] = a[i] & b[i]; 
    }

    return c;
}