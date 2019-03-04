#include <stdio.h>

/**
* main - Program that prints the number of arguments passed into it.
* @argc: Number of command line arguments.
* @argv: Array containing the program command line arguments.
*
* Return: 0.
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	if (*argv[0] == 'a')
		return (0);
	return (0);
}

