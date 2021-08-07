#include "main.h"

/**
  * get_bit - gets the value of a bit at given index
  * @n: decimal number, input
  * @index: index
  * Return: bit at index, -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);
	if (index == 0)
		return (n & 1);
	while (index && n)
	{
		n >>= 1;
		index--;
	}
	return (n & 1);
}
