#include "main.h"

/**
 * more_numbers - prints all numbers from 0-14
 *
 * Return: Implicit.
 */
void more_numbers(void)
{
	char c;
	int n;

	n = 0;

	while (n < 10)
	{

		c = '0';

		while (c <= '9')
		{
			_putchar(c);
			c++;
		}
		n++;
		_putchar('\n');
	}
}
