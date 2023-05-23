#include "main.h"

/**
 * _islower - tests if the character is lowercase
 * @c: character to be tested
 *
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
