/*
#include <stdio.h>

int main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr;
	int* ptr2 = arr + 5;
	int halfn = sizeof(arr) / sizeof(arr[0]) / 2;

	for (int i = 0; i < halfn; i++) {
		int temp = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 - i);
		*(ptr2 - i) = temp;
	}

	for (int i = 0; i < 2*halfn; i++) {
		printf("%d ", *(ptr1 + i));
	}

	return 0;
}
*/

