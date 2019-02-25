#include "holberton.h"

/**
* *_memset - function that fills memory with a constant byte.
* @s: character.
* @b: character.
* @n: integer.
*
* Return: 0.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		*s = b;
		s++;
	}
	return(s);
}
