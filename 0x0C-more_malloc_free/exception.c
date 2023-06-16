#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * exceptions - handle exceptions for task 1
 * @len1: length of s1
 * @len2: length of s2
 * @n: number of characters in string 2 allowed
 *
 * Return: pointer with meemory
 */
char *exceptions(unsigned int len1, unsigned int len2, unsigned int n)
{
	char *hptr;

	if (len1 != 0 && len2 != 0 && len2 > n)
	{
		hptr = malloc(sizeof(char) * (len1 + n + 1));
	}
	else if (len1 == 0 && len2 != 0)
	{
		hptr = malloc(sizeof(char) * (n + 1));
	}
	else if (len1 != 0 && len2 == 0)
	{
		hptr = malloc(sizeof(char) * (len1 + 1));
	}
	else if (len1 != 0 && len2 != 0 && len2 < n)
	{
		hptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else if (len1 == 0 && len2 == 0)
	{
		return (NULL);
	}

	return (hptr);
}
