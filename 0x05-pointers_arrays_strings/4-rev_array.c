#include "holberton.h"
#include <stdio.h>

/**
* reverse_array - function that reverse an array of integers.
* @a: array.
* @n: size of the array.
*
* Return: void.
*/
void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = 0; index < n / 2; index++)
	{
		tmp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = tmp;
	}
}
