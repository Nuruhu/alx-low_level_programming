#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	unsigned long a, b, i, sum;

	a = 1;
	b = 1;
	for (i = 1; i <= 50; i++)
	{
		printf("%lu", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i == 50)
			continue;
		{
	         putchar(',');
                 putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
