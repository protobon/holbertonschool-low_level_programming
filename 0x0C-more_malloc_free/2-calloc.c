#include <stdlib.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of blocks
 * @size: size of each block
 * Return: pointer to new memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;
	unsigned int i;

	if (nmemb && size)
	{
		p = malloc(nmemb * size);
		if (p)
		{
			for (i = 0; i < nmemb; i++)
				p[i] = 0;
		}
	}
	return (p);
}
