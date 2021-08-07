/**
  * get_bit - gets the value of a bit at given index
  * @n: decimal number, input
  * @index: index
  * Return: bit at index, -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0)
		return (0);
	for (; i < index; i++)
	{
		if (i >= 64)
			return (-1);
		n = n >> 1;
	}
	return (n & 1);
}
