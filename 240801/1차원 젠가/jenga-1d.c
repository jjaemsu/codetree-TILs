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
    getchar();
    scanf("%d %d", &s2, &e2);
    int count = 0;
    for (int i = s1 - 1; i <= e1 - 1; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (count > n) break;

        while (arr[count] == 0) {
            arr[count] = arr[count + 1];
            count++;
        }
        tmp[i] = arr[count];
        count++;
        arr[i] = tmp[i]; // 복사하기
    }

    count = 0;
    for (int i = s2 - 1; i <= e2 - 1; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (count > n) break;

        while (arr[count] == 0) {
            arr[count] = arr[count + 1];
            count++;
        }
        tmp[i] = arr[count];
        count++;
        arr[i] = tmp[i]; // 복사하기
    }
    
    count = 0;

    printf("%d\n", n - (e1 - s1 + 1) - (e2 - s2 + 1));
    for (int i = 0; i < 2; i++) {
        printf("%d\n", arr[i]);
    }


    return 0;
}