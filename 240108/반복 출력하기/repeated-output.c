#include <stdio.h>

void print_char(){
    printf("12345^&*()_");
}

int main() {
    int x = 0;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        print_char();
        printf("\n");
    }
    return 0;
}