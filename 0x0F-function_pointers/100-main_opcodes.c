#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function.
 * @argc: number of arguments received.
 * @argv: array of arguments received.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int n_bytes = 0;
	int i;
	void *hack_main_pointer = NULL;
	char *final_pointer = NULL;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	hack_main_pointer = main;
	final_pointer = hack_main_pointer;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", final_pointer[i] & 0xFF);
		if (i < n_bytes - 1)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
