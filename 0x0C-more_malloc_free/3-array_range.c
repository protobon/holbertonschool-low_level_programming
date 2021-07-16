#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int, min value entered
 * @max: int, max value entered
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int i = 0, count = 0;

	if (min <= max)
	{
		count = max - min;
		p = malloc(sizeof(int) * (count + 1));
		if (p)
		{
			for (i = 0; (i < count) && (min <= max); i++, min++)
				p[i] = min;
		}
	}
	return (p);
}
