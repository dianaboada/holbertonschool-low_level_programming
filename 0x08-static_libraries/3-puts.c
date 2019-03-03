#include "holberton.h"

/**
* _puts - A function that prints a string, followed by a new line.
* @str: string.
*
* Return: void.
*/
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
	_putchar(str[string]);
	}
	_putchar('\n');
}
