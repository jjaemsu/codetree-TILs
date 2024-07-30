#include <stdio.h>


// L 이면 왼쪽으로, R이면 오른쪽으로, F면 보고있는 방향
// 0이면 y += 1, 1이면 x += 1, 2면 y-= 1, 3이면 x -= 1 
int main() {
    int x = 0;
    int y = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1}; 
    int dir_num = 3; 
    char s[100000]= {0, };
    scanf("%s", s);
    for(int i = 0 ; s[i] != 0; i++){
        if(s[i] == 'L'){
            dir_num = (dir_num - 1 + 4) % 4;
        }
        else if(s[i] == 'R'){
            dir_num = (dir_num + 1 + 4) % 4;
        }
        else{
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }
    printf("%d %d", x, y);
    return 0;
}