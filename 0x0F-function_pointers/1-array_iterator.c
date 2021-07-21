#include <stddef.h>
/**
 * array_iterator - iterates an array
 * @array: array
 * @size: size of array, int
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
