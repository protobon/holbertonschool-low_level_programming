#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diags of a sq matrix
 * @a: array of int
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int i = 0, da = 0, db = 0;

	for (; i < size; i++)
	{
		da += a[(size + 1) * i];
		db += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", da, db);
}
