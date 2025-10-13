/*
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>

int main(void)
{
	int n = 1, strike = 0, ball =0;
	int com1 = 0, com2 = 0, com3 = 0;
	printf("game start\n");

	int user1, user2, user3;
	srand((unsigned int)time(NULL));

	while (com1 == com2 || com2 == com3 || com1 == com3)
	{
		com1 = (rand() % 9) + 1;
		com2 = (rand() % 10);
		com3 = (rand() % 10);
	}


	while (1)
	{
		printf("choose 3 numbers : ");
		int yy = scanf("%d %d %d", &user1, &user2, &user3);

		if (user1 == com1) strike++;
		if (user2 == com2) strike++;
		if (user3 == com3) strike++;

		if (user1 == com2 || user1 == com3) ball++;
		if (user2 == com1 || user2 == com3) ball++;
		if (user3 == com1 || user3 == com2) ball++;



		if (strike == 3)
		{
			printf("3 strike! you win!\n");
			break;
		}
		else
			printf("%d th result : %d strike, %d ball\n", n, strike, ball);

		strike = 0;
		ball = 0;
		n++;
	}

	printf("game over.\n");
	return 0;
}
*/

