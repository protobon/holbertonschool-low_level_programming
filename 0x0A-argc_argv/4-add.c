#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of every number argument
 * @argc: int count
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if ((argv[i][j] >= '0') && (argv[i][j] <= '9'))
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
