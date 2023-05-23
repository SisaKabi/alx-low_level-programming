#include "main.h"

/**
 * print_alphabet - prints the english alphabet to the stdout
 *
 * Return: Implicit
 */
void print_alphabet_x10(void)
{
	char a;
	int n;

	n = 0;

	while (n < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}
}
