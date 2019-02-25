#include "holberton.h"

/**
* *_memset - function that fills memory with a constant byte.
* @s: Array.
* @b: cons to add.
* @n: times to add the cons.
*
* Return: 0.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		*(s + counter) = b;
	}
	return (s);
}
