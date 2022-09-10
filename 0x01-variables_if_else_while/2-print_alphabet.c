#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always (success)
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
