#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum{false, true} bool;

bool in_range(int x, int y, int n) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    int n;
    int x = 0;
    int y = 0;
    int time = 0;
    int ans = -1;
    scanf("%d", &n);

    char dir[4] = { 'N', 'E', 'S', 'W' };
    int dx[4] = { 0, 1, 0, -1 };
    int dy[4] = { 1, 0, -1, 0 };

    for (int i = 0; i < n; i++) {
        char dest;
        int dir_num;
        getchar();
        scanf("%c %d",&dest, &dir_num);
        for (int j = 0; j < dir_num; j++) {
            for (int k = 0; k < 4; k++) {
                if (dest == dir[k]) {
                    x += dx[k];
                    y += dy[k];
                    break;
                }
            }
            time++;
            if (x == 0 && y == 0) {
                ans = time;
            }
        }
    }
    
    
    printf("%d", ans);
    return 0;
}