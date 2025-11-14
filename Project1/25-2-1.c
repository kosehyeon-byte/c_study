// 사용자가 입력할 문자열의 최대 길이를 입력받아서 그만큼 동적할당.
// 입력받은 문자열을 공백 기준으로 단어별로 배열에 저장.


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	int maxLength;
	printf("Enter the maximum length of the string: ");
	int pp = scanf("%d", &maxLength);
	// 동적할당
	char* inputString = (char*)malloc((maxLength + 1) * sizeof(char));
	if (inputString == NULL) {
		printf("Memory allocation failed!\n");
		return -1;
	}
	// 문자열 입력
	printf("Enter a string: ");
	int ppp = getchar(); // 개행 문자 제거
	fgets(inputString, maxLength + 1, stdin);
	// 단어별로 분리하여 배열에 저장
	char* words[100]; // 최대 100개의 단어 저장 가능
	int wordCount = 0;
	char* token = strtok(inputString, " \n");
	while (token != NULL && wordCount < 100) {
		words[wordCount++] = token;
		token = strtok(NULL, " \n");
	}
	// 결과 출력
	for (int i = wordCount - 1; i >= 0; i--) {
		printf("%s ", words[i]);
	}
	// 동적할당 해제
	free(inputString);
	return 0;
}
*/

