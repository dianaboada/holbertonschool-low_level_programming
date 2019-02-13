#include "holberton.h"

/**
* print_last_digit - check the code for Holberton School students.
*
* @lastdigit: prints the last digit of a number.
*
* Return: Always 0.
*/
int print_last_digit(int lastdigit)
{
	lastdigit = lastdigit % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}

	_putchar(lastdigit + '0');
	return (lastdigit);
}

