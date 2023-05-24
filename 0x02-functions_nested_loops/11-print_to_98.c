#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: initial number to print
 *
 * Return: implicit return
 */
void print_to_98(int n)
{
	int b;

	b = n;

	if (b < 98)
	{
		while (b < 98)
		{
			printf("%d, ", b);
			b++;
			if (b == 98)
			{
				printf("%d", b);
				printf("\n");
			}
		}
	} else if (b == 98)
	{
		printf("%d", b);
		printf("\n");
	} else if (b >= 98)
	{
		while (b > 98)
		{
			printf("%d, ", b);
			b--;
			if (b == 98)
			{
				printf("%d", b);
				printf("\n");
			}
		}
	}
}
