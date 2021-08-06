#include "main.h"

/**
  * get_bit - gets the value of a bit at given index
  * @n: decimal number, input
  * @index: index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (!n)
		return (-1);
	if (n == 0)
		return (0);
	if (index == 0)
		return (n % 2);
	while (index && n)
	{
		n = n/2;
		index--;
	}
	return (n % 2);
}
