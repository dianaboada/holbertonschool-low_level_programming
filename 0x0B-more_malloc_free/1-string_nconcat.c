#include "holberton.h"

/**
* string_nconcat - Function that concatenates two strings.
* @*s1: String1.
* @*s2: String2 conditioned by n.
* @n: variable size of s2.
*
* Return: char.
*/


int longitud(char *size)
{
	int i;

	for (size = 0; size[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
* string_nconcat - Function that concatenates two strings.
* @*s1: String1.
* @*s2: String2 conditioned by n.
* @n: variable size of s2.
*
* Return: char.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int source;
	unsigned int dest;
	char *pointer;
	unsigned int index;
	
	source = longitud(s1);
	dest = longitud(s2);
	if (n >= dest)
	{
		n = dest;
	}
	pointer = malloc(sizeof(char) * (source + n + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < source; index++)
	{
		pointer[index] = s1[index];
	}
	for (; index <= source + n + 1; index++)
	{
		pointer[index] = s2[index - source];
	}
	return (pointer);
}
