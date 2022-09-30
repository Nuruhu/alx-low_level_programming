#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero (success)
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
