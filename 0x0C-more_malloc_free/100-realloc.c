#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to previous memory
 * @old_size: unsigned int, size of previous memory
 * @new_size: unsigned int, size of reallocated memory
 * Return: pointer to reallocate memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m = NULL;
	char *p = NULL, *f = NULL;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = ptr;
	m = malloc(new_size);
	if (!m)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		f = m;
		if (p)
		{
			for (; i < new_size; i++)
				f[i] = p[i];
		}
		m = f;
		free(ptr);
		free(f);
		free(p);
	}
	return (m);
}
