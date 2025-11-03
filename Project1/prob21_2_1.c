/*
#include <stdio.h>

int main(void) {
	char ch[100];
	int sum = 0;
	fputs("Input a string: ", stdout);
	fgets(ch, sizeof(ch), stdin);
	for (int i = 0; ch[i] != '\0'; i++) {
		if (48 <= ch[i] && ch[i] <= 57) {
			sum += ch[i] - 48;
		}
	}

	fputs("The sum is: ", stdout);
	printf("%d\n", sum);

	return 0;
}
*/

