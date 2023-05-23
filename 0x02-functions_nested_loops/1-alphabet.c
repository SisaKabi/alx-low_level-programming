#include "main.h"

/**
 * print_alphabet - prints the english alphabet to the stdout
 *
 * Return: Implicit
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha != 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
