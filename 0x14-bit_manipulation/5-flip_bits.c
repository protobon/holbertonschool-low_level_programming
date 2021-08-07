/**
  * flip_bits - count number of bits to flip between two nums
  * @n: ul, num1
  * @m: ul, num2
  * Return: uint, number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num;

	if (!n || !m)
		return (-1);
	if ((n ^ m) == 0)
		return (count);
	num = n ^ m;
	while (num != 0)
	{
		count += num & 1;
		num = num >> 1;
	}
	return (count);
}
