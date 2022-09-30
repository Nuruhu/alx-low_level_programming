#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * convCoin - convert user input argument to coin
 * @c: argument to be converted
 *
 * Return: converted argument
 */
int convCoin(int c)
{
	int i = 0;

	while (c != 0)
	{
		if (c % 10 == 9 || c % 10 == 7)
			c -= 2;
		else if (c % 25 == 0)
			c -= 25;
		else if (c % 10 == 0)
			c -= 10;
		else if (c % 5 == 0)
			c -= 5;
		else if (c % 2 == 0)
		{
			if (c % 10 == 6)
				c -= 1;
			else
				c -= 2;
		}
		else
			c -= 1;
		i++;
	}
	return (i);
}
/**
 * main - print the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero (success)
 */
int main(int argc, char *argv[])
{
	int x;
	int coin = 0;

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
