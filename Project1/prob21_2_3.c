/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
	char person1[40]
	int space_index;
	char person2[40];
	char name1[20]; char age1_str[4];
	char name2[20]; char age2_str[4];
	int age1;
	int age2;
	int len;

	fputs("Input first person: ", stdout);
	fgets(person1, sizeof(person1), stdin);
	person1[strlen(person1) - 1] = '\0'; // Remove newline character

	len = strlen(person1);

	for (int i = 0; ; i++) {
		if (person1[i]== ' ') {
			space_index = i;
			break;
		}
	}

	for (int i = 0; i<space_index ; i++) {
		name1[i] = person1[i];
	}

	name1[space_index] = '\0';

	for (int i = space_index + 1; i < len+1; i++) {
		if (i == len) { age1_str[i - space_index - 1] = '\0'; break; }
		age1_str[i - space_index - 1] = person1[i];
	}

	age1 = atoi(age1_str);

	fputs("Input second person: ", stdout);
	fgets(person2, sizeof(person2), stdin);
	person2[strlen(person2) - 1] = '\0'; // Remove newline character

	len = strlen(person2);

	for (int i = 0; ; i++) {
		if (person2[i] == ' ') {
			space_index = i;
			break;
		}
	}

	for (int i = 0; i<space_index ; i++) {
		name2[i] = person2[i];
	}

	name2[space_index] = '\0';

	for (int i = space_index + 1; i < len+1; i++) {
		if (i == len) {age2_str[i - space_index - 1] = '\0'; break;}
		age2_str[i - space_index - 1] = person2[i];
	}

	age2 = atoi(age2_str);

	if (strcmp(name1, name2) == 0) {
		fputs("Same name\n", stdout);
	} else {
		fputs("Different name\n", stdout);
	}

	if (age1 == age2) {
		fputs("Same age\n", stdout);
	} else {
		fputs("Different age\n", stdout);
	}

	return 0;
}
*/


