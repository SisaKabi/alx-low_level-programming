#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings and returns a pointer
 * @s1: first string
 * @s2: second string
 * @n: number of characters in s2 to print.
 *
 * Return: pointer to new string on succes. NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *ptr, *concat;

	if (s1 != NULL)
	{
		len1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = _strlen(s2);
	}
	ptr = exceptions(len1, len2, n);
	if (ptr == NULL)
	{
		return (NULL);
	}
	concat = ptr;
	if (len1 > 0)
	{
		while (*s1 != '\0')
		{
			*ptr = *s1;
			ptr++;
			s1++;
		}
		if (*(ptr - 1) != ' ' && *s2 != '\0')
		{
			*ptr = ' ';
			ptr++;
		}
	}
	if (len2 > 0 && len2 < n)
	{
		while (*s2 != '\0')
		{
			*ptr = *s2;
			ptr++;
			s2++;
		}

	} else if (len2 > 0 && len2 > n)
	{
		for (i = 0; i < n; i++)
		{
			*ptr = *s2;
			ptr++;
			s2++;
		}
	}
	*ptr = '\0';
	return (concat);
}
