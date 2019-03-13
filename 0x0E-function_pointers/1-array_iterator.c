#include "function_pointers.h"

/**
* array_iterator - Function that exe a function on each element of an array.
* @array: Array of integers.
* @size: size of the array.
* @action: function.
* Return: Void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterator;

	if (array != NULL && action != NULL)
	{
	for (iterator = 0; iterator < size; iterator++)
	{
		action(array[iterator]);
	}
	}
}
