#include <stdio.h>

/**
 * main - prints the alphabet to the stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e')
		{
			alpha++;
		} else if (alpha == 'q')
		{
			alpha++;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
