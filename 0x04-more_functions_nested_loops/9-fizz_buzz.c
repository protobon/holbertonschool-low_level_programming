#include <stdio.h>

/**
 * main - prints numbers 1 to 100 and replace multiples of 3 and 5 for FizzBuzz
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
