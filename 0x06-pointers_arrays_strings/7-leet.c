#include "main.h"
/**
 * leet - encodes a string
 * @s: input
 *
 * Return: decoded value
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aAeEoOtTlL";
	char n[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
