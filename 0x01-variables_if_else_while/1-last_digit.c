#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
		printf("last digit of %i is %i  and is greater than 5");
	else if (digit == 0)
		printf("last digit of %i is %i  and is 0");
	else if (digit < 6 && != 0)
		ptintf("last digit of %i is %i and is less than 6 and not 0");
	return (0);
}
