#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz
 * 5 multiples print Buzz
 * 3 & 5 multiples print FizzBuzz
 *
 * Return: zero
 */
int main(void)
{
	int i;
	char x[] = "Fizz";
		char y[] = "Buzz";
		char xy[] = "FizzBuzz"

			for (i = 1; i <= 100; i++)
			{
				if (i == 100)
					printf("%s", y);
				else if ((i % 3 == 0) && (i % 5 == 0))
					printf("%s", xy);
				else if (i % 3 == 0)
					printf("%s", x);
				else if (i % 5 == 0)
					printf("%s", y);
				else 
					printf("%d", i);
			}
		printf("\n");
		return (0);
}
