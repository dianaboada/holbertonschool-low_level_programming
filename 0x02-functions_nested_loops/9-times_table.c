#include "holberton.h"

/**
* times_table - check the code for Holberton School students.
*
* Return: Always 0.
*/
void times_table(void)
{
	int row, column, multiples;

	for (row = 0 ; row <= 9 ; row++)
	{
		for (column = 0 ; column <= 9 ; column++)
		{
			multiples = row * column;

			if (multiples < 10)
			{
				if (column != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(multiples + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multiples / 10) + '0');
				_putchar((multiples % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

