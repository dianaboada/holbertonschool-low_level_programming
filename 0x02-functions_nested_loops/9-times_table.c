#include "holberton.h"

/**
* times_table - check the code for Holberton School students.
*
* Return: Always 0.
*/
void times_table(void)
{
	int x, y, multiple;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			multiple = x * y;
			_putchar(multiple / 10 + '0');
			_putchar(multiple % 10 + '0');

			if (y != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
