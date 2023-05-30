#include "main.h"

/**
 * puts_half - prints only the second half of a string
 * @str: String
 *
 * Return: Implicit
 */
void puts_half(char *str)
{
	int length;

	while (str != '\0')
	{
		length++;
		str++;
	}

	int half;

	half = length/2;

	if (str < str[half])
	{
		str++;
	} else if (str >= str[half] && str !== '\0')
	{
		_putchar(str);
		str++;
	}

}
