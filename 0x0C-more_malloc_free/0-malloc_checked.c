#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size in bytes
 * Return: pointer or err code 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
