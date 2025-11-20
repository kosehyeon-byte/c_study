/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
	char title[50];
	char author[50];
	int pages;
} Book;

void PrintBookInfo(Book* pb)
{
	printf("Author: %s\n", pb->author);
	printf("Title: %s\n", pb->title);
	printf("Pages: %d\n", pb->pages);
}

int main(void)
{
	Book* pb[3];
	int len;
	for (int i = 0; i < 3; i++) {
		pb[i] = (Book*)malloc(sizeof(Book));
		if (pb[i] == NULL) {
			printf("할당 실패!\n");
			return -1;
		}

		printf("Enter author of book %d: ", i + 1);
		if (fgets(pb[i]->author, sizeof pb[i]->author, stdin) == NULL) {
			printf("fail\n");  return 0;
		}
		len = strlen(pb[i]->author);
		if (len > 0 && pb[i]->author[len - 1] == '\n') pb[i]->author[len - 1] = '\0';

		printf("Enter title of book %d: ", i + 1);
		if (fgets(pb[i]->title, sizeof pb[i]->title, stdin) == NULL) {
			printf("fail\n");  return 0;
		}
		len = strlen(pb[i]->title);
		if (len > 0 && pb[i]->title[len - 1] == '\n') pb[i]->title[len - 1] = '\0';

		printf("Enter number of pages of book %d: ", i + 1);
		scanf("%d", &pb[i]->pages);
		getchar();
	}

	for (int i = 0; i < 3; i++) {
		printf("\nInformation of book %d:\n", i + 1);
		PrintBookInfo(pb[i]);
		free(pb[i]);
	}

	return 0;
}
*/

