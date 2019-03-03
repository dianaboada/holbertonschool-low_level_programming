#include "holberton.h"

/**
* wildcmp - Function that compares two strings.
* @s1: String1.
* @s2: Strin2 that contains '*'.
*
* Return: 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2  && *s1 != '\0' && *s2 == '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
	}
	return (0);
}
