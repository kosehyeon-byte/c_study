/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Book {
	char title[50];
	char author[50];
	int pages;
} Book;

void PrintBookInfo(Book b)
{
	printf("Author: %s\n", b.author);
	printf("Title: %s\n", b.title);
	printf("Pages: %d\n", b.pages);
}

int main(void)
{
	Book arrbook[3];
	int len;
	for (int i = 0; i < 3; i++) {
		printf("Enter author of book %d: ", i + 1);
		fgets(arrbook[i].author, 49, stdin);
		len = strlen(arrbook[i].author);
		if (len > 0 && arrbook[i].author[len - 1] == '\n') arrbook[i].author[len - 1] = '\0';
		printf("Enter title of book %d: ", i + 1);
		fgets(arrbook[i].title, 49, stdin);
		len = strlen(arrbook[i].title);
		if (len > 0 && arrbook[i].title[len - 1] == '\n') arrbook[i].title[len - 1] = '\0';
		printf("Enter number of pages of book %d: ", i + 1);
		scanf("%d", &arrbook[i].pages);
		getchar();
	}

	for (int i = 0; i < 3; i++) {
		printf("\nInformation of book %d:\n", i + 1);
		PrintBookInfo(arrbook[i]);
	}
	return 0;
}
*/
