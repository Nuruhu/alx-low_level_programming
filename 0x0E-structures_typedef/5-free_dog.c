#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that clean or free memory
 * @d: dog structs
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
