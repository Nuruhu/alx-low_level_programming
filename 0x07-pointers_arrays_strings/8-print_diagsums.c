#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: the matrix
 * @size:size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum = (i * size) + j;
			if (i == j)
				sum1 = sum1 + a[sum];
			if ((i + j) == (size - 1))
				sum2 = sum2 + a[sum];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
