#include <stdio.h>

/**
 * main - prints the alphabet to the stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	int inc;

	alpha = 'a';
	inc = 0;

	while (inc <= 9)
	{
		putchar(48 + inc);
		inc++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
