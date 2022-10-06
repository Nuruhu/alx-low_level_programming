#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a fuction that allocate memory
 * @b: the number of bytes to be allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
