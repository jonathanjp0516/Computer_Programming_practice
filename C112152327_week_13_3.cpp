#include <stdio.h>
#include <stdlib.h>

void strcut(char* a, char* b, int start, int end);

int main(){
    char a[80], b[80];
    
    scanf("%s", a);
    strcut(a, b, 2, 5);
    printf("%s\n", b);
    
    return 0;
}

void strcut(char* a, char* b, int start, int end) {
    int i;
    int j = 0;

    for(i = start; i <= end; i++) {

        if(a[i] == '\0') {
            break;
        }
        
        b[j] = a[i];
        j++;
    }
    
    b[j] = '\0';
}