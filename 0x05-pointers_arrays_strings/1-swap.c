#include "holberton.h"

/**
 * swap_int - swaps the value inside pointer a with value inside pointer b
 * @a: pointer of int a
 * @b: pointer of int b
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
