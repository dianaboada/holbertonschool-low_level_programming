#include "holberton.h"

/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14, \n.
*
* Return: void.
*/
void more_numbers(void)
{
	int fourteen_num;
	int tentimes = 1;

	while (tentimes <= 10)
	{
		tentimes++;

	for (fourteen_num = 0; fourteen_num <= 14 ; fourteen_num++)
	{
		if (fourteen_num > 9)
			_putchar (fourteen_num / 10 + '0');
			_putchar (fourteen_num % 10 + '0');
	}

	_putchar ('\n');
	}
}
