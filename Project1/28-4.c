/*
//data.txt파일 안에 있는 모든 단어 중에서 A or P로 시작하는 단어 수 세기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
	FILE* fp;
	char word[100];
	int counta = 0 , countp = 0;

	if (argc != 2) {
		printf("사용법: %s <파일이름>\n", argv[0]);
		return -1;
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return -1;
	}
	while (fscanf(fp, "%s", word) != EOF) {
		if (word[0] == 'A') {
			counta++;
			continue;
		}

		if (word[0] == 'P') {
			countp++;
		}
	}
	fclose(fp);
	printf("A 로 시작하는 단어 수: %d\n", counta);
	printf("P로 시작하는 단어 수: %d\n", countp);
	return 0;
}
*/


