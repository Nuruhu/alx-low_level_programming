#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that duplicate string
 * @str: a string pointer to char
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == 0)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}
	*(ptr + i) = '\0';
	return (ptr);
}
