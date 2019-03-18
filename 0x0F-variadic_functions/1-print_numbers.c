#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator: the string printed between numbers.
* @n: number of integers passed to the fuction.
*
* Return: Void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list someArgPointer;
	unsigned int i;

	va_start(someArgPointer, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(someArgPointer, unsigned int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(someArgPointer);
}
