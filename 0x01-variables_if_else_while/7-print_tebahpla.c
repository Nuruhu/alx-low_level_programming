#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse order
 *
 * Return: Always (success)
 */
int main(void)
{
	char nunu;

	for (nunu = 'z'; nunu >= 'a'; nunu--)
		putchar(nunu);
	putchar('\n');
	return (0);
}
