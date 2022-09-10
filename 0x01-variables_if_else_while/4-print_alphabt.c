#include <stdio.h>
/**
 * main - prints alphabet in lowercase except e and q
 *
 * return: always 0 is success
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'e' && let != 'q')
			putchar(let);
	}
	putchar(let);
	return (0);
}
