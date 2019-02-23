#include "holberton.h"
#include <stdio.h>

/**
* *string_toupper - Function that changes all lowercase to uppercase.
* @abc: entry character.
*
* Return: void.
*/
char *string_toupper(char *abc)
{
	int index;

	for (index = 0; abc[index] != '\0'; index++)
	{
		if (abc[index] > 96 && abc[index] < 123)
		{
			abc[index] = abc[index] - 32;
		}
	}
	return (abc);
}
