#include "main.h"
/**
 * rot13 - encodes a string using
 * rotate by 13 places
 * @n: pointer to string to be decoded
 *
 * Return: decoded value
 */
char *rot13(char *n)
{
	int i, j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dv[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (n[i] == l[j])
			{
				n[i] = dv[j];
				break;
			}
		}
	}
	return (n);
}
