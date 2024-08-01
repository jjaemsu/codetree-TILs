#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[20][20] = { 0, };
    int n;
    int max = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int row = 0; row <= n - 3; row++) {
        for (int col = 0; col <= n - 3; col++) {
            int cnt = 0;
            for (int i = row; i < row + 3; i++) {
                for (int j = col; j < col + 3; j++) {
                    if (arr[i][j] == 1) {
                        cnt++;
                    }
                }
            }
            if (cnt > max) {
                max = cnt;
            }
        }
    }

    printf("%d\n", max);
    return 0;
}