#include <stdio.h>
/**
 * main - print all single digits
 *
 * return: always zero
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
		putchar((y % 10) + '0');
	putchar('\n');
	return (0);
}
