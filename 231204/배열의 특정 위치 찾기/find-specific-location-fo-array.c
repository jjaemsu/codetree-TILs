#include <stdio.h>

int main() {
    int x[10] = {0,};
    double aver;
    int even_total = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &x[i]);
        if(i % 2 == 1){
            even_total += x[i];
        }
        if(i % 3 == 2){
            aver += x[i];
        }
    }
    aver /= 3.0;
    printf("%d %.1lf", even_total, aver);

    return 0;
}