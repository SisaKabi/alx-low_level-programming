#include "main.h"

/**
 * _strlen_recursion - prints strlen to stdout
 * @s: string
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	int strlen;

	strlen = 0;

	if (*s == '\0')
	{
		return (strlen);
	} else if (*s < '\0')
	{
		strlen = strlen + 1;
		s++;
	}
	_strlen_recursion(s);
	return (strlen);
}
