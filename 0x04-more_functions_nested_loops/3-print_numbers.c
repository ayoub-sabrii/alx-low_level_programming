#include "main.h"

/**
 * print_nmbr - print 0 to 9
 *
 * using _putchar
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
