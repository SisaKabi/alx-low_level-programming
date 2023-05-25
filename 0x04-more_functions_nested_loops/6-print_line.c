#include "main.h"

/**
 * print_line - prints a line to the stdout
 * @n: Number of times '_' is printed
 *
 * Return: 0
 */
void print_line(int n)
{
	int m;

	m = n;

	if (m <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
		if (n == 0)
		{
			_putchar('\n');
		}
	}
}
