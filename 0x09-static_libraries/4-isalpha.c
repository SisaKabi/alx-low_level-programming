#include "main.h"

/**
 * _isalpha - test if the character is alphabetical
 * @c: character to be tested
 *
 * Return: 1 if alphabetical , 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
