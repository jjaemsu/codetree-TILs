#include <stdio.h>

int main() {
    int x[10] = {0,};
    int hap = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }
    hap += x[2];
    hap += x[4];
    hap += x[9];
    printf("%d", hap);



    return 0;
}