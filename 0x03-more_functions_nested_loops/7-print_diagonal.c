#include "holberton.h"

/**
* print_diagonal - A function that draws a diagonal line on the terminal.
* @n: is the number of times the character _ should be printed.
*
* Return: void.
*/
void print_diagonal(int n)
{
	int diagonal;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (diagonal = 1 ; diagonal <= n ; diagonal++)
	{
		for (spaces = 0 ; spaces < diagonal - 1 ; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

