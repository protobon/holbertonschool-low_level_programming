#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates arguments passed to executable
 * @argc: int
 * @argv: array of characters
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*p)(int, int);

	p = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '%' || argv[2][0] == '/') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(a, b));
	return (0);
}
