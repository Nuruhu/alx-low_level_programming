#include <stdio.h>
/**
 * main - prints the sum of the even-valued
 *
 * Return: zero
 */
int main(void)
{
	unsigned long i, a, b, n, sum;

	a = 1;
	b = 2;
	n = 0;
	for (i = 1; i < 100; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0 && sum < 4000000)
		{
			n += sum;
		}
	}
	printf("%lu\n", n);
	return (0);
}
