#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: copy to
 * @src: copy from
 * @n: input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
