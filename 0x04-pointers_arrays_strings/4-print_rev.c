#include "holberton.h"

/**
* print_rev - A function that prints a string, in reverse, followed \n.
* @s: string.
*
* Return: void.
*/
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for ( ; len - 1 >= 0; len--)
	{
		_putchar(s[len - 1]);
	}
	_putchar('\n');
}
