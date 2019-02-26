#include "holberton.h"

/**
* print_chessboard - Function that prints the chessboard.
* @a: Array.
*
* Return: void.
*/
void print_chessboard(char (*a)[8])
{
	int i_rows;
	int i_columns;

	for (i_rows = 0; i_rows < 8; i_rows++)
	{
		for (i_columns = 0; i_columns < 8; i_columns++)
		{
			_putchar(a[i_rows][i_columns]);
		}
	_putchar('\n');
	}
}
