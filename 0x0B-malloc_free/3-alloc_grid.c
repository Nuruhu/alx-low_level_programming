#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that return pointer to
 * 2d array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **matrix, row, column;

	if (width < 1 || height < 1)
		return (NULL);

	matrix = (int **) malloc(sizeof(int *) * height);

	if (!matrix)
		return (NULL);

	for (row = 0; row < height; ++row)
	{
		matrix[row] = (int *) malloc(sizeof(int) * width);

		if (!matrix[row])
		{
			while (--row > -1)
				free(matrix[row]);
			free(matrix);
			return (NULL);
		}

		for (column = 0; column < width; ++column)
			matrix[row][column] = 0;
	}

	return (matrix);
}
