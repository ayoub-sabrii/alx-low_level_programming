#include <stdio.h>

/**
 * main - programme print all numbers
 *
 * Return: always 0
 */

int main(void)
{
	int a = '0';
	int b;
	int c;

	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (c > b && b > a)
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (c != '7' || b != '8')
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}