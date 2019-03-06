#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - Function returns a pointer to a new string.
* @str: string.
*
* Return: array.
*/
char *_strdup(char *str)
{
	int size;
	char *cpy_array;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0' ; size++)
	{

	}
	cpy_array = malloc(sizeof(char) * size);
	if (cpy_array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		cpy_array[index] = str[index];
	}
	return (cpy_array);
}
