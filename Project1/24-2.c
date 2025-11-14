/*
#include <stdio.h>

long CalFileSize(FILE* fp) {
	long byte = 0;
	long fpos;

	fpos = ftell(fp);
	fseek(fp, 0, SEEK_END);
	byte = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return byte;
}

int main(void) {
	FILE* fp = fopen("data.txt", "rt");

	long byte = CalFileSize(fp);
	printf("File size: %ld bytes\n", byte);
	fclose(fp);
	return 0;
}
*/

