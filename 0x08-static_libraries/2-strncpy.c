#include "holberton.h"
#include <stdio.h>

/**
* *_strncpy - function that copies a string.
* @dest: saves string1.
* @src: saves string2.
* @n: entry.
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int iterator;

	for (iterator = 0; iterator < n && src[iterator] != '\0'; iterator++)
		dest[iterator] = src[iterator];
	for (; iterator < n; iterator++)
		dest[iterator] = '\0';
	return (dest);
}
