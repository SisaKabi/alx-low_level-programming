#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program to stdout
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int b;
	int c;
	int d;

	if (argc < 3)
	{
		printf("Error\n");
	} else
	{
		b = atoi(argv[1]);
		c = atoi(argv[2]);
		d = b * c;
		printf("%d\n", d);
	}

	return (0);
}
