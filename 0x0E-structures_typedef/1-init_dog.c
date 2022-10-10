#include "dog.h"
/**
 * init_dog - initialize a type struct dog
 * @d: type struct dog
 * @name: name of the dog
 * @age: name of the dog
 * @owner: owner the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
