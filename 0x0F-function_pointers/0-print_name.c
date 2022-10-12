#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a functionthat print name
 * @name: name to be printed
 * @f: pointer to name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
