#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: string to be reversed
 *
 * Return: Implicit
 */

void print_rev(char *s)
{
	int length;
	
	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
