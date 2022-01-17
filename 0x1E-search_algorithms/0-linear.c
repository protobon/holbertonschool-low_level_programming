#include "search_algos.h"

/**
 * 
 * 
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (!array)
        return (-1);

    for (; i < size; i++)
    {
        printf("Value checked array[%d]\n", array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}