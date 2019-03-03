#include "holberton.h"

/**
* _strspn - Function that gets the length of a prefix substring.
* @s: string.
* @accept: substring.
*
* Return: unsigned int.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index = 0;
	unsigned int index2 = 0;
	unsigned int aux = 0;
	unsigned int count = 0;

	while (s[index] != '\0')
	{
		while (accept[index2] != '\0')
		{
			if (s[index] == accept[index2])
			{
				aux = aux + 1;
			}
			index2++;
		}
		if (count == aux)
		{
			break;
		}
		else
		{
			count = aux;
		}
		index2 = 0;
		index++;
	}
	return (aux);
}
