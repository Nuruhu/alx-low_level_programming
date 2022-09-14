#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	unsigned long int a, b, i, sum;

	a = 1;
	b = 2;
	for (i = 1; i <= 98; i++)
	{
		printf("%lu", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i == 98)
			continue;
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
