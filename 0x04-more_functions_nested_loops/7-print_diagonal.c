#include "main.h"

/**
 * print_diagonal - prints a line to the stdout
 * @n: Number of times '\' is printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		_putchar('\\');
		n--;
		if (n == 0)
		{
			_putchar('\n');
		}
	}
}
