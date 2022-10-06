#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function that concantenate two string
 * @s1: string input 1
 * @s2: string input 2
 * @n: number of bytes
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l, i;

	l = n;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	ptr = malloc(sizeof(char) * (l + 1));

	if (ptr == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		ptr[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptr[l++] = s2[i];

	ptr[l] = '\0';

	return (ptr);
}
