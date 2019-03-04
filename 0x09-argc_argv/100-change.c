#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* main - Program that add positive integers.
* @argc: Number of command line arguments.
* @argv: Array containing the program command line arguments.
*
* Return: 0.
*/
int main(void)
{
	return(0);
}
int change(int coins, int index, int value)
{
	int coins = [25, 10, 5, 2, 1];

	if (value > coins[index])
	{
		return (1 + change(coins, index, value - coins[index]));
	}
	else if (value == 0)
	{
		return (0);
	}
	else
	{
		return (change(coins, index + 1, value));
	}
}

