#include "holberton.h"

/**
* longitud - Function that returns the size of string.
* @size: iterator in the size.
*
* Return: int.
*/


int longitud(char *size)
{
	int i;

	for (i = 0; size[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
* string_nconcat - Function that concatenates two strings.
* @s1: String1.
* @s2: String2 conditioned by n.
* @n: variable size of s2.
*
* Return: char.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int long_source;
	unsigned int long_dest;
	char *pointer;
	unsigned int index;

	long_source = longitud(s1);
	long_dest = longitud(s2);
	if (n >= long_dest)
	{
		n = long_dest;
	}
	pointer = malloc(sizeof(char) * (long_source + n + 1));
	if (pointer == NULL)
	{
		/*free(pointer);*/
		return (NULL);
	}
	for (index = 0; index < long_source + n; index++)
	{
		if (index < long_source)
		{
			pointer[index] = s1[index];
		}
		else
		{
			pointer[index] = s2[index - long_source];
		}
	}
	pointer[index] = '\0';
	return (pointer);
}
