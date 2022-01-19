#include "search_algos.h"

/**
 * jump_search - jump searching algorithm
 *
 * @array: array to search
 * @size: size of array
 * @value: value to look for
 * Return: int, value found or -1 if fail
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, x;
	size_t prev = 0;
	size_t step = sqrt(size);

	if (!array)
		return (-1);

	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
			for (x = prev; x <= i; x++)
			{
				printf("Value checked array[%lu] = [%d]\n", x, array[x]);
				if (array[x] == value)
					return (x);
			}
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
	}
	return (-1);
}
