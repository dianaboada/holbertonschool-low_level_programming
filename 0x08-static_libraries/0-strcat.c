#include "holberton.h"

/**
* _strcat - function that concatenates two strings.
* @dest: saves string1.
* @src: saves string2.
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int string1 = 0;
	int string2 = 0;

	for (string1 = 0; dest[string1] != '\0'; string1++)
	{
	}
	for (string2 = 0; src[string2] != '\0'; string2++)
	{
		dest[string1 + string2] = src[string2];
	}
	dest[string2 + string1] = src[string2];
	return (dest);

}
