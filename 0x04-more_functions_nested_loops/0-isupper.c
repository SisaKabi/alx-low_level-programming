#include "main.h"

/**
 * _isupper - tests if the character is uppercase
 * @c: character to be tested
 *
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
