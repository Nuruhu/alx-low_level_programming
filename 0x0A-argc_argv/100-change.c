#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * convCoin - convert input argument to coin
 * @c: argument to converted
 *
 * Return: converted argument
 */
int convCoin(int c)
{
	int i = 0;

	while (c != 0)
	{
		if (c % 10 == 9 || c % 10 == 7)
			c = c - 2;
		else if (c % 25 == 0)
			c = c - 25;
		else if (c % 10 == 0)
			c = c - 10;
		else if (c % 5 == 0)
			c = c - 5;
		else if (c % 2 == 0)
		{
			if (c % 10 == 6)
				c = c - 1;
			else
				c = c - 2;
		}
		else
			c = c - 1;
		i++;
	}
	return (i);
}
/**
 * main - print the minimum number of coin
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero (success)
 */
int main(int argc, char **argv)
{
	int x, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
		printf("0\n");
	else
	{
		coin = convCoin(x);
		printf("%d\n", coin);
	}
	return (0);
}
