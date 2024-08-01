#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[100] = { 0, };
    int tmp[100] = { 0, };
    int n;
    int s1, e1, s2, e2;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &s1, &e1);
    scanf("%d %d", &s2, &e2);

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (i < s1 - 1 || i > e1 - 1) {
            tmp[count++] = arr[i];
        }
    }

    for (int i = 0; i < count; i++) {
        arr[i] = tmp[i];
    }

    int new_n = count;  

    count = 0;
    for (int i = 0; i < new_n; i++) {
        if (i < s2 - 1 || i > e2 - 1) {
            tmp[count++] = arr[i];
        }
    }

    for (int i = 0; i < count; i++) {
        arr[i] = tmp[i];
    }

    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    return 0;
}