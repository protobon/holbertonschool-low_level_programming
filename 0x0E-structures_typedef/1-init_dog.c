#include "dog.h"

/**
 * init_dog - initializes a structure called dog
 * @d: struct
 * @name: string, dog's name
 * @age: float, dog's age
 * @owner: string, dog's owner
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
