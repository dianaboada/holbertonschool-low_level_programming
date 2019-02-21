#include "holberton.h"

/**
* puts2 - A function that prints one char out of 2 of a string, \n.
* @str: String.
*
* Return: void.
*/
void puts2(char *str)
{
	int position = 0;

	while (str[position] != '\0')
	{
		if (position % 2 == 0)
			_putchar(str[position]);
		position++;
	}

	_putchar('\n');
}
