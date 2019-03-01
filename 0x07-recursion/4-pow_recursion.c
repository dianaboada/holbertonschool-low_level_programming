#include "holberton.h"

/**
* _pow_recursion - Function that returns the value of x_base power_y.
* @x: Integer, base.
* @y: Integer, power.
*
* Return: Int.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
