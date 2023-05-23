#include "main.h"

/**
 * print_sign - teste if n is greater than, less than or 0
 * @n: number to be tested
 *
 * Return: 1 and print + if greater than
 * 0 and print 0 if zero
 * -1 and print - if less than
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('+');
		return (1);
}
