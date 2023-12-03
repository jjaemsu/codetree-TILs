#include <stdio.h>

int main() {
    char x[10];
    for(int i = 0; i < 10; i++){
        scanf("%c ", &x[i]);
    }

    printf("%c %c %c", x[1], x[4], x[7]);
    return 0;
}