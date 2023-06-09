#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * struct dog - predefined structure
 *
 * @d: pointer to struct dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
