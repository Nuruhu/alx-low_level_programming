#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimun ranges of array
 * @max: maximum ranges of array
 *
 * Return: pointer to the allocated array
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
