#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: to be iterated and execute a function 
 * @size: size of the array
 * @action: pointer to function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action == NULL || array == NULL)
		return;
	while (size--)
		action(array[i++]);
}
