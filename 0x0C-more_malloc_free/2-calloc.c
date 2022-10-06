#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function allocates memory for an array of nmemb
 * @nmemb: variable name of the array
 * @size: size of array
 *
 * Return: pointer to the allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, n = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	ptr = malloc(n);

	if (ptr == NULL)
		return (NULL);

	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
