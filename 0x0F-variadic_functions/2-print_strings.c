#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings, followed by a new line.
 * separator: string to be printed between the strings.
 * n: number of strings passed to the function.
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *String_pointer;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		String_pointer =  va_arg(strings, char *);

		if (String_pointer != NULL)
			printf("%s", String_pointer);
		else
			printf("(nil)");
	if (i < n - 1 && separator)
		printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
