#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all numbers in args
 * @n: first number
 *
 * Return: result or -1 error condition
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	unsigned int num;
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		result += num;
	}

	va_end(args);

	return (result);
}
