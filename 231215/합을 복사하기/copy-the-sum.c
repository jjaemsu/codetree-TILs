#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int tmp1 = a * b * c;
    a = tmp1;
    b = tmp1;
    c = tmp1;
    printf("%d %d %d", a, b, c);
    return 0;
}