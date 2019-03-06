#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - Function that creates an array of chars.
* @size: size of the array.
* @c: The character to include in every index of the array.
*
* Return: array.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return ('\0');
	}
	array = malloc(sizeof(char) * size);
	for (index = 0; index < size ; index++)
	{
		array[index] = c;
	}
	return (array);
}
