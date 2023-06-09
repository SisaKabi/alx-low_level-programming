#include <stdio.h>

/**
 * main - prints the name of the program to stdout
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused))char **argv)
{
	int b;

	b = argc - 1;

	printf("%d\n", b);
	return (0);
}
