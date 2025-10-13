/*
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>

int main(void)
{
	int win = 0, draw = 0;
	srand((unsigned int)time(NULL));

	while (1)
	{
		int user, com;

		printf("rock - 1, scissors - 2, paper - 3 : ");
		int yy = scanf("%d", &user);
		com = (rand() % 3) + 1;
		if (user == com)
		{
			printf("draw\n");
			draw++;
		}
		else if ((user == 1 && com == 2) || (user == 2 && com == 3) || (user == 3 && com == 1))
		{
			printf("user win\n");
			win++;
		}
		else
		{
			printf("com win\n");
			break;
		}
	}
	printf("user win : %d, draw : %d\n", win, draw);

}
*/

