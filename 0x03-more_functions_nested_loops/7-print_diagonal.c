#include "holberton.h"

/**
* print_diagonal - A function that draws a diagonal line on the terminal.
* @n: is the number of times the character _ should be printed.
*
* Return: void.
*/
void print_diagonal(int n)
{
	int rows;
	int columns;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (rows = 1 ; rows <= n ; rows++)
	{
		for (columns = 0 ; columns < rows - 1 ; columns++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

