#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print a random number n and comment if positive, negative or zero
 * Return: reutrns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
