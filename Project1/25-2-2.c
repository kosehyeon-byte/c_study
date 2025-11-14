/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int n=0, i=0;
	int* ptr = (int*)malloc(sizeof(int) * 5);
	int size_ptr = 5;
	while (n != -1) {
		printf("Enter an integer (-1 to stop): ");
		int xx = scanf("%d", &n);
		if (n != -1) {
			if (i >= size_ptr) {
				ptr = (int*)realloc(ptr, sizeof(int) * (size_ptr + 3));
				size_ptr += 3;
			}
			ptr[i] = n;
			i++;
		}
		else {
			break;
		}
	}

	for (int j = 0; j < i; j++) {
		printf("%d ", ptr[j]);
	}

	free(ptr);
	return 0;
}
*/