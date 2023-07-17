#include "dog.h"
/**
 * struct dog - initializes struct dog
 * @d: pointer to dog
 * @name: holds name
 * @age: holds age
 * @owner: holds owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;

	d -> age = age;

	d -> owner = owner;
}
