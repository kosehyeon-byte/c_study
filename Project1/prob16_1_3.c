/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int arr[5][5] = { 0 };
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Enter the number : ");
			int ff = scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][4] += arr[i][j];

		}
		sum1 += arr[i][4];
	}

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[4][j] += arr[i][j];

		}
		sum2 += arr[4][j];
	}

	if (sum1 != sum2)
	{
		printf("The sums of rows and columns are not equal.\n");
		return 0;
	}
	else { arr[4][4] = sum1; }

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
*/

