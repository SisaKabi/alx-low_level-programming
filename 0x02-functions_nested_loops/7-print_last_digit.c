#include "main.h"
#include <limits.h>

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

	if (n == INT_MIN)
	{
		_putchar(56);
		return (8);	
	}
	else if (n < 0)
	{
		conv = (-1 * n);
		neg = (conv % 10);
		_putchar(48 + neg);
		return (neg);
	}
	pos = (n % 10);
	_putchar(48 +  pos);
	return (pos);
}
