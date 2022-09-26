#include "main.h"
/**
 * _strspn - gets the length of the prefix substring
 * @s: source string
 * @accept: accepted string
 *
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, st = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				st++;
			}
			j++;
		}
		i++;
	}
	return (st);
}
	

