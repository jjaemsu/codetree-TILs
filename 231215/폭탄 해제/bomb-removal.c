#include <stdio.h>

struct bomb{
    char code[10];
    char color;
    int second;
};

int main() {
    struct bomb s1;
    scanf("%s %s %d", &s1.code, &s1.color,&s1.second);

    printf("code : %s\n", s1.code);
    printf("color : %c\n", s1.color);
    printf("second : %d\n", s1.second);

    return 0;
}