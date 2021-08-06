#include "main.h"

/**
  * clear_bit - sets bit as 0 at index
  * @n: decimal number, input
  * @index: index
  * Return: 1, -1 if error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
