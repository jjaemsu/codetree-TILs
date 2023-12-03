#include <stdio.h>

int main() {
    int x[4][4] = {0,};
    for(int i = 0; i < 4; i++){
        int total = 0;
        for(int j = 0; j < 4; j++){
            scanf("%d", &x[i][j]);
            total += x[i][j];
        }
        printf("%d\n", total);
    }


    return 0;
}