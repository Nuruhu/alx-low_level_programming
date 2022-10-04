#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments
 * of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: null
 */
char *argstostr(int ac, char **av)
{
	int i, j, x, y = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			y++;
	}
	y += ac;

	s = malloc(sizeof(char) * y + 1);
	x = 0;
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[x] = av[i][j];
			x++;
		}
		if (s[x] == '\0')
		{
			s[x++] = '\n';
		}
	}
	return (s);
}
