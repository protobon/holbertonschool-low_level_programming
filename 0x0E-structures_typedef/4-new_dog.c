#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: string, dog's name
 * @age: float, dog's age
 * @owner: string, dog's owner
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = NULL;
	char *c_name = NULL, *c_owner = NULL;
	int i = 0, j = 0;

	if (name)
		for (; name[i] != '\0'; i++)
			;
	if (owner)
		for (; owner[j] != '\0'; j++)
			;
	c_name = malloc(i + 1);
	if (!c_name)
	{
		return (NULL);
	}
	c_owner = malloc(j + 1);
	if (!c_owner)
	{
		free(c_name);
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(c_name);
		free(c_owner);
		return (dog);
	}
	dog->name = c_name;
	dog->age = age;
	dog->owner = c_owner;
	return (dog);
}
