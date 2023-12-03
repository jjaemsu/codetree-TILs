#include <stdio.h>

int main() {
    char alphabet[5][3] = {
        {'a','b','c'},
        {'d','e','f'},
        {'g','h','i'},
        {'j','k','l'},
        {'m','n','o'}
    };

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){ 
            alphabet[i][j] -= 32;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){ 
            printf("%c ", alphabet[i][j]);
        }
        printf("\n");
    }

    return 0;
}