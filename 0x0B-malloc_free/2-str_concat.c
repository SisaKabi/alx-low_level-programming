#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings with malloc
 * @s1: first string
 * @s2: second string
 *
 * Return: Final string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0;
	char *final, *concat;

	if (s1 != NULL)
	{
		len1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = _strlen(s2);
	}

	final = exceptions(len1, len2);

	if (final == NULL)
		return (NULL);

	concat = final;

	while (*s1)
	{
		*final = *s1;
		final++;
		s1++;
	}
	if (*(final - 1) != ' ' && *s2 != ' ')
	{
		*final = ' ';
		final++;
	}
	while (*s2)
	{
		*final = *s2;
		final++;
		s2++;
	}
	*final = '\0';
	return (concat);
}
