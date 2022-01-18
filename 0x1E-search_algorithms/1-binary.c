#include "search_algos.h"

/**
 * print_Array - prints an array separated by commas
 *
 * @array: pointer to first index of array
 * @size: size of array to print
 */
void print_Array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search - binary search algorithm for arrays
 *
 * @array: pointer to array
 * @size: size of array
 * @value: value to look for
 * Return: int, index of value, -1 if fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;

	print_Array(array, size);
	while (l <= r)
	{
		m = (l + r) / 2;
		if (value > array[m])
		{
			l = m + 1;
			if (r >= l)
				print_Array(array + l, r + 1 - l);
		}
		else if (value < array[m])
		{
			r = m - 1;
			if (r >= l)
				print_Array(array + l, r + 1 - l);
		}
		else
			return (m);
	}
	return (-1);
}
