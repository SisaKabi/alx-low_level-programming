#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - uses malloc to allocate memory and 
 * checks the return automatically
 * @b: the size of memory to be allocated
 *
 * Return: Implicit
 */
void *malloc_checked(unsigned int b)
{
	void  *hold;

	hold = malloc(b);

	if (hold == NULL)
	{
		exit (98);
	}
	return (hold);
}
