#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: returns 0
 */
int main(void)
{
	long i, a, b, c;

	a = 1;
	b = 1;
	printf("%ld, ", a);
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		if (i < 48)
		{
			printf("%ld, ", c);
		} else
		{
			printf("%ld", c);
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
