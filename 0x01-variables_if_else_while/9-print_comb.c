#include <stdio.h>
/**
 * main - print all possible combination of single digits
 *
 * return: always zero
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar((y % 10) + '0');
			if (y < 10)
				continue;
				putchar(',');
		putchar(' ');
	}
		putchar('\n');
		return (0);
}
