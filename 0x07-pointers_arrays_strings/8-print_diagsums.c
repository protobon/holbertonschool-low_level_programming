#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diags of a sq matrix
 * @a: array of int
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int i = 0, da, db;
	int *p;

	p = a;
	for (; i < size; i++)
	{
		da += *p;
		p += size + 1;
	}
	p = a + size - 1;
	i = 0;
	for (; i < size; i++)
	{
		db += *p;
		p += size - 1;
	}
	printf("%d, %d\n", da, db);
	da = 0;
	db = 0;
}
