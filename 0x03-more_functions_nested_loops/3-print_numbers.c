#include "holberton.h"
/**
* print_numbers - function that prints the numbers from 0 to 9 followed by \n.
*
* Return: void.
*/

void print_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		_putchar (numbers);
	}
	_putchar ('\n');
}
