#include <stdio.h>
#include "main.h"

/**
 * print_array - prints values in an array to nth value
 * @a: array of values
 * @n: number of values to be printed
 *
 * Return: Implicit
 */
void print_array(int *a, int n)
{
	int m;

	m = 0;

	while (m < n)
	{
		printf("%d", a[m]);
		if (m != (n - 1))
		{
			printf(", ");
		}else if (m == (n - 1))
		{
			printf("\n");
		}
		m++;
	}
}
