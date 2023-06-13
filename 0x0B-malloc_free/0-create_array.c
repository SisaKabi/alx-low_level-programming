#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * create_array - create an array and initializes it with a char
 * @size: the size of the array
 * @c: the character to initialize
 *
 * Return: NULL on failure. pointer if success
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	s = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	if (s != NULL)
	{
		return (s);
	}
	if (s == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
		return ((char *)1);
	}
	return (0);
}
