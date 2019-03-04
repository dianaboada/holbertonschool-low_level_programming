#include <stdio.h>

/**
* main - Program that prints all arguments it receives.
* @argc: Number of command line arguments.
* @argv: Array containing the program command line arguments.
*
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int index;

	if (argc > 0)
	{
		for (index = 0; index < argc; index++)
		{
			printf("%s\n", argv[index]);
		}
	}
	return (0);
}

