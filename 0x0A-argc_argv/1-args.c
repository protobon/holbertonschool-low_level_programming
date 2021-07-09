#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed to program
 * @argc: int count
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
