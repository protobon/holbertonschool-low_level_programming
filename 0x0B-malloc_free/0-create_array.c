#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates a string of size with c repeated
 * @size: unsigned int
 * @c: char
 * Return: pointer to string
 */
char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i = 0;

	if (size > 0)
	{
		p = malloc(sizeof(char) * size);
		if (p)
		{
			for (; i < size; i++)
			{
				p[i] = c;
			}
			p[i] = '\0';
		}
	}
	return (p);
}
