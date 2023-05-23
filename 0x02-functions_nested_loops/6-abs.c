#include "main.h"

/**
 * _abs - calculates the absolute value of int
 *@b: number to be evaluated
 *
 * Return: The absolute value
 */
int _abs(int b)
{
	int product;

	if (b < 0)
	{
		product = b * -1;
		return (product);
	}
	else if (b == 0)
	{
		return (0);
	}
	return (b);

}
