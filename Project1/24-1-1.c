/*
#include <stdio.h>

int main (void) {
	char str[30];
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		printf("File open error!\n");
		return -1;
	}

	while (fgets(str, sizeof(str), fp) != NULL)
		printf(str);

	fclose(fp);
	return 0;
}
*/

