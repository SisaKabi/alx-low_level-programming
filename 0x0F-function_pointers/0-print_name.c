#include "function_pointers.h"

/**
 * print_name - prints the name to the stdout using the function pointer
 * @name: anme to be printed
 * @f: function pointer to use
 *
 * Return: Nothing.
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
