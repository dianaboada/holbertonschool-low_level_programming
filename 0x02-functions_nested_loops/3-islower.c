#include "holberton.h"

/**
* _islower - check the code for Holberton School students.
*
*@c: check for lowercase character
*
* Return: Always 0.
*/
int _islower(int c)
{
	for ( ; c >= 97 && c <= 122 ; )
	{
		return (1);
	}
	return (0);
}

