#include "main.h"

/**
 * _islower - function check for a lowercase charachter
 *
 * @c: is lowercase
 *
 * Return: 1 if is lowercase ,0 if else
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
