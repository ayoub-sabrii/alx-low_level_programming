#include "main.h"

/**
 * print_last_digit - print the last digit of nymbers
 *
 *@n: nombre.
 * Return: lastdigit
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	_putchar(lastdigit);
	return (lastdigit);
}
