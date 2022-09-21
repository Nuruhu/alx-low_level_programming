#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string
 */
char *cap_string(char *s)
{
	int i, j;
	int cp = 32;
	int sp[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - cp;
		}
		cp = 0;
		for (j = 0; j <= 12; j++)
		{
			if (s[i] == sp[j])
			{
				j = 12;
				cp = 32;
			}
		}
	}
	return (s);
}

