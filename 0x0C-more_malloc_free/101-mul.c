#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * calculate_length - a function that calculate length
 * of a given string
 * @s: a pointer to char string
 *
 * Return: length of string
 */
int calculate_length(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
/**
 * array - function that create array
 * @size: size of array
 *
 * Return: pointer to created array
 */
char *array(int size)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		exit(98);
	for (i = 0; i < (size - 1); i++)
		ptr[i] = 'x';
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
/**
 * loop_aroundZero - loop around the number that
 * contain leading zeroes
 * @str: string input
 *
 * Return: string
 */
char *loop_aroundZero(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}
/**
 * convert_to_digit - convert a given character to an
 * equivalent integer
 * @c: input character to converted
 *
 * Return: converted value
 */
int convert_to_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	return (digit);
}
/**
 * multiplication - multiplies a string of number by a single digit
 * @res: result of multiplication
 * @m: string number
 * @digit: single digit
 * @zero: string input of zero value
 *
 * Return: the result
 */
void multiplication(char *res, char *m, int digit, int zero)
{
	int ml, n1, n2 = 0;

	ml = calculate_length(m) - 1;
	m += ml;
	while (*res)
	{
		*res = 'x';
		res++;
	}
	res--;
	while (zero--)
	{
		*res = '0';
		res--;
	}
	for (; ml >= 0; ml--, m--, res--)
	{
		if (*m < '0' || *m > '9')
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}
		n1 = (*m - '0') * digit;
		n1 += n2;
		*res = (n1 % 10) + '0';
		n2 = n1 / 10;
	}
	if (n2)
		*res = (n2 % 10) + '0';
}
/**
 * addition - a function that addnumbers
 * @fr: final result
 * @nr: next result
 * @nl: next string length
 *
 * Return: the result
 */
void addition(char *fr, char *nr, int nl)
{
	int n1, n2 = 0;

	while (*(fr + 1))
		fr++;
	while (*(nr + 1))
		nr++;
	for (; *fr != 'x'; fr--)
	{
		n1 = (*fr - '0') + (*nr - '0');
		n1 += n2;
		*fr = (n1 % 10) + '0';
		n2 = n1 / 10;
		nr--;
		nl--;
	}
	for (; nl >= 0 && *nr != 'x'; nl--)
	{
		n1 = (*nr - '0');
		n1 += n2;
		*fr = (n1 % 10) + '0';
		n2 = n1 / 10;
		fr--;
		nr--;
	}
	if (n2)
		*fr = (n2 % 10) + '0';
}
/**
 * main - multiply two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero (success)
 */
int main(int argc, char *argv[])
{
	char *p1, *p2;
	int size, i, digit, zero = 0;
	
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = loop_aroundZero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = loop_aroundZero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = calculate_length(argv[1]) + calculate_length(argv[2]);
	p1 = array(size + 1);
	p2 = array(size + 1);
	for (i = calculate_length(argv[2]) - 1; i >= 0; i--)
	{
		digit = convert_to_digit(*(argv[2] + i));
		multiplication(p2, argv[1], digit, zero++);
		addition(p1, p2, size - 1);
	}
	for (i = 0; p1[i]; i++)
	{
		if (p1[i] != 'x')
			putchar(p1[i]);
	}
	putchar('\n');
	free(p2);
	free(p1);
	return (0);
}
