#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a dynamic matrix
 * @width: int
 * @height: int
 * Return: pointer to matrix
 */
int **alloc_grid(int width, int height)
{
	int **p1 = NULL;
	int *p2 = NULL;
	int i = 0, j = 0, fail = 0;

	if (width <= 0 || height <= 0)
	{
		return (p1);
	}
	p1 = malloc(sizeof(int *) * height);
	if (p1)
	{
		for (; i < height; i++)
		{
			p2 = malloc(sizeof(int) * width);
			if (p2)
			{
				for (; j < width; j++)
				{
					p2[j] = 0;
				}
			}
			else
			{
				fail = 1;
			}
			p1[i] = p2;
			if (fail)
			{
				for (j = 0; j < height; j++)
				{
					free(p1[j]);
				}
				free(p1);
			}
		}
	}
	return (p1);
}
