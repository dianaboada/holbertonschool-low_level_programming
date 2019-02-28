#include "holberton.h"

/**
* squareroot_recursion - Function returns the natural square root of a number.
* @num: Integer. Base of the root.
* @root: Integer, it goes until 0.
*
* Return: Int.
*/
int squareroot_recursion(int num, int root)
{
	if (num == root)
		return (-1);
	if (root * root == num)
		return (root);
	return (squareroot_recursion(num, root + 1));
}

/**
* _sqrt_recursion - Function that returns the natural square root of a number.
* @n: Integer.
*
* Return: Int.
*/
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);

	return (squareroot_recursion(n, 1));
}

