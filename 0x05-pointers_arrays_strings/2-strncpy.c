#include "holberton.h"
#include <stdio.h>

/**
* *_strncpy - function that copies a string..
* @dest: saves string1.
* @src: saves string2.
* @n: entry.
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int string1 = 0;
	int string2 = 0;

	for (string1 = 0; dest[string1] != '\0'; string1++)
	{
	}
	for (string2 = 0; src[string2] != '\0' && string2 < n ; string2++)
	{
		dest[string1 + string2] = src[string2];
	}
	return (dest);
}
