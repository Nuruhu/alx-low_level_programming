#include <stdio.h>
/**
 * main - prints all possible combination of three digits
 *
 * Return: Always zero (success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 9; y++)
		{
			for (z = 0; z < 10; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');
				if (x == 7 && y == 8 && z == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar('\n');
		return (0);
}
