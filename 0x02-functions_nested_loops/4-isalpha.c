#include "main.h"

/**
 * _isalpha - check for charachter
 *
 * @c: if letter, lowercase or uppercase
 *
 * Return: 1 if is letter , 0 else
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
