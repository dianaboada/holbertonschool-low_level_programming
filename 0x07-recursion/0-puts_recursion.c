#include "holberton.h"

/**
* _puts_recursion - Function that prints a string, followed by a new line.
* @s: String to print
*
* Return: Void.
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (s[0] != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
