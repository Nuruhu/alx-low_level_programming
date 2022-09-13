#include "main.h"
/**
 * main - prints alphabet in lowercase
 *
 * Return: always zero
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z')
		_putchar(let);
	_putchar('\n');
}
