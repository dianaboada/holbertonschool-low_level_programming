#include "holberton.h"

/**
* *_strncat - function that concatenates two strings.
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

	for (string2 = 0; src[string2] != '\0'; string2++)
	{
		if (string2 < n)
		{
			dest[string1 + string2] = src[string2];
		}
	}
	dest[string2 + n] = '\0';
	dest[string2 + string1] = src[string2];
	return (dest);
}
