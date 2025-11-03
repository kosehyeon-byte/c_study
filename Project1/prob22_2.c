/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct employee {
	char name[20];
	char code[20];
	int age;
};

int main(void) {
	struct employee emp[3];
	for (int i = 0; i < 3; i++) {
		printf("Enter details of employee %d (name code age): ", i + 1);
		int xx = scanf("%s %s %d", emp[i].name, emp[i].code, &emp[i].age);
	}

	printf("\nEmployee Details:\n");
	for (int i = 0; i < 3; i++) {
		printf("\nEmployee %d:\n", i + 1);
		printf("Name: %s\n", emp[i].name);
		printf("Code: %s\n", emp[i].code);
		printf("Age: %d\n", emp[i].age);
	}

	return 0;
}
*/

