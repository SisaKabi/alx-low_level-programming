#include "main.h"

/**
 * _isdigit - tests if the character is a digit
 * @c: character to be tested
 *
 * Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
