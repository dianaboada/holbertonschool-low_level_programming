#include "holberton.h"

/**
* _calloc - Function that allocates memory for an array, using malloc.
* @nmemb: elements of size bytes.
* @size: size bytes.
*
* Return: void.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(size * nmemb);
		if (pointer == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < (size * nmemb); i++)
	{
		pointer[i] = 0;
	}
	return (pointer);
}
