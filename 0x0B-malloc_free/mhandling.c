#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_handling - handles prep for str_concat
 * @s1: first string
 * @s2: second string
 *
 * Return: ptr to allocated memory
 */
char *malloc_handling(unsigned int len1, unsigned int len2)
{
	char *fin

	if (len1 == 0 && len2 == 0)
	{
		return (NULL);
	}
	else if (len1 == 0 && len2 > 0)
	{
		fin = (char *)malloc((len2 + 1) * sizeof(char));
		return (fin);
	}
	else if (len1 > 0 && len2 == 0)
	{
		fin = (char *)malloc((len1 + 1) * sizeof(char));
		return (fin);
	} else
	fin = (char *)malloc(((len1 + len2) + 2) * sizeof(char));

	return (fin);
}
