#include "holberton.h"

/**
* print_most_numbers - function that prints numbers 0 to 9 except 2 and 4, \n.
*
* Return: void.
*/
void print_most_numbers(void)
{
	int numbers;

	for (numbers = '0' ; numbers <= '9'; numbers++)
	{
		if (numbers != '2' && numbers != '4')
			_putchar (numbers);
	}
	_putchar ('\n');
}
