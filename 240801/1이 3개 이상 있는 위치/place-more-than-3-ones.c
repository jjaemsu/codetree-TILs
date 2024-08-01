#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum { false, true } bool;

bool in_range(int x,int y,int n) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    int sol[100][100] = { 0, };
    int dx[4] = { 0,1,0,-1 };
    int dy[4] = { 1,0,-1,0 };
    int n;
    int ans = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &sol[i][j]);
        }
        getchar();
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int tmp = 0;
            for (int dir_num = 0; dir_num < 4; dir_num++) {
                int nx = i + dx[dir_num];
                int ny = j + dy[dir_num];
                if (in_range(i, j, n) && sol[nx][ny] == 1) {
                    tmp++;
                    if (tmp == 3) {
                        ans++;
                        break;
                    }
                }
            }
        }
    }

    printf("%d", ans);

    return 0;
}