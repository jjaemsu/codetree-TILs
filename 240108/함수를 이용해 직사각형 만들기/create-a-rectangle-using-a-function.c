#include <stdio.h>
void print_1(int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("1");
        }
        printf("\n");
    }
}

int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    print_1(n,m);
    return 0;
}