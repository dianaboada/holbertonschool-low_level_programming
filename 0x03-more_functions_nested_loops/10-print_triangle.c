#include "holberton.h"

/**
* print_triangle -A function that prints a triangle, followed by a new line.
* @size: is the size of the triangle
*
* Return: Void..
*/
void print_triangle(int size)
{
	int hash;
	int spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (spaces = size ; spaces >= 1 ; spaces--)
	{
		for (hash = 1 ; hash <= size ; hash++)
		{
			if (hash < spaces)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

