#include <stdio.h>
/**
 * main - print all possible combination of single digits
 *
 * Return: Always zero
 */
int main(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		putchar((t % 10) + '0');
		if (t == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

