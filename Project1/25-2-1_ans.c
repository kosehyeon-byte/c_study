/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int maxlen, len, i;
	char* str;
	printf("문자열의 최대 길이 입력: ");
	scanf("%d", &maxlen);
	getchar();
	str = (char*)malloc(sizeof(char) * (maxlen + 1));

	print("enter string: ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0;
	len = strlen(str);

	for (i = len; i > 0; i--)
	{
		//...
	}
}
*/

