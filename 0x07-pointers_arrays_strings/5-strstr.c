#include "main.h"
/**
 * _strstr - function that locate substrings
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: substring or null if substring is not located
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
			break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
