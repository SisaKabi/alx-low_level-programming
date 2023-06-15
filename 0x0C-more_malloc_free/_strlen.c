#include "main.h"

/**
 * _strlen - measures and returns a strings length
 * @s: string to be measured
 *
 * Return: String length;
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		return (0);
	}

	if (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
