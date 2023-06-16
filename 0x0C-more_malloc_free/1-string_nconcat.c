#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings and returns a pointer
 * @s1: first string
 * @s2: second string
 * @n: number of characters in one string.
 *
 * Return: pointer to new string on succes. NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	unsigned int i;
	char *ptr, *concat;

	if (s1 != NULL)
	{
		len1 = _strlen(s1);
	} else
		len1 = 0;
	ptr = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	concat = ptr;
	while (*s1 != '\0')
	{
		*ptr = *s1;
		ptr++;
		s1++;
	} if (*(ptr - 1) != ' ' && *s2 != ' ')
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
	return (concat);
}
