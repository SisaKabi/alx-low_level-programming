#include "main.h"

/**
 * _puts - prints the string to the stdout
 * @str: string to be printed
 *
 * Return: Implicit
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
