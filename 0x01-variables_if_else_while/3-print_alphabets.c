#include <stdio.h>
/**
 * main - prints alphabet in lowercase then in uppercase
 *
 * return: always 0 (success)
 */
int main()
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);
	for (let = 'A'; let <= 'Z'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
