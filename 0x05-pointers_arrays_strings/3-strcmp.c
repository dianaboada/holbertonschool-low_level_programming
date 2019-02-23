#include "holberton.h"
#include <stdio.h>

/**
* _strcmp - function that compares two strings.
* @s1: string1.
* @s2: string2.
*
* Return: 0.
*/
int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0'; index++)
	{
		if ((s1[index] - s2[index]) != 0)
			return ((s1[index] - s2[index]));
	}
	return (0);
}
