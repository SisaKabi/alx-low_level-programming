#include "main.h"

/**
 * is_prime_number - tests if the number is a prime
 * @n: number to be evaluated
 *
 * Return: 0 if not a prime, 1 if a prime
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	} else if (n <= 0)
	{
		return (0);
	} else if (n % 2 == 0 && n != 2)
	{
		return (0);
	} else if (n % 3 == 0 && n != 3)
	{
		return (0);
	} else if (n % 5 == 0 && n != 5)
	{
		return (0);
	} else
		return (1);
}
