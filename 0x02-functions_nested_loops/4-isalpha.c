#include "holberton.h"

/**
* _isalpha - check the code for Holberton School students.
*
* @c: check for alphabetic characters is a letter, lowercase or uppercase.
*
* Return: Always 0.
*/
int _isalpha(int c)
{
	for ( ; ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ; )
	{
		return (1);
	}
	return (0);
}

