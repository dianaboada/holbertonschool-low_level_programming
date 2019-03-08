#include "holberton.h"

/**
* array_range - Function that creates an array of integers.
* @min: min value.
* @max: max value.
*
* Return: array of integers from min to max.
*/
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(max - min + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
