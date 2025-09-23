/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int arr[32]={0};
	int num, i=31;
	printf("Enter an integer : ");
	int x = scanf("%d", &num);

	if (num == 0) {
		printf("%d", num);
		return 0;
	}

	while (num != 0) {
		arr[i] = num % 2;
		num = num / 2;
		i--;
	}

	int start = 0;
	printf("Binary equivalent : ");
	for (int j = 0; j < 32; j++) {
		if (arr[j] == 1) {
			start = 1;
			}
		if (start == 1) { printf("%d", arr[j]); }
	}


	return 0;
}
*/

