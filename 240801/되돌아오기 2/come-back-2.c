#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum{false, true} bool;

bool in_range(int x, int y, int n) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    int time = 0;
    int ans = -1;
    int ans_bool = false;
    int x = 0;
    int y = 0;
    char dir[100000] = { 0, };
    int dir_num = 0;
    int dx[4] = { 0, 1, 0, -1 };
    int dy[4] = { 1, 0, -1, 0 };
    
    scanf("%s", dir);
    getchar();
    for (int i = 0; dir[i] != 0; i++) {
        if (dir[i] == 'L') {
            dir_num = (dir_num - 1 + 4) % 4;
            time++;
        }
        else if (dir[i] == 'R') {
            dir_num = (dir_num + 1 + 4) % 4;
            time++;
        }
        else if(dir[i] == 'F') {
            x = x + dx[dir_num];
            y = y + dy[dir_num];
            time++;
        }

        if (x == 0 && y == 0 && !ans_bool) {
            ans = time;
            ans_bool = true;
        }
    }
    printf("%d", ans);
    return 0;
}