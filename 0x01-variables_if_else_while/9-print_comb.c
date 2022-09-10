#include <stdio.h>
/**
 * main - print all possible combination of single digits
 *
 * Return: Always zero
 */
int main(void)
{
	int i = 0;

	do {
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
		i++;
	} while (i <= 9);
	putchar('\n');
	return (0);
}
