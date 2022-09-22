#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * @n1: input 1 to be added
 * @n2: input 2 to be added
 * @r: buffer to stoter the result
 * @size_r: buffer size
 *
 * Return:  the function must return 0
 * if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int n1_ln = 0;
	int n2_ln = 0;

	for (i = 0; *(n1 + i); i++)
	{
		n1_ln++;
	}
	for (i = 0; *(n2 + i); i++)
	{
		n2_ln++;
	}
	if (size_r <= n1_ln + 1 || size_r <= n2_ln + 1)
		return (0);
	n1 += n1_ln - 1;
	n2 += n2_ln - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r));
}
