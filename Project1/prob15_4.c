/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void palindrome(char str[]) {
	int len=0;
	for (;;len++) {
		if (str[len] == '\0') break;
	}

	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			printf("The string is not a palindrome");
			return;
		}
	}
	printf("The string is a palindrome");
}

int main() {
	char str[100];
	printf("Enter the String : ");
	int aa = scanf("%s", str);
	palindrome(str);
	return 0;
}
*/

