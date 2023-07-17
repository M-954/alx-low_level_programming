#ifndef DOG_H
#define DOG_H
/**
 * struct dog - name of stuct
 * @name: holds the name
 * @age: holds the age
 * @owner: holds the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
