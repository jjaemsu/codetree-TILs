#include <stdio.h>

int main() {
    char x[100]; 
    scanf("%s", &x);

    for(int i = 0; i < 14; i++){
        if(x[i] == '-'){
            continue;
        }
        printf("%c", x[i]);
    }

    return 0;
}