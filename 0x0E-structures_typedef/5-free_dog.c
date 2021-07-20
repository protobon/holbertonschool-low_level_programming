#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog struct
 * @d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	dog_t *p = d;

	if (d)
	{
		free(p->name);
		free(p->owner);
		free(p);
	}
}
