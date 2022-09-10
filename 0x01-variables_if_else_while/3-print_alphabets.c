#include <stdio.h>
/**
 * @let: letter that will display for the output
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
