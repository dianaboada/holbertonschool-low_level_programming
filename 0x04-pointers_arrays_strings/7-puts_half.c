#include "holberton.h"

/**
* puts_half - A function that prints half of a string, followed by a new line.
* @str: String.
*
* Return: void.
*/
void puts_half(char *str)
{
	int counter = 0;
	int half;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
	}
	half = counter / 2;
	if (counter % 2 != 0)
		half = (counter + 1) / 2;
	else
		half = counter / 2;
	for (counter = half ; str[counter] != '\0'; counter++)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
