#include <stdio.h>
#include <string.h>
/**
  * binary_to_uint - converts string of binary num to uint
  * @b: pointer to string
  * Return: uint, converted decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0;
	unsigned int sum = 0, p = 1;

	len = strlen(b);
	if (!b)
		return (sum);
	for (i = len - 1; i >= 0; i--, p *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
			sum += p;
	}
	return (sum);
}
