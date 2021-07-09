#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints every argument passed to program
 * @argc: int count
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
