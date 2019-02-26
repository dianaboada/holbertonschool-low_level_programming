#include "holberton.h"

/**
* set_string - Function that sets the value of a pointer to a char.
* @s: string.
* @to: destination.
*
* Return: void.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
