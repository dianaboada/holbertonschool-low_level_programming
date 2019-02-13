#include "holberton.h"

/**
* _abs - check the code for Holberton School students.
*
* @absvalue: a function that computes the absolute value of an integer.
*
* Return: Always 0.
*/
int _abs(int absvalue)
{
	if (absvalue > 0)
		return (absvalue);

	if (absvalue < 0)
	{
		absvalue = absvalue * -1;
		return (absvalue);
	}
return (0);
}

