#include "holberton.h"

/**
* *_memcpy - A function that copies memory area.
* @dest: destination.
* @src: source to copy.
* @n: the area to copy.
*
* Return: char.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
		dest[counter] = src[counter];
	for ( ; counter < n; counter++)
		dest[counter] = '\0';
	return (dest);
}
