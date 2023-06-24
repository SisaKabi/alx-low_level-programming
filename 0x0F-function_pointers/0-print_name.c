#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name to the stdout using the function pointer
 * @name: anme to be printed
 * @f: function pointer to use
 *
 * Return: Nothing.
 */
void print_name(char *name, void(*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
	else if (name == NULL)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}
