#include "main.h"
#include <stddef.h>

/**
 * puts2 - prints every second char in a string
 * @str: string to be printed
 *
 * Return: Implicit
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str++;
		i = i + 1;
	}
	_putchar('\n');
}
