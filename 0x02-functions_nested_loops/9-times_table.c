#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%1d", i * j);
			if (j != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
