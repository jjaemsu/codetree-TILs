#include <stdio.h>

int main() {
    int x[4][4] = {
        {1, 2, 3, 4},
        {7, 8, 9, 10},
        {11, 12, 13, 14},
        {15,16,17,18}
    };

    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {  
            total += x[i][j];
        }
        printf("%d\n", total);
    }

    return 0;
}