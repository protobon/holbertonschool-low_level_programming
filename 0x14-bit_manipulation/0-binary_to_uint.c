#include <stdio.h>
#include <string.h>
/**
  * binary_to_uint - converts string of binary num to uint
  * @b: pointer to string
  * Return: uint, converted decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int sum = 0, p = 1;

	if (!b)
		return (sum);

	len = strlen(b);

	for (len--; len >= 0; len--, p *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] == '1')
			sum += p;
	}
	return (sum);
}
