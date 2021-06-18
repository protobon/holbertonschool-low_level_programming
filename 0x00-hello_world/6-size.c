#include <stdio.h>
/**
 * main - using printf to display size of types
 * Return: returns value 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(charType));
	printf("Size of an int: %zu byte(s)", sizeof(intType));
	printf("Size of a long int: %zu byte(s)", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)", sizeof(doubleType));
	printf("Size of a float: %zu byte(s)", sizeof(floatType));
	return (0);
}
