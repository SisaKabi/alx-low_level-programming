#include "main.h"

/**
 * main - prints the text to the stdout
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char c[9] = "_putchar";
	int b;

	b = 0;

	while (c != '\0')
	{
		_putchar(c[b]);
		b++;
	}
	return (0);
}
