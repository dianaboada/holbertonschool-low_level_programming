#include "holberton.h"

/**
* malloc_checked - Function that allocates memory using malloc.
* @b: size of the array.
*
* Return: void.
*/
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
