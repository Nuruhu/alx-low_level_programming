#include <stdio.h>
#include <stdlib.h>
/**
 * main - print its name
 * @argc: number of command line
 * @argv: argument vector
 *
 * Return: zero (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
