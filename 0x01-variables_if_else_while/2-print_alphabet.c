#include <stdio.h>
/**
 * main - prints all letters in lowercase alphabetical order
 *
 * return: always success
 */
int main(void)
{
	char let;
	for (let = 'a'; let<='z'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
