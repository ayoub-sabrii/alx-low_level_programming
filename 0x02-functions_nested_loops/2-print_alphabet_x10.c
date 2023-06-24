#include "main.h"

/**
 *
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char letters;

	for (i = 1; i <= 10; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
