#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Program that multiplies 2 numbers.
* @argc: Number of command line arguments.
* @argv: Array containing the program command line arguments.
*
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int multiply;
	int mul1;
	int mul2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);

		multiply = mul1 * mul2;
		printf("%d\n", multiply);
	}
	return (0);
}

