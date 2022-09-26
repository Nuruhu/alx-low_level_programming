#include "main.h"
/**
 * _memcpy - is a return function that copy memory area
 * @dest: memory area copy to
 * @src: memory area copy from
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
