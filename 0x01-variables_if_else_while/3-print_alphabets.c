#include <stdio.h>

/**
 * main - prints the alphabet to the stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	char upper;

	alpha = 'a';
	upper = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
