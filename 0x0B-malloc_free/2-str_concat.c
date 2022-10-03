#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function that concatinate two string
 * @s1: input string 1
 * @s2: input string 2
 *
 * Return: the new pointer ptr
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	char *ptr = NULL;
	char *Ss1 = s1;
	char *Ss2 = s2;

	if (Ss1 == NULL)
		Ss1 = "";
	if (Ss2 == NULL)
		Ss2 = "";
	ptr = Ss1;
	while (*ptr++)
		i++;
	ptr = Ss2;
	while (*ptr++)
		i++;
	ptr = (char*)malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*Ss1)
	{
		ptr[i++] = *Ss1++;
	}
	while (*Ss2)
	{
		ptr[i++] = *Ss2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
