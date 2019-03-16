#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Variadic function that produces output according to a format.
* @n: total number variable arguments passed.
*
* Return: int, sum.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
