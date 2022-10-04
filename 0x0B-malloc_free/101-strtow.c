#include <stdlib.h>
#include "main.h"
/**
 * clear_memory - a function that clear memory
 * when garbage value is available
 * @s: string input
 *
 * Return: nothing
 */
void clear_memory(char *s[])
{
	int i;

	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}
	free(s);
}
/**
 * count_word - a function that count word
 * @s: input string to be counted
 *
 * Return: counted result
 */
int count_word(char s[])
{
	int i, cw = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != ' ')
		{
			cw++;
			while (s[i] != ' ' && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				i--;
		}
	}
	return (cw);
}
/**
 * strtow - a function that split strings in to words
 * @str: input string to be splitted
 *
 * Return: pointer to the new split words
 */
char **strtow(char *str)
{
	int i, j = 0;
	int spw_len, spw_size, row = 0, columen;
	char **ptr = NULL;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	spw_len = count_word(str);
	if (!spw_len)
		return (NULL);
	ptr = malloc(sizeof(char *) * (spw_len + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[row] = NULL;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		j = i;
		while (str[j] != '\0' && str[j] != ' ')
			j++;
		spw_size = j - i;
		ptr[row] = malloc((spw_size + 1) * sizeof(char));
		if (ptr[row] == NULL)
		{
			clear_memory(ptr);
			return (NULL);
		}
		for (columen = 0; str[i] && str[i] != ' '; i++, columen++)
			ptr[row][columen] = str[i];
		ptr[row][columen] = '\0';
		if (!str[i])
			i--;
		row++;
	}
	return (ptr);
}
