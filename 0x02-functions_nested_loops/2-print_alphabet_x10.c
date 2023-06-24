#include "main.h"

/**
 * main - check the code.
 *
 * print_alphabet: void print_alphabet_x10(void)
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
			letters++;
		}
		_putchar('\n');
		i++;
	}
}
