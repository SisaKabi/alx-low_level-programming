#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - finds and prints the last digit to stdout
 * @n: number to be evaluated.
 *
 * Return: Last digit.
 */
int print_last_digit(int n)
{
	int neg;
	int pos;
	int conv;

	if (n < 0)
	{
		conv = (n * -1);
		neg = (conv % 10);
		_putchar(48 + neg);
		return (neg);
	}
	pos = (n % 10);
	_putchar(48 +  pos);
	return (pos);
}
