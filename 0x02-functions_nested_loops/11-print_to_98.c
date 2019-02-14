#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - check the code for Holberton School students.
*
* @n: prints all natural numbers from n to 98.
*
* Return: Always 0.
*/
void print_to_98(int n)
{
	int natural_num = n;

	if (natural_num < 98)
	{
		for (natural_num = n ; natural_num <= 98 ; natural_num++)
		{
			if (natural_num != 98)
				printf("%d, ", natural_num);
			else
				printf("%d", natural_num);
		}
	}
	else
	{
		for (natural_num = n ; natural_num >= 98 ; natural_num--)
		{
			if (natural_num == 98)
				printf("%d", natural_num);
			else
			{
				printf("%d, ", natural_num);
			}
		}
	}
	printf("\n");
}

