#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	size_t namel, ownerl;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	namel = strlen((name) + 1);

	ownerl = strlen((owner) + 1);

	new_dog->name = malloc(namel);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strncpy(new_dog->name, name, namel);
	new_dog->age = age;

	new_dog->owner = malloc(ownerl);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strncpy(new_dog->owner, owner, ownerl);
	return (new_dog);
}
