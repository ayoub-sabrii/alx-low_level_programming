#include "main.h"

/**
 * factorial - return factorial of numbers
 *
 * @n:numbers of returnthe factorial
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
