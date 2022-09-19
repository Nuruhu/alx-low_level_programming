#include <stdio.h>
#include "main.h"
/**
 * print_array -  prints n elements of an array of integers
 * @a: array name
 * @n: number of element of an array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a++);
		if (i < n -1)
			printf(", ");
	}
	printf("\n");
}
