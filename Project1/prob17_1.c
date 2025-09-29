#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void MaxAndMin(int arr[5], int* max, int* min) {
	for(int i = 0; i < 5; i++) {
		printf("Number %d: ", i + 1);
		int yy = scanf("%d", &arr[i]);
		if (i == 0) {
			*max = arr[i];
			*min = arr[i];
		}
		else if(arr[i] > *max) {
			*max = arr[i];
		}
		else if(arr[i] < *min) {
			*min = arr[i];
		}
	}
}

int main(void)
{
	int arr[5];
	int max, min;
	MaxAndMin(arr, &max, &min);
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	return 0;
}