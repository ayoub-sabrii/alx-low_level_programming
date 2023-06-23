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
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
