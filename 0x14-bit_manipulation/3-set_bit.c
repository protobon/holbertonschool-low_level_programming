#include "main.h"

/**
  * set_bit - sets bit as 1 at index
  * @n: decimal number, input
  * @index: index
  * Return: 1, -1 if error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
