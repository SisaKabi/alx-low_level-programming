#include "main.h"

/**
 * print_numbers - prints all natural numbers
 *
 * Return: Implicit.
 */
void print_numbers(void)
{
	char c;

	c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
