#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - Function that returns the sum of a and b.
* @a: variable.
* @b: variable.
* Return: int, sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Function that returns the difference of a and b.
* @a: variable.
* @b: variable.
* Return: int, difference of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Function that returns the product of a and b.
* @a: variable.
* @b: variable.
* Return: int, product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Function that returns result of the division of a by b..
* @a: variable.
* @b: variable.
* Return: int, division of a and b.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Function that returns the remainder of a and b.
* @a: variable.
* @b: variable.
* Return: int, remainder of a and b.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
