#include "holberton.h"
#include <math.h>

/**
* print_number - A function that prints an integer.
* @n: is the integer that program should print.
*
* Return: Void.
*/
void print_number(int n)
{
	int decimal;
	int times_digit;
	int expo;
	int i;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	decimal = n;
	times_digit = 0;

	while (decimal / 10 > 0)
	{
		times_digit++;
		decimal = decimal / 10;
	}

	expo = (int)pow(10, times_digit);

	for (i = 0; i <= times_digit; i++)
	{
		_putchar(n / expo + '0');
		n = n % expo;
		expo = expo / 10;
	}
}

