#include "holberton.h"
/**
* _isupper - function that checks for a digit (0 through 9).
* @c: Entry of the character to check.
*
* Return: On success 1.
* On error, 0.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
