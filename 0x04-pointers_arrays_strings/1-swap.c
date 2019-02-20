#include "holberton.h"

/**
* swap_int - A function that swaps the values of two integers.
* @a: integer.
* @b: integer2.
*
* Return: Void.
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
