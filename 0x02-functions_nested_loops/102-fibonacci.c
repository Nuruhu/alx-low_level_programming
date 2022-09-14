#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	int a, b, i, sum;
	a = 0;
	b = 1;

	for (i = 1; i <= 50; i++)
	{
		printf("%d", a);
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
