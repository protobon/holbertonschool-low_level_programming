#include "search_algos.h"

size_t min(size_t a, size_t b)
{
    return (a < b ? a : b);
}



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
    size_t prev = 0;
    size_t step = sqrt(size);

    printf("Value checked array [%lu] = [%d]\n", prev, array[prev]);
    while (value > array[min(step, size) - 1])
    {
        if (value <= array[step])
            break;
        prev = step;
        printf("Value checked array [%lu] = [%d]\n", prev, array[prev]);
        step += sqrt(size);
        if (prev >= size)
            return (-1);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

    while (array[prev] < value)
    {
        printf("Value checked array [%lu] = [%d]\n", prev, array[prev]);
        prev++;
        if (prev > min(step, size))
            return (-1);
    }

    if (array[prev] == value)
        return (prev);

    return (-1);
}