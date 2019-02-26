#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - Function that prints sum of the 2 square_matrix diagonals.
* @a: Array.
* @size: matrix size.
*
* Return: void.
*/
void print_diagsums(int *a, int size)
{
	int i_diag1;
	int col_diag2 = size - 1;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i_diag1 = 0; i_diag1 < size; i_diag1++)
	{
		sum_diag1 = sum_diag1 + *(a + (size * i_diag1 + i_diag1));
	}
	for (i_diag1 = 0; i_diag1 < size ; i_diag1++, col_diag2--)
	{
		sum_diag2 = sum_diag2 + *(a + (size * i_diag1 + col_diag2));
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
