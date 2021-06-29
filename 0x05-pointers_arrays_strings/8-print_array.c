#include "holberton.h"
#include <stdio.h>

/**
 *print_array - print a message with printf
 *@a : number
 *@n : number
 *
 *Return: end program
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
