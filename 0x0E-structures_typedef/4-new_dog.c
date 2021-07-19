#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: string, dog's name
 * @age: float, dog's age
 * @owner: string, dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;

	dog = malloc(sizeof(dog));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
