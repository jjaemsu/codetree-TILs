#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int con[2][200] = { 0, };
    int t; // time
    int n;

    scanf("%d %d", &n, &t);

    for (int i = 0; i < n; i++) {
        scanf("%d", &con[0][i]);
    }
    getchar();
    for (int i = n - 1; i >= 0; i--) {
        scanf("%d", &con[1][i]);
    }
    getchar();

    for (int i = 0; i < t; i++) {
        int tmp1 = con[0][n - 1];

        for (int j = n - 1; j > 0; j--) {
            con[0][j] = con[0][j - 1];
        }
        con[0][0] = con[1][0];

        for (int j = 0; j < n - 1; j++) {
            con[1][j] = con[1][j + 1];
        }
        con[1][n - 1] = tmp1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", con[0][i]);
    }

    printf("\n");

    for (int i = n - 1 ; i >= 0; i--) {
        printf("%d ", con[1][i]);
    }
    return 0;
}