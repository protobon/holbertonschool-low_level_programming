#include <stdlib.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of blocks
 * @size: size of each block
 * Return: pointer to new memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	unsigned int i;
	char *p2 = NULL;

	if (nmemb && size)
	{
		p = malloc(nmemb * size);
		if (p)
		{
			p2 = (char *)p;
			for (i = 0; i < (nmemb * size); i++)
				p[i] = 0;
		}
	}
	return (p2);
}
