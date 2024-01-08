#include <stdio.h>

int main() {
    int x;
    int y = 1;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            if(y == 10){
                y = 1;
            }
            printf("%d ", y);
            y++;
        }
        printf("\n");
    }
    return 0;
}