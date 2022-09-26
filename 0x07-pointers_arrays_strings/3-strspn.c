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
	unsigned int i, j, st;

	for (i = 0; *(s + i + 1); i++)
	{
		st = 1;
		for (j = 0; *(accept + j + 1); j++)
		{
			if (*(s + i) == (accept + j))
			{
				st = 0;
				break;
			}
		}
		if (st == 1)
			break;
	}
	return (i);
}
	

