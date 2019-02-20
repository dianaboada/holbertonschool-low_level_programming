#include "holberton.h"

/**
* rev_string - A function that reverses a string.
* @s: string.
*
* Return: void.
*/
void rev_string(char *s)
{
	int a = 0;
	int b;
	int c;
	char d;
	int e = 0;

	while (s[a] != '\0')
	{
		a++;
	}
		c = a / 2;

	for (b = a - 1; b >= c; b--)
	{
		d = s[b];
		s[b] = s[e];
		s[e] = d;
		e++;
	}
}
