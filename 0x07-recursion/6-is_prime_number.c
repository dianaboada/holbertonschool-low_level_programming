#include "holberton.h"

/**
* prime_recursion - Function returns 1 if n is a prime int, else return 0.
* @prime: Integer, it does not change.
* @divisor: Integer, it goes until 1.
*
* Return: Int.
*/
int prime_recursion(int prime, int divisor)
{
	if (divisor == 1)
		return (1);
	if (prime % divisor == 0)
		return (0);
	return (prime_recursion(prime, divisor - 1));
}

/**
* is_prime_number - Function returns 1 if n is a prime int, else return 0.
* @n: Integer.
*
* Return: Int.
*/
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_recursion(n, n - 1));
}

