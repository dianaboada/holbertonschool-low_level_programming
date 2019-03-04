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
int main(int argc, char *argv[])
{
	int sum = 0;
	int counter;
	int counter1;
	int numero;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (counter = 1; counter < argc; counter++)
	{
		for (counter1 = 0; argv[counter][counter1]; counter1++)
		{
			if (isdigit(argv[counter][counter1]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		numero = atoi(argv[counter]);
		sum = sum + numero;
	}
	printf("%d\n", sum);
	return (0);
}
