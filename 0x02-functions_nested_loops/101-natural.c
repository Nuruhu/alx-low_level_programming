#include <stdio.h>
/**
 * main - computes and prints the sum of all the
 * multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int add = 0;

	for (; i < 1024; ++i)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			add += i;
		}
	}
	printf("%d\n", add);
	return (0);
}
