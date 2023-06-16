#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int len = 0;
	unsigned int i;
	char *ptr, *hold;

	if (s1 != NULL)
	{
		while (s1[len] != '\0')
		{
			len++;
		}
	} else
	{
		len = 0;
	}

	ptr = malloc(sizeof(char) * (len + n + 1));
	if (ptr == NULL)
		return (NULL);

	hold = ptr;

	while (*s1 != '\0')
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	if (*(ptr - 1) != ' ' && *s2 != ' ')
	{
		*ptr = ' ';
		ptr++;
	}
	for (i = 0; i < n; i++)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	ptr = '\0';
	return (hold);
}
