#include <stdio.h>
/**
 * main - print all single digits
 *
 * Return: Always (success)
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
		putchar((y % 10) + '0');
	putchar('\n');
	return (0);
}
