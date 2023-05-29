#include "main.h"

/**
 * _strlen - measures and returns the length of a string
 * @s: string to be measured
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
