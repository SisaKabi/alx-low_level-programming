#include <stdio.h>

/**
 * main - prints the alphabet to the stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'z';

	while (alpha >= 'a')
	{
	putchar(alpha);
	alpha--;
	}
	putchar('\n');
	return (0);
}
