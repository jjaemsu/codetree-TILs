#include <stdio.h>

int main() {
    int x[2][4] = {0,};
    double t_line = 0; //총합
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d ", &x[i][j]);
        }
    }
    for(int i = 0; i < 2; i++){
        double h_line = 0; //가로
        for(int j = 0; j < 4; j++){
            h_line += x[i][j];
        }
        printf("%.1lf ", h_line / 4.0 );
    }
    printf("\n");

    for(int i = 0; i < 4; i++){
        double v_line = 0; //세로
        for(int j = 0; j < 2; j++){
            v_line += x[j][i];
        }
        printf("%.1lf ", v_line / 2.0);
    }
    printf("\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            t_line += x[i][j];
        }
    }
    printf("%.1lf ",t_line / 8.0);



    return 0;
}