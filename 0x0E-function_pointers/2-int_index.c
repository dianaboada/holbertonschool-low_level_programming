#include "function_pointers.h"

/**
* int_index - Function that searches for an integer.
* @array: array to iterate.
* @size: size of array.
* @cmp: function that returns an int.
*
* Return: int.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int iterator;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (iterator = 0; iterator < size; iterator++)
	{
		if (cmp(array[iterator]))
			return (iterator);
	}
	return (-1);
}
