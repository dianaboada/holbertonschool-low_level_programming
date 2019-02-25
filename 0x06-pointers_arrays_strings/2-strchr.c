#include "holberton.h"

/**
* *_strchr - Function that locates a character in a string.
* @s: string.
* @c: character to locate.
*
* Return: char.
*/
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != c)
	{
		if (s[index] == '\0')
		{
		return (0);
		}
		index++;
	}
	return (&s[index]);
}
