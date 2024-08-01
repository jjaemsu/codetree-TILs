#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum{false, true} bool;

bool in_range(int x, int y, int n) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    int arr[100][100] = { 0, };
    int n, m;
    int dx[4] = { 0, 1, 0, -1 };
    int dy[4] = { 1, 0, -1, 0 };

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        int tmp = 0;
        int r, c;
        scanf("%d %d", &r, &c);
        arr[r - 1][c - 1] = 1;
        for (int j = 0; j < 4; j++) {
            int nx = (r - 1) + dx[j];
            int ny = (c - 1) + dy[j];
            if (in_range(nx, ny, n) && arr[nx][ny] == 1) {
                tmp++;
            }
        }
        if (tmp == 3) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }

    return 0;
}