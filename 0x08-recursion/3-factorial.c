#include "main.h"

/**
 * factorial - calculates the factorial of the number
 * @n: number to be evaluated
 *
 * Return: 1 if n = 0.
 * -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
