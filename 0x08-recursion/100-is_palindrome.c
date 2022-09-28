#include "main.h"
/**
 * strl - a function that count string length
 * @s: string input
 *
 * Return: string length
 */
int strl(char *s)
{
	if (*s != '\0')
		return (1 + strl(s + 1));
	return (0);
}
/**
 * pld - a function that checks the input string
 * is palidrome or not
 * @str: input string
 * @l: start from leftmost string character
 * @r: start from rightmost string character
 *
 * Return: the conditional result
 */
int pld(char str[], int l, int r)
{
	if (l >= r)
		return (1);
	if (str[l] != str[r])
		return (0);
	if (l <= r || l < r + 1)
		return (pld(str, l + 1, r - 1));
	return (1);
}
/**
 * is_palindrome - a function that return 1 if the
 * the string is palindrome, 0 ifnot.
 * @s: string pointer point to char string
 *
 * Return: always zero (success)
 */
int is_palindrome(char *s)
{
	int length;

	length = strl(s);
	if (length == 0)
		return (1);
	return (pld(s, 0, length - 1));
}
