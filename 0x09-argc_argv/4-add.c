#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Program that add positive integers.
* @argc: Number of command line arguments.
* @argv: Array containing the program command line arguments.
*
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int counter;
	int numero;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (counter = 1; counter < argc; counter++)
		{
			numero = atoi(argv[counter]);
			if (numero == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + numero;
			}
		}

		printf("%d\n", sum);
	}
	return (0);
}

