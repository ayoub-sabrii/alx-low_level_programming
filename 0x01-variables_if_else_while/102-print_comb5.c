#include <stdio.h>

/**
 * main - adv
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0;
	int b;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 + 48);
			putchar(a % 10 + 48);
			putchar(' ');
			putchar(b / 10 + 48);
			putchar(b % 10 + 48);
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
