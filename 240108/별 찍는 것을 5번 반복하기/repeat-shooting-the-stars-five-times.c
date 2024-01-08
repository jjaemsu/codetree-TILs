#include <stdio.h>

void print_5_stars(){
    printf("**********");
}

int main() {
    for(int i = 0; i < 5; i++){
        print_5_stars();
        printf("\n");
    }
    return 0;
}