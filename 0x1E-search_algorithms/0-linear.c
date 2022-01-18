#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to look for
 * Return: int, index of value, -1 if fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
