#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - Function that returns a pointer to a matrix array of integers.
* @width: rows.
* @height: columns.
*
* Return: int.
*/
int **alloc_grid(int width, int height)
{
	int **pointer_matrix;
	int rows;
	int columns;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	pointer_matrix = malloc(sizeof(int) * width * height);
	for (rows = 0; rows < height ; rows++)
	{
		for (columns = 0; columns < width; columns++)
		{
			pointer_matrix[rows][columns] = 0;
		}
	}
	return (pointer_matrix);
}
