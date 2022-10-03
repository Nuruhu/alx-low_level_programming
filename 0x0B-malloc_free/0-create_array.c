#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that create array of char
 * @size: calculate size of char c
 * @c: input char
 *
 * Return: pointer ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(c) * size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
