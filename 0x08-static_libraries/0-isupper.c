#include "holberton.h"
/**
* _isupper - function that checks for uppercase character.
* @c: Entry of the character to check.
*
* Return: On success 1.
* On error, 0.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
