#include <stdio.h>

int main() {
    int x[100] = {0,};
    int total = 0;
    int c = 0;
    int i;
    for(i = 0; i < 100; i++){
        scanf("%d", &x[i]);
        if(x[i] == 0){
            break;
        }
    }
    total += x[i - 1];
    total += x[i - 2];
    total += x[i - 3];
    printf("%d", total);
   

    return 0;
}