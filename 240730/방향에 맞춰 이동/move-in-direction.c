#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main() {
    // W -= X, E += X, N += Y, s -= Y
    int n;
    int nx = 0;
    int ny = 0;
    scanf("%d", &n);
    char dir[4] = { 'W','E','N','S' }; // 서, 남, 북, 동
    getchar();
    for (int i = 0; i < n; i++) {
        char tmpdir;
        int dir_num;
        scanf("%c %d", &tmpdir, &dir_num);
        getchar();
        if (tmpdir == dir[0]) {
            nx -= dir_num;
        }
        else if (tmpdir == dir[1]) {
            nx += dir_num;
        }
        else if (tmpdir == dir[2]) {
            ny += dir_num;
        }
        else if (tmpdir == dir[3]) {
            ny -= dir_num;
        }
    }
    printf("%d %d", nx, ny);
    return 0;
}