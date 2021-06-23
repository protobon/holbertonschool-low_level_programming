#include <stdio.h>
/**
 * main - prints sum of all even numbers in fibonacci sequence
 * Return: returns 0
 */
int main(void)
{
	long res, a, b, fib;

	a = 1;
	b = 1;
	while (fib < 4000000)
	{
		fib = a + b;
		if ((fib % 2) == 0)
		{
			res += fib;
		}
		a = b;
		b = fib;
	}
	printf("%ld\n", res);
	return (0);
}
