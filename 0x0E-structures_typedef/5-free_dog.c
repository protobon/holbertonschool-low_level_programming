#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog struct
 * @d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	char *p;

	p = d->name;
	free(p);
	p = d->owner;
	free(p);
	free(d);
}
