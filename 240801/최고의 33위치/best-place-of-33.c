#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int ans(int row,int col_s,int col_e) {
	int num = 0;
	for (int col = col_s; col <= col_e; col++){
	}
}

int main() {
	int arr[20][20] = { 0, };
	int n;
	int max = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
		getchar();
	}

	for (int row = 0; row < n; row++) {
		if (row + 2 >= n) {
			continue;
		}
		for (int col = 0; col < n; col++) {
			int cnt = 0;
			if (col + 2 >= n){
				continue;
			}
			for (int i = row; i < 3; i++) {
				for (int j = col; j < 3; j++) {
					if (arr[i][j] == 1) {
						cnt++;
					}
				}
			}
			if (cnt > max) {
				max = cnt;
			}
		}
	}

	printf("%d", max);
	return 0;
}