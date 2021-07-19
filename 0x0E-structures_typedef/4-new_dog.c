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
	dog_t *dog;
	char *c_name, *c_owner;
	int i = 0, j = 0;

	dog = malloc(sizeof(dog));
	if (dog == NULL)
		return (NULL);
	if (name)
	{
		while (name[i] != '\0')
			i++;
		c_name = malloc(i + 1);
		dog->name = c_name;
	}
	if (age)
		dog->age = age;
	if (owner)
	{
		while (owner[j] != '\0')
			j++;
		c_owner = malloc(j + 1);
		dog->owner = c_owner;
	}
	return (dog);
}
