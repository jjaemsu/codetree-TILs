#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int tmp1, tmp2;
    tmp1 = c;
    tmp2 = b;
    b = a;
    c = tmp2;
    a = tmp1;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    
    return 0;
}