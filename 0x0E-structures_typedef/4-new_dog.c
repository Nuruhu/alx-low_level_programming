#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: dog age
 * @owner: owner of dog
 *
 * Return: pointer ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *ptr;

	ptr = malloc(sizeof(*ptr));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	ptr->name = malloc(i + 1);
	ptr->owner = malloc(j + 1);

	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name), free(ptr->owner), free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ptr->name[k] = name[k];
	}
	ptr->name[k] = '\0';
	for (k = 0; k < j; k++)
	{
		ptr->owner[k] = owner[k];
	}
	ptr->owner[k] = '\0';
	ptr->age = age;
	return (ptr);
	free(ptr);
}
