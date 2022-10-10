#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - A new type describing a dog
 * @name: the name the dog
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
