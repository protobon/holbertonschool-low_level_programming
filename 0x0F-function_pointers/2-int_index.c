/**
 * int_index - searches for an int from array
 * @array: array of int
 * @size: size of array
 * @cmp: pointer to array
 * Return: -1 if fails, i if success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
