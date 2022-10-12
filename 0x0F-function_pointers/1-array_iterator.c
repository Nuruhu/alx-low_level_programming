#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: itrator that execute function
 * @size: size of array
 * @action: to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action == NULL || array == NULL)
		return;
	while (size--)
		action(array[i++]);
}
