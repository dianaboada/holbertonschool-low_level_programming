#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc == 4)
	{
		int num1;
		int num2;
		int operation;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operation = get_op_func(argv[2])(num1, num2);
		printf("%d\n", operation);
		return (0);
	}
	else
		return (-1);
	return (0);
}
