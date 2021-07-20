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
	int i = 0, j = 0, cpy = 0;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	c_name = malloc(i + 1);
	if (c_name)
	{
		for (; cpy <= i; cpy++)
			c_name[cpy] = name[cpy];
	}
	else
	{
		free(dog);
		return (NULL);
	}
	c_owner = malloc(j + 1);
	if (c_owner)
	{
		for (cpy = 0; cpy <= j; cpy++)
			c_owner[cpy] = owner[cpy];
	}
	else
	{
		free(dog);
		free(c_name);
		return (NULL);
	}
	dog->name = c_name;
	dog->age = age;
	dog->owner = c_owner;
	return (dog);
}
