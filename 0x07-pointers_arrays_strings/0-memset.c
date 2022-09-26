#include "main.h"
/**
 * _memset - function fills the n bytes of the memory
 * @s: a pointer to the memory area
 * @b: value set on memory
 * @n: number of bytes pointed by pointer
 *
 * Return: to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
