#include "holberton.h"

/**
* *_strpbrk - Function that searches a string for any of a set of bytes.
* @s: string.
* @accept: substring.
*
* Return: char.
*/
char *_strpbrk(char *s, char *accept)
{
	int index_s;
	int index_accept;
	int index_equal = 0;
	int flag = 0;

	for (index_s = 0; s[index_s] != '\0'; index_s++)
	{
		for (index_accept = 0; accept[index_accept] != '\0'; index_accept++)
		{
			if (s[index_s] == accept[index_accept])
			{
				index_equal = index_s;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag != 1)
		return ('\0');
	else
		return (&s[index_equal]);
}
