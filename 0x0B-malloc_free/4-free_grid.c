#include <stdlib.h>
#include "main.h"
/**
 * free_grid - make malloc free
 * @grid: pointer to the array of columen
 * @height: pointer to array of row
 *
 * Return: zero (success)
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
