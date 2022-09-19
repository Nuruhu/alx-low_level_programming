#include "main.h"
/**
 * puts_half - print half of string 
 * @str: string input
 */
void puts_half(char *str)
{
	int i, j, sl;

	while (*(str + j) != '\0')
	{
		++j;
	}
	sl = j / 2;
	for (i = 0; i < sl; i++)
	{
		if ((j % 2) == 0)
			_putchar(*(str + i + sl);
					else
					_putchar(*(str + 1 + i + sl);
						}
						_putchar('\n');
						}
