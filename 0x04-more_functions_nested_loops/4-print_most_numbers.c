#include "main.h"

/**
 * print_most_numbers - prints all natural numbers, except 2 & 4
 *
 * Return: Implicit.
 */
void print_most_numbers(void)
{
	char c;

	c = 48;

	while (c <= 57)
	{
		if (c == 50)
		{
			c++;
		} else if (c == 52)
		{
			c++;
		}
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
