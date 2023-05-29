#include "main.h"

/**
 * swap_int - swaps the values
 * @a: first value
 * @b: second value
 *
 * Return: Implicit
 */
void swap_int(int *a, int *b)
{
	int pB;

	pB = *a;
	*a = *b;
	*b = pB;
}
