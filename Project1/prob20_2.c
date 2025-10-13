/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 0;
		}
	}


	int num = 1;
	int row = 0, col = 0;
	while (num <= n * n) {
		while (col < n && arr[row][col] == 0) {
			arr[row][col] = num++;
			col++;
		}
		col--;
		row++;
		while (row < n && arr[row][col] == 0) {
			arr[row][col] = num++;
			row++;
		}
		row--;
		col--;
		while (col >= 0 && arr[row][col] == 0) {
			arr[row][col] = num++;
			col--;
		}
		col++;
		row--;
		while (row >= 0 && arr[row][col] == 0) {
			arr[row][col] = num++;
			row--;
		}
		row++;
		col++;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

}
*/

