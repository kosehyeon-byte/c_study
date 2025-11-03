/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {
	char str1[20];
	char str2[20];
	char str3[40];

	fputs("Input first string: ", stdout);
	fgets(str1, sizeof(str1), stdin);
	for (int i = 0; ; i++) {
		if (str1[i] == '\n') {
			str1[i] = '\0';
			break;
		}
	}
	strcpy(str3, str1);

	fputs("Input second string: ", stdout);
	fgets(str2, sizeof(str2), stdin);

	for (int i = 0; ; i++) {
		if (str2[i] == '\n') {
			str2[i] = '\0';
			break;
		}
	}

	strcat(str3, str2);

	fputs("The concatenated string is: ", stdout);
	fputs(str3, stdout);

	return 0;
}
*/

