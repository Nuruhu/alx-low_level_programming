#include <stdio.h>
/**
 * main - prints alphabet in lowercase then in uppercase
 *
 * Description: this program use for loop
 *
 * return: always 0 (success)
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);
	for (let = 'A'; let <= 'Z'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
