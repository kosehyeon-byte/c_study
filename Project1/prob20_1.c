/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void CopyAndPrintArray(int arr[4][4], int copy[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			copy[j][3 - i] = arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d ", copy[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}

int main(void)
{
	int copy[4][4] = { 0 };
	int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	CopyAndPrintArray(arr, copy);
	CopyAndPrintArray(copy, arr);
	CopyAndPrintArray(arr, copy);
	return 0;
}
*/