#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_op_func - Function that selects the correct function to perform the operation.
* @s: The operator.
* Return: int, the rigth fuction.
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
	return (NULL);
}
